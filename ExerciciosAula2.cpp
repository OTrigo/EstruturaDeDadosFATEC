#include <iostream>
#include <string>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int converterTemp(int medida, int temp){
	int newTemp = 0;
	if(medida == 1){
		int newTemp = (temp*9/5)+32;
		
		std :: cout << "A temperatura inicial � de "<< temp << " C e ser� convertida para Fahrenheit \n";
		std :: cout << "Nova temperatura: \n" << newTemp << " F"; 
	}
	else if(medida == 2){
		int newTemp = (temp - 32)*5/9;
		
		std :: cout << "A temperatura inicial � de "<< temp << " F e ser� convertida para Celsius \n";
		std :: cout << "Nova temperatura: \n" << newTemp << " C"; 
	}
	else{
		std :: cout << "Medida inv�lida.";
	}
	return newTemp;
}

int numPrimo(int inteiro){
	for(int i = 0; i < inteiro ; i++){
		
	}
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	std :: cout << "Exercicio 1 \n";
	std:: cout << "Escolha a medida que ser� transformada. 1 para celsius e 2 para Fahrenheit \n";
	
	int medida = 0;
	std :: cin >> medida;
	
	char medidaString;
	if(medida == 1)
		medidaString = 'c';
	else
		medidaString = 'f';
	
	int tempValor = 0;
	std::cout<<"Agora digite o valor num�rico da temperatura em "<< medidaString << "\n";
	std::cin >> tempValor;
	
	converterTemp(medida, tempValor);
	
	std:: cout << "Exercicio 3 \n";
	std:: cout << "Escreva um n�mero inteiro positivo \n";
	
	int numInteiro = 0;
	std :: cin >> numInteiro;
	
	numPrimo(numInteiro);
}
