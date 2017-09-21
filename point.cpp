#include <iostream>
using namespace std;

int main () {
   int  var = 20;   // actual variable declaration.
   int val=10;
   int  *ip;        // pointer variable 
   int *red;
   ip = &var;       // store address of var in pointer variable
   red= &var;
   red= &val;
   cout << "Value of var variable: ";
   cout << var << endl;

   // print the address stored in ip pointer variable
   cout << "Address stored in ip variable: ";
   cout << ip << endl;

   // access the value at the address available in pointer
   cout << "Value of *ip variable: ";
   cout << *ip << endl;
   cout << "My new pointer is:";
   cout << *red <<endl;
   return 0;
}
