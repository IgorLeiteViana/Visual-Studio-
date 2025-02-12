#include <iostream>  // Include the C++ standard I/O library
#include <cstdio>    // You can still include stdio.h if needed

int main(int argc, char** argv)
{
    int inteiro;

    inteiro = 12 / 5;
    std::cout << inteiro << "\n";  // Output the integer division result
    
    float ComVirgula = 2.4f;
    std::cout << ComVirgula << "\n";  // Output the float value
    
    double Maiorprecisao = 0.0;  // You can initialize and use this variable as needed
    
    unsigned int positivo = 3;
    std::cout << positivo << "\n";  // Output the unsigned integer
    
    bool Booleana = true;  // or false
    std::cout << std::boolalpha << Booleana << "\n";  // Output the boolean value as true/false
    
    size_t Tamanho = 0;  // Size_t can be used to store sizes of objects
    
    return 0;
}
