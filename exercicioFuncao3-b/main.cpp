#include <iostream>
using namespace std;

/* 1)	Elaborar programa para somar dois números informados pelo usuário. 
Os comandos para leitura dos números e saída em tela do resultado devem estar dentro do módulo main.
A soma dos valores informados no módulo main deverá ser realizada dentro do módulo Soma. Faça as seguintes versões:

b. Os valores digitados são comunicados para o módulo por meio de variáveis globais.
O resultado da soma é comunicado para o principal por meio de retorno da função.

*/


float a;
float b;
float c;

void Soma(){
	cout<<"informe a: ";
	cin >> a;

	cout<<"informe b: ";
	cin >> b;
	c = a + b;
	return c;
}

int main(int argc, char** argv) {
	Soma( );
	cout << c;

	return 0;
}
