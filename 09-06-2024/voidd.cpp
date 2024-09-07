// #include<iostream>
// using namespace std;

// int main() {
//     cout << sizeof(void) << endl;
// }
// like in void when we print the sizeof of void pointer then there se no 
// if somefunction does not use any return thing then we can use void 
// if somefunction doest not take any parameter then we can use void pointer 


// void fun() {
//     cout << " this is main function " << endl;
// }
// int main() {
//     fun();
// }

#include <iostream>

using namespace std;

int main() {
   //  int *a = new int(10);
   //  void* b = static_cast<void*>(a); // Corrected static cast to void*
   //  void* c = a; // c is already a void*
    
   //  // Cast back to int* before dereferencing
   //  cout << *static_cast<int*>(b) << endl;
   //  cout << *(int*)c << endl;

   //  delete a; // Free the allocated memory to avoid memory leak

   //  return 0;
   cout << sizeof(void) << endl;
}
