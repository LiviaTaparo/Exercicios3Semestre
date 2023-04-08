#include <iostream>

using namespace std;

int main()
{
    float numero, media=0, total=0, positivo;
    int totaldenumeros =0;

    for(int i = 0; i < 6; i++)
    {
        cout <<"Digite um numero: ";
        cin >> numero;

        if(numero > 0)
        {
            positivo++;
            total = total + numero;

        }


    }

    media = total / positivo;



    cout <<"Media: " <<  media << endl;

    cout << "Numeros positivos: " <<  positivo;



}
