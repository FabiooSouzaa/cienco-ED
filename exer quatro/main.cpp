#include <iostream>

using namespace std;

int main()
{
    float salario, novosalario;

    //Solicitando ao usuario o salario atual

    cout << "Digite o salario do funcionario: ";
    cin >> salario;
    //calculando

    if (salario < 1000) {
        novosalario = salario + salario * 15/100;
    }
    else if (salario <= 1500) {
        novosalario = salario + salario * 10/100;
    }
    else {
        novosalario = salario + salario * 5/100;

    }
    cout << "O novo salario vai ser de... " << novosalario << endl;
    return 0;
}
