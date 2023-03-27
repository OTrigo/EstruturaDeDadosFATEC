/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>

int raizDelta(int a, int b, int c){
    return (pow(b,2)-4*a*c);
}

int resolucao(int a, int b, int c){
    int delta = raizDelta(a, b, c);
    
    int x1 = (-b + delta)/2*a;
    int x2 = (-b - delta)/2*a;
    std::cout<<"X1:"<<x1<<"\n"<<"X2:"<<x2;
    
    return x1, x2;
}

int main()
{
    int a,b,c = 0;
    
    std::cout<< "Insira o a:";
    std::cin>>a;
    
    std::cout<< "Insira o b:";
    std::cin>>b;
    
    std::cout<< "Insira o c:";
    std::cin>>c;
    
    resolucao(a, b, c);
    
    
    return 0;
}
