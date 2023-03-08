#include <iostream>

int main()
{
    int foo[2][3];
    int bar[3][2];

    for(int i = 0; i < sizeof(foo) / sizeof(foo[0]); i++)
    {
        for(int j = 0; j < sizeof(foo[0]) / sizeof(int); j++)
        {
            std::cout << "Digite um numero \n";
            std::cin >> foo[i][j];
        }
    }
    std::cout << "Matriz normal:\n";
    for(int k = 0; k < sizeof(foo) / sizeof(foo[0]); k++)
    {
        for(int l = 0; l < sizeof(foo[0]) / sizeof(int); l++)
        {
            std::cout << "pos: " << k+1 << ":" << l+1 << " " << foo[k][l] << "\n";
        }
    }

    for(int tx = 0; tx < sizeof(foo[0]) / sizeof(int); tx++)
    {
        for(int ty = 0; ty < sizeof(foo) / sizeof(foo[0]); ty++)
        {
            bar[tx][ty] = foo[ty][tx];
            std::cout << "Matriz Transposta:";
            std::cout << "pos: " << tx+1 << ":" << ty+1 << " " << bar[tx][ty] << "\n";
        }
    }
}
