#include<iostream>

using namespace std;

void func(void);

static int count=10;

main(){
	while(count--){
		func();
	}
	return 0;
}

void func(void){
	static int num=5;
	num++;
	cout<< "i is :"<<num <<endl ;
	cout<<"printing from main var:"<< count <<endl;
}
