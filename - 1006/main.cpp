#include <iostream>

using namespace std;

int main()
{
   float a, b, c, media;

   cout << "Informe nota a: ";
   cin >> a;
   cout << "Informe nota b: ";
   cin >> b;
   cout << "Informe nota c: ";
   cin >> c;

   media = (a*2 + b*3 + c*5) / 10;

   cout << "Media final: " << media;

}
