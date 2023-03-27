#include <iostream>

int main(){
    int idade = 0;
    std::cout<<"Digite a idade do usuario: ";
    std::cin>>idade;
    
    if(idade<=11){
        std::cout<<"Criança";
    }else if(idade<=17){
        std::cout<<"Adolescente";
    }else if(idade<=49){
        std::cout<<"Adulto";
    }else{
        std::cout<<"Idoso";
    }
    
}