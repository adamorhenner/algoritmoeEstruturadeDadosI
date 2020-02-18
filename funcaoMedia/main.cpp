#include <iostream>

using namespace std;
void media3( ){
	float vp1;
	float vp2;
	float vf;
	cout << "Informe as notas do terceiro aluno:";
	cin  >> vp1;
	cin  >> vp2;
	cin  >> vf;
	cout << (vp1+vp2*2+vf*3)/6 << endl;
}
void media2( ){
	float vp1;
	float vp2;
	float vf;
	cout << "Informe as notas do segundo aluno:";
	cin  >> vp1;
	cin  >> vp2;
	cin  >> vf;
	cout << (vp1+vp2*2+vf*3)/6 << endl;
}
void media1( ){
	float vp1;
	float vp2;
	float vf;
	cout << "Informe as notas do primeiro aluno:";
	cin  >> vp1;
	cin  >> vp2;
	cin  >> vf;
	cout << (vp1+vp2*2+vf*3)/6 << endl;
}

int main(int argc, char *argv[]) {
	media1();
	media2();
	media3();
	
	return 0;
}
