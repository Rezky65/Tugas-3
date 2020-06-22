#include <iostream>
using namespace std;
 
int main () {
   int  var;
   int  *ptr;
   int  **pptr;

   var = 3000;

   // mengmbil alamat dari var
   ptr = &var;

   // mengamil alamat dari ptr menggunakan operator alamat &
   pptr = &ptr;

   // mengambil nilai menggunakan pptr
   cout << "Value of var :" << var << endl;
   cout << "Value available at *ptr :" << *ptr << endl;
   cout << "Value available at **pptr :" << **pptr << endl;

   return 0;
}
