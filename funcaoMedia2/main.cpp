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
	cin  >> vp1;
	cin  >> vp2;
	cin  >> vf;
	float media = Media(vp1, vp2, vf);
	cout<< media;
	
	return 0;
}

