#ifndef LIBRERIALU_HPP
#define LIBRERIALU_HPP

#include <iostream>

inline void saludar() {
    std::cout << "¡Hola! Mi primera libreria .hpp funciona correctamente." << std::endl;
}

inline int sumar(int a, int b) {
    return a + b;
}

#endif