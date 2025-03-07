#include <iostream>

using namespace std;

int main()
{
    //declarando a variaveis
    int idade;
    string categoria;

    //entrada de dados

    cout << "informe a idade: ";
    cin >> idade;
    if (idade < 5) {
        categoria = "Nadador sem classificao";
    }
    else if (idade <= 7) {
        categoria = "Infantil A";
    }
    else if (idade <= 10) {
        categoria = "Infantil B";

    }
    else if (idade <= 13) {
        categoria = "Juvenil A";
    }
    else if(idade <= 17) {
        categoria = "Juvenil B";

    }
    else{
        categoria = "Senior";
    }
    cout << "Classificacao do nadador: " + categoria;
    return 0;
}
