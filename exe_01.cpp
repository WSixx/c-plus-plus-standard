#include <iostream>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "portuguese");

    int numero{234};
    int *ponteiro{nullptr};

    ponteiro = &numero;
    *ponteiro = 1456;
    std::cout << "Valor de Numero: " << *ponteiro << "\n";
    std::cout << "Endereco de Memoria da variavel Ponteiro: " << &ponteiro << "\n";
    std::cout << "Endereco de Memoria da variavel Numero: " << &numero << "\n";

    void *outroPtr;
    outroPtr = ponteiro;
    *ponteiro = 200 + *ponteiro;

    std::cout << "Valor de Numero: " << *(int *)outroPtr << "\n";

    return 0;
}
