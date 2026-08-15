#include <iostream>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "portuguese");

    // Iniciar com nullptr para nao iniciar com lixo de memoria
    // Nullptr -> aponta lugar nenhum
    int *ptr{nullptr};
    int Numero{101};
    std::cout << "Valor de Numero: " << Numero << "\n";
    // atribuindo endereco de memoria na variavel ponteiro ptr
    ptr = &Numero;
    // COmo ptr tem o endereco ele pode modificar o valor indiretamente
    *ptr = 103;
    std::cout << "Valor de Numero: " << Numero << "\n";

    // Sempre é o primeiro endereco que aquela variavel está alocada
    // independente do tamanho dela, mesmo sendo 4bytes esse int ele só mostra 1
    std::cout << "Endereco de Numero: " << &Numero << "\n";
    std::cout << "Endereco de ptr: " << &ptr << "\n";

    system("PAUSE");
    return 0;
}
