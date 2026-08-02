#include <iostream>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "portuguese");

    int Numero = 10;
    double Salario = 4567.90;
    std::cout << "\n Tamanho Variavel Numero: " << sizeof(Numero) << " Bytes \n";
    std::cout << "\n Tamanho Variavel Salario: " << sizeof(Salario) << " Bytes \n";
    system("PAUSE");

    return 0;
}
