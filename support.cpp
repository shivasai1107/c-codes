#include <iostream>
 
extern int count;
extern int var;
 
void write_extern(void) {
   std::cout << "Count is " << count << std::endl;
   std::cout << "Anothe value is" << var;
}
