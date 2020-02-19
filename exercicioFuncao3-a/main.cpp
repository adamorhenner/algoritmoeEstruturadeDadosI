#include <iostream>
using namespace std;

/* 1)	Elaborar programa para somar dois números informados pelo usuário. 
Os comandos para leitura dos números e saída em tela do resultado devem estar dentro do módulo main.
A soma dos valores informados no módulo main deverá ser realizada dentro do módulo Soma. Faça as seguintes versões:

a.	Os valores digitados são comunicados para o módulo por meio de variáveis globais.
O resultado da soma é comunicado para o principal por meio de variáveis globais.
*/
float a;
float b;
float c;

void Soma(){
	c = a + b;

}



int main(int argc, char** argv) {
	cout << "Informe a: ";
	cin >> a;

	cout << "Informe b: ";
	cin >> b;
	
	Soma( );
	cout << c;
	return 0;
}
