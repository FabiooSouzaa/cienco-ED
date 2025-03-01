#include <iostream>

using namespace std;

int main()
{
    float peso, altura, imc;

    //entrada de dados
    cout << "Informe seu peso: ";
    cin >> peso;
    cout << "Informe sua altura: ";
    cin >> altura;

    //processamento

    imc = peso / (altura*altura);

    if (imc < 20) {
        cout << "Voce esta abaixo do peso";

    }
    else if (imc >= 20 && imc < 25) {
        cout << "Voce esta no peso ideal";
    }
    else {
        cout << "Voce esta acima do peso";
    }
}
