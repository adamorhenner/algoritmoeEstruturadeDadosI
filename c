#1

using namespace std;

int main ()
{int A,B,C;
	A = 5;
	B = 7;
	C = A + B;
	cout<<(C);
	
}

----------------------------------
#2
using namespace std;
int C;
void Soma()
{	int A, B;
	A = 5;
	B = 7;
	C = A + B;
	cout<<(C);
}

int main() 
{	int A, B;
	A = 17;
	B = 15;
	Soma();
	cout<<(A);
	cout<<(B);
}

----------------------------
#3
using namespace std;

void SOMA()
{	int a,b,c;
	a = 5;
	b = 7;
	c = a+b;
	
}

int main ()
{	soma();
	cout<<(c);
}
-------------------------------
#4
using namespace std;

int c;

void Soma()
{	int a,b,c;
	a = 5;
	b = 7;
	c = a + b;
}
int main ()
{	c=15;
	Soma();
	cout<<(c);
}
=======================
#5
int c;
void Soma()
	int a,b;
	a = 5
	b = 7
	c = A + b 

int main()
{	c = 15;
	Soma()
	cout<<(c)

}

======================
#1.1
void soma(a<<b);
{	int c;
	c = x + y;
	cout<<(c);
}
int main ()
{	int a;
	int b;
	cin>>(a);
	cin>>(b);
	soma(a,b)
}
====================
#2.1
void soma (int b<< int a)
{	int c;
	c = b +a;
	cout<<(c);
}

int main()
{	int a;
	int b;
	cin>>(a);
	cin>>(b)
	soma(a,b);
}
=====================
#3.1
using namespace std;

void Soma(int x>> int y)
{	int c;
	c = x + y;
	x = 16;
	y = 13;
	cout<<(c);
}
int main ()
{	int a;
	int b;
	cin<<(a);
	cin<<(b);;
	Soma(a,b)
}
==========================
FUNÇÃO
void Media( ){
	float vp1;
	float vp2;
	float vf;
	cout << "Informe as notas do aluno:";
	cin  >> vp1;
	cin  >> vp2;
	cin  >> vf;
	cout << (vp1+vp2*2+vf*3)/6 << endl;
	
}


int main(int argc, char *argv[]) {
	Media();
	Media();
	Media();
	Media();
	Media();

	
	return 0;
}



