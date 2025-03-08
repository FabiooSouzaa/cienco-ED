#include <iostream>

using namespace std;

int main()
{
   float precope, precofinal;
   int cp

   cout << "Digite o preço da etiqueta do produto: ";
   cin >> precope;

   cout << "Digite o codico da etiqueta do produto: ";
   cin >> cp;
   switch (cp) {
    case 1:
        precofinal = precope * 10/100;
    break;
    case 2:
        precofinal = precope * 5/100;
    break;
    case 3:
        precofinal = precope;
        break;
    case 4:
        precofinal = precope + 10/100;
        break;
    default:
     cout << "Codico invalido!" << endl;
     return 1;

}
cout << "O valor a ser pago sera: " << precofinal << endl;
}
