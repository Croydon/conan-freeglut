#include "GL/freeglut.h"
#include <iostream>

void error_handler( const char *fmt, va_list ap)
{
    std::cout << fmt;
}

int main(int argc, char **argv)
{
    glutInitErrorFunc(error_handler);
    glutInit(&argc, argv);
    std::cout << glutGet(GLUT_VERSION);
    return 0;
}
