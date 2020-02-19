#include <iostream>

using namespace std;
/*void media3( ){
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
}*/
void media(int par1){
	float vp1;
	float vp2;
	float vf;
	cout << "Informe as notas do "<<par1<<" aluno:";
	cin  >> vp1;
	cin  >> vp2;
	cin  >> vf;
	cout << (vp1+vp2*2+vf*3)/6 << endl;
}

int main(int argc, char *argv[]) {
	media(1);
	media(2);
	media(3);
	media(4);
	media(5);
	return 0;
}
