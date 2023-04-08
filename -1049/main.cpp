#include <iostream>
#include <string>

using namespace std;

int main()
{
    string classe, tipo, alimentacao, vertebrado, ave, carnivoro, onivoro, mamifero, inseto, herbivoro, invertebrado, anelideo, hematofago, aguia, pomba, homem, vaca, pulga, lagarta, sanguessuga, minhoca;

    cout << "Digite se eh vertebrado ou invertebrado: \n";
    cin >> classe;


 if(classe == "vertebrado")
{

    cout << "Escolha o tipo: ave, mamifero, inseto ou anelideo.  \n";
    cin >> tipo;

  if(tipo == "ave")
    {



     cout << "Escolha a alimentacao: carnivoro, onivoro p/ aves e mamiferos; p/ insetos e anelideos digite um dos anteriores ou se eh hematofago  \n";
     cin >> alimentacao;

   if(alimentacao == "carnivoro")
    {

    cout << "\nSeu Animal eh: aguia" << endl;

   }
   else
    {

    cout << "\nSeu Animal eh: pomba" << endl;

    }

  }
  else
    {



     cout << "Escolha a alimentacao: carnivoro, onivoro p/ aves e mamiferos; p/ insetos e anelideos digite um dos anteriores ou se eh hematofago  \n";
     cin >> alimentacao;

   if(alimentacao == "onivoro")
    {

    cout << "\nSeu Animal eh: homem" << endl;

    }
    else
    {

    cout << "\nSeu Animal eh: vaca" << endl;

   }

  }

 }
    else
        {



    cout << "Escolha o tipo: ave, mamifero, inseto ou anelideo.  \n";
    cin >> tipo;

  if(tipo == "\nSeu Animal eh: inseto")
    {



     cout << "Escolha a alimentacao: carnivoro, onivoro p/ aves e mamiferos; p/ insetos e anelideos digite um dos anteriores ou se eh hematofago  \n";
     cin >> alimentacao;

   if(alimentacao == "hematofago")
    {

    cout << "\nSeu Animal eh: pulga" << endl;

   }
   else
    {

    cout << "\nSeu Animal eh: lagarta" << endl;

   }

  }
  else
    {



     cout << "Escolha a alimentacao: carnivoro, onivoro p/ aves e mamiferos; p/ insetos e anelideos digite um dos anteriores ou se eh hematofago  \n";
     cin >> alimentacao;

   if(alimentacao == "hematofago")
    {

    cout << "\nSeu Animal eh: Sanguessuga" << endl;

    }
   else
    {

    cout << "\nSeu Animal eh: minhoca" << endl;

   }

  }

 }

 return 0;

}






