#include "ThreeD_Figure.h"
#include "Parallelepiped.h"
#include "Sphere.h"
#include <iostream>
#include <fstream>

ThreeD_Figure** input_array(std::istream &file, ThreeD_Figure **figures, int &num_figures);
void print_figures_information(ThreeD_Figure **figures, int num_figures);

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "ERROR! File name is absents." << std::endl;
        return -1;
    }
    std::ifstream file(argv[1]);
    if (!file) {
        std::cout << "ERROR! File doesn't open." << std::endl;
        return -1;
    }

    ThreeD_Figure **figures = nullptr;
    int num_figures = 0;

    if((figures = input_array(file, figures, num_figures))) {
        file.close();

        print_figures_information(figures, num_figures);
    }

    delete [] figures;

    return 0;
}

ThreeD_Figure** input_array(std::istream &file, ThreeD_Figure **figures, int &num_figures) {
    file >> num_figures;
    if(num_figures <= 0)
        return nullptr;

    figures = new ThreeD_Figure*[num_figures];

    std::string type;
    double radius = 0;
    double height = 0;
    double width = 0;
    double length = 0;
    for(int i = 0; i < num_figures; i++) {
        file >> type;
        if (type == "sphere:") {
            file >> radius;
            figures[i] = new Sphere(radius);
        }
        if (type == "parallelepiped:") {
            file >> length >> width >> height;
            figures[i] = new Parallelepiped(height, width, length);
        }
    }

    return figures;
}

void print_figures_information(ThreeD_Figure **figures, int num_figures) {
    if(!figures || num_figures <= 0)
        return;

    for(int i = 0; i < num_figures; i++) {
        std::cout << figures[i]->get_type() << std::endl;
        std::cout << "area = " << figures[i]->area() << std::endl;
        std::cout << "volume = " << figures[i]->volume() << std::endl << std::endl;
    }
}