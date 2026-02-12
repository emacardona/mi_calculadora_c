#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num1, num2;
    char operacion;
    bool continuar = true;

    while (continuar) {
        cout << "\n--- CALCULADORA CON C++ ---" << endl;
        cout << "Ingrese la operacion (+, -, *, /, p: potencia, r: raiz, s: salir): ";
        cin >> operacion;

        if (operacion == 's') {
            continuar = false;
            cout << "Saliendo..." << endl;
            break;
        }

        switch (operacion) {
            case '+':
                cout << "Ingrese el primer numero: "; cin >> num1;
                cout << "Ingrese el segundo numero: "; cin >> num2;
                cout << "Resultado: " << num1 + num2 << endl;
                break;
            case '-':
                cout << "Ingrese el primer numero: "; cin >> num1;
                cout << "Ingrese el segundo numero: "; cin >> num2;
                cout << "Resultado: " << num1 - num2 << endl;
                break;
            case '*':
                cout << "Ingrese el primer numero: "; cin >> num1;
                cout << "Ingrese el segundo numero: "; cin >> num2;
                cout << "Resultado: " << num1 * num2 << endl;
                break;
            case '/':
                cout << "Ingrese el primer numero: "; cin >> num1;
                cout << "Ingrese el segundo numero: "; cin >> num2;
                if (num2 != 0) {
                    cout << "Resultado: " << num1 / num2 << endl;
                } else {
                    cout << "Error: Division por cero no permitida." << endl;
                }
                break;
            case 'p':
                cout << "Ingrese la base: "; cin >> num1;
                cout << "Ingrese el exponente: "; cin >> num2;
                cout << "Resultado: " << pow(num1, num2) << endl;
                break;
            case 'r':
                cout << "Ingresa el numero: "; cin >> num1;
                if (num1 >= 0) {
                    cout << "Resultado: " << sqrt(num1) << endl;
                } else {
                    cout << "Error: No se puede calcular raiz de un negativo." << endl;
                }
                break;
            default:
                cout << "Operacion invalida." << endl;
        }
    } 

    return 0;
}