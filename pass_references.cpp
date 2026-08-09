#include <iostream>

void trocaNumeros(int &num1, int &num2);

int main(int argc, char const *argv[])
{
    int numero1, numero2;

    setlocale(LC_ALL, "portuguese");
    std::cout << "Digite o primeiro Numero:";
    std::cin >> numero1;
    std::cout << "\nDigite o segundo Numero: ";
    std::cin >> numero2;
    std::cout << " \nValores Antes da troca: ";
    std::cout << " \nNumero1: " << numero1;
    std::cout << " \nNumero2: " << numero2;

    trocaNumeros(numero1, numero2);
    std::cout << " \nValores depois da troca: ";
    std::cout << " \nNumero1: " << numero1;
    std::cout << " \nNumero2: " << numero2 << "\n";

    system("PAUSE");
    return 0;
}
// Recebem dois parametros que serão referencias
void trocaNumeros(int &num1, int &num2)
{
    int temp{num1};
    num1 = num2;
    num2 = temp;
}
