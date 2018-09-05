#include "GL/freeglut.h"
#include <iostream>
#include <stdarg.h> /* This declares the va_list type */


void error_handler(const char *fmt, va_list ap)
{
    std::cout << "error";
}

int main(int argc, char **argv)
{
    glutInitErrorFunc(error_handler);
    glutInit(&argc, argv);
    std::cout << glutGet(GLUT_VERSION);
    return 0;
}
