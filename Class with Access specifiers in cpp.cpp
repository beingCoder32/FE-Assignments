// Class with Access specifiers in cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include<conio.h>
using namespace std;

class Div {
	int a, b, c;
public:
	int d, e;
	void setdata(int a, int b, int c);
	void getdata() {
		cout << "The strength of DIV A is " << a <<"."<< endl<<"The strength of DIV B is " << b << "."<<endl<< "The strength of DIV C is " << c << "."<<endl<< "\nThe strength of DIV D is " << d << "."<<endl<<"The strength of DIV E is " << e << "."<<endl;
	}
};

void Div :: setdata(int a1, int b1, int c1) {
		a = a1;
		b = b1;
		c = c1;
}

int main() {
	Div A;
	A.d = 45;
	A.e = 47;
	A.setdata(51, 49, 48);
	A.getdata();
}

