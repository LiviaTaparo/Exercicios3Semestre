#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
   float a, b, c, delta, x1, x2;


    cout << setprecision(3);


    cout << "Digite a: ";
    cin >> a;

    cout << "Digite b: ";
    cin >> b;

    cout << "Digite c: ";
    cin >> c;


     if(x1 && x2 >= 0)
     {
     delta =  pow(b, 2) - (4 * a * c);


     x1 = (- b + sqrt(delta))/ (2*a);

     x2 = (- b - sqrt(delta))/ (2*a);

         cout <<"x1 : " << x1;
         cout <<"\nx2 : " << x2;


     }
     else
     {
         cout << "impossivel de calcular.";
     }

}
