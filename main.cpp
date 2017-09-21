#include <iostream>
 
int count ;
extern void write_extern();
int var=15;
main() {
   count = 5;
   write_extern();
}
