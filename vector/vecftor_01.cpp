#include <iostream>
#include <string>
#include <array>

int main(int argc, char const *argv[])
{

    setlocale(LC_ALL, "portuguese");

    std::array<float, 5> notas{};
    float soma = 0;
    std::string nomeAluno;

    std::cout << "Digite o nome do Aluno: \n";
    std::cin >> nomeAluno;

    int contador = 1;
    for (float &nota : notas)
    {
        std::cout << "Digite a " << contador << "ª nota: ";
        std::cin >> nota;
        contador++;
    }

    for (float &nota : notas)
    {
        soma += nota;
    }

    float media = soma / notas.size();

    std::cout << "\nAluno: " << nomeAluno << "\n";
    std::cout << "Média: " << media << "\n";

    system("PAUSE");
    return 0;
}
