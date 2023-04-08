#include <iostream>
#include <string>

using namespace std;

int main()
{
    string vendedor;
    float salario, vendas, salarioT;

    for(int i = 0; i < 3; i++)
    {
       cout << "\nInforme o vendedor: ";
    getline(cin, vendedor);

    cout << "Seu salario fixo: ";
    cin >> salario;

    cout << "Informe quantas vendas em dinheiro: ";
    cin >> vendas;

    cin.ignore();

    salarioT = salario + (vendas * 0.15);

    cout << "\nO Vendedor: " << vendedor << " \nRecebeu salario total de " << salarioT << " com comissão" << "\n**************";
    }



}
