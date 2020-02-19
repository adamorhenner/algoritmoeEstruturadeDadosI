#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


float Media(float vp1, float vp2, float vf){
	float media = (vp1+vp2*2+vf*3)/6;
	return media;
}


int main(void) {
	float vp1;
	float vp2;
	float vf;
	
	cout << "Informe as notas do primeiro aluno:"<< endl;
	cin  >> vp1;
	cin  >> vp2;
	cin  >> vf;
	float media = Media(vp1, vp2, vf);
	cout<< media<< endl;
	
	cout << "Informe as notas do segundo aluno:"<< endl;
	cin  >> vp1;
	cin  >> vp2;
	cin  >> vf;
	cout<< media<< endl;
	
	cout << "Informe as notas do terceiro aluno:"<< endl;
	cin  >> vp1;
	cin  >> vp2;
	cin  >> vf;	
	cout<< media<< endl;

	return 0;
}

