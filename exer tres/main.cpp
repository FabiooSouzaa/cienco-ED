#include <iostream>

using namespace std;

int main()
{
    float numhoras, salmin, salreceber;
    float horatraba, salbruto, imposto;

    cout << "Digite o numero de horas trabalhadas: ";
    cin >> numhoras;
    cout << "Digite o valor do salario minimo: " << endl;
    cin >> salmin;

    horatraba = salmin / 2;
    salbruto = numhoras * horatraba;
    imposto = salbruto * 3/100;
    salreceber = salbruto - imposto;

    cout << "salario bruto: " << salbruto << endl;
    cout << "salario a receber: " << salreceber << endl;

    return 0;
}
