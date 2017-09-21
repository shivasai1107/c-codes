#include<iostream>
using namespace std;

class morning {
	public:
		morning(){
			cout<<"Hey dude"<<endl;
		}
		void shivasai(){
			cout<<"Welcome to classes sucka"<< endl;
		}
		int cool;
		void gg(int x){
			supercool = x;
			cout<<"The private variable is:"<<x <<endl;
			}
	private:
		void great(){
			cout<<"You can't access it";
		}
		int supercool;
	};

int main(){
	morning news;
	news.shivasai();
	news.gg(10);
	news.cool=5;
	cout<<"The variable is:" << news.cool <<endl;
	return 0;

}
