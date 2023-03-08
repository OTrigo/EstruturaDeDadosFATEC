#include <iostream>

int main()
{
    int foo[6][6];
    int prod = 1;

    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            std::cout << "Digite um Numero\n";
            std::cin >> foo[i][j];
        }
    }

    for(int k = 0; k < 6; k++)
    {
        prod *= foo[k][k];
    }
    std::cout << "Produto da diagonal principal da matriz:\n" << prod;
}
