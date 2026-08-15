#include <iostream>

int main(int argc, char const *argv[])
{
    int numero{102};
    int *ptr = &numero;

    std::cout << "Valor da Variavel Numero: " << numero << "\n";
    std::cout << "Valor da Variavel ptr: " << ptr << "\n";
    std::cout << "Valor do Endereco de numero: " << &numero << "\n";
    std::cout << "Valor do Endereco de ptr: " << &ptr << "\n";
    std::cout << "Valor da Variavel numero (via dereferencia): " << *ptr << "\n";

    *ptr = 20999;
    std::cout << "Valor da Variavel apontada por ptr: " << *ptr << "\n";

    return 0;
}
