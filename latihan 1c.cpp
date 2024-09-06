#include <iostream>
#include <string>
using namespace std;

int main () {
string lanjut;
int a = 1;

     cout << "Apakah ingin melanjutkan program ( yes/no ) : ";
         cin >> lanjut;
         
   while (lanjut != "no") {
         cout << "Program C++ ke " << a <<endl;
         a++;
         cout << "Apakah ingin melanjutkan program ( yes/no ) : ";
         cin >> lanjut;
   }

         cout << "================="<<endl;
         cout << " PROGRAM SELESAI "<<endl;

return 0;

}