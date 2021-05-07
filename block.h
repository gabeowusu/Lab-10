//Group Members
//Gabriel Owusu
//Kelvin Offei Anim

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <cmath>
using namespace std ;

#ifndef Block_H //Header guard
#define Block_H

//block structure for rectangles
struct rectBlock{
    int width;
    int height;
    int length;
};

//block structure for square rectangles
struct sqrBaseRect{
    int width;
    int length;
};

//block structure for cuboids
struct cubiod{
    int length;
};

//block structure for cylinders
struct cylinder{
    int diameter;
    int height;
};


#endif
