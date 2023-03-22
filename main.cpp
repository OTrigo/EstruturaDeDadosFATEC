#include <iostream>

int main()
{
    int foo[5][5];
    int sum = 0;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            std::cout<<"Digite o numero \n";
            std::cin>>foo[i][j];
        }
    }

    std::cout<<"Matriz Normal:\n";
    for(int k=0; k<5; k++){
        for(int l=0; l<5; l++){
            std::cout<<foo[k][l]<<"\t";
        }
        std::cout<<"\n";
    }

    std::cout<<"Numeros que estao em que linha + coluna resulta impar:\n";
    for(int m=0; m<5; m++){
        for(int n=0; n<5; n++){
            sum = m+n;
            if(sum % 2 != 0)
                std::cout<<foo[m][n]<<"\t";
        }
        std::cout<<"\n";

    }

    return 0;
}
