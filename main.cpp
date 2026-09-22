#include <iostream>
#include "librerialu.hpp" 

int main() {
    saludar();

    int resultado = sumar(5, 10);
    std::cout << "La suma de 5 + 10 es: " << resultado << std::endl;

    return 0;
}