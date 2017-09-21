#include<iostream>
#include<string>

using namespace std;

int main() {
string movie= "";
cout <<"Dude! Enter the movie name: \n";
getline(cin, movie);
int metascore=0;
cout << "The rating for the movie: \n"<< movie << "?\n";
cin>>metascore;
return 0;
} 
