#include <iostream>
using namespace std;

#define LENGTH 10   
#define WIDTH  5
#define NEWLINE '\n'
#define SHIT "red"
int main() {
   const float wine=5;
   const float ew=10;
   float pip;
   int area;  
   pip= wine / ew;
   area = LENGTH * WIDTH;
   cout << area;
   cout << NEWLINE;
   cout << SHIT;
   cout << NEWLINE;
   cout << pip;
   return 0;
}
