#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   int n[100], y;

   cout << setprecision(4);


   cout << "Qual sera o valor inicial de n? ";
   cin >> y;

   n[0]= y;

   cout << "N[0]" << y << endl;

   for(int i = 1; i < 100; i++)
   {
       n[i] = n[i-1]/2;

     cout << "N[" <<  i << "]" << n[i] << endl;

    }







}
