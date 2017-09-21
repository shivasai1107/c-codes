#include<iostream>
using namespace std;

int x=5;
int main() {
	int * p;
	p= &x;
	cout<<"the integer x is:"<< &x <<endl;
	cout<<"The pointer value is "<< p << endl;
	cout<<"The pinter is"<< &p <<endl;
	return 0;

}

