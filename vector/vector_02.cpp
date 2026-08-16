#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "portuguese");

    int highest{0}, lowest{0}, qtd{0};

    std::cout << "Digite a qtd de numeros: \n";
    std::cin >> qtd;

    if (qtd < 0)
    {
        std::cout << "Numero invalido: \n";
        return 1;
    }

    std::vector<int> numbers(qtd);

    for (int i = 0; i < qtd; i++)
    {
        std::cout << "Digite o numero " << (i + 1) << " \n";
        std::cin >> numbers[i];
    }

    highest = numbers[0];
    lowest = numbers[0];

    for (const int &number : numbers)
    {
        if (number > highest)
        {
            highest = number;
        }
        if (number < lowest)
        {
            lowest = number;
        }
    }

    std::cout << "Highest: " << highest << "\n";
    std::cout << "Lowest: " << lowest << "\n";

    /* code */
    return 0;
}
