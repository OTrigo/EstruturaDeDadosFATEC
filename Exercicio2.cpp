#include <iostream>

int main()
{
    int foo[3][5];
    int sum = 0;
    int soma_linha[3];

    for(int i=0; i<3; i++){
        for(int j=0; j<5; j++){
            std::cout<<"Digite o proximo numero \n";
            std::cin>>foo[i][j];
            sum += foo[i][j];
        }
        soma_linha[i] = sum;
        sum = 0;
    }
    for(int k=0; k<3; k++){
        std::cout<<soma_linha[k]<<"\n";
    }
    return 0;
}
