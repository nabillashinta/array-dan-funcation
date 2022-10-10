#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0
void say_hello (string nama){
  cout << "halo," << nama<<endl;
  }
  
  void tambah (int angka1, int angka2){
       printf ("perjumlahan %d + %d = %d",
       angka1, angka2, angka1 + angka2);
  }
 int main ()
{
     say_hello ("Nabila");
     tambah (10, 5);
     tambah (20, 10);
     tambah (25, 25);
     
     }