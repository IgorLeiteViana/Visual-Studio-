#include <iostream>
#include <bitset>

int main() {
    int numero = 60204;
    int numero2 = 25000; // Exemplo de número

    // Converte o número para sua representação binária
    std::bitset<16> binario(numero);
    std::bitset<16> binario2(numero2); // Para 16 bits (pode ajustar conforme necessário)
    
    std::cout << "Numero em binario: " << binario << std::endl;
    std::cout << "Numero em binario: " << binario2 << std::endl;

    // Conta o número de bits '1'
    std::cout << "Bits ativos (1's): " << binario.count() << std::endl;

    return 0;
}
