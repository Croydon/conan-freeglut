#include "GL/freeglut.h"
#include <iostream>

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    std::cout << glutGet(GLUT_VERSION);
    return 0;
}
