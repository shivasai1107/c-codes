
#include <iostream>

using namespace std;

class Box {
   public:
      double length;   // Length of a box
      double breadth;  // Breadth of a box
      double height;   // Height of a box
      int x;

      double getvalue(void){
	      return length * breadth;
	}
};

int main( ) {
   Box Box1;        // Declare Box1 of type Box
   Box Box2;        // Declare Box2 of type Box
   double volume = 0.0;   // Store the volume of a box here
   double value,value1;
   // box 1 specification
   Box1.height = 5.0; 
   Box1.length = 6.0; 
   Box1.breadth = 7.0;
   Box1.x=25;

   // box 2 specification
   Box2.height = 10.0;
   Box2.length = 12.0;
   Box2.breadth = 13.0;
   Box2.x=50;
	
   // volume of box 1
   volume = Box1.height * Box1.length * Box1.breadth;
   cout << "Volume of Box1 : " << volume <<endl;

   // volume of box 2
   volume = Box2.height * Box2.length * Box2.breadth;
   cout << "Volume of Box2 : " << volume <<endl;
   cout<< "The new declared value is:"<< Box1.x << endl;
   cout<<"New intialization:"<< Box2.x <<endl;
   value= Box1.getvalue();
   cout<<"the value"<< value << endl;
   value1= Box2.getvalue();
   cout<< value1;
   return 0;
}
