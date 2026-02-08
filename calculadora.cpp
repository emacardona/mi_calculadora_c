#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char operacion;

cout <<"--- CALCULADORA CON C++ --" <<endl;
cout<<endl;

cout <<"Ingrese el primer numero: ";
cin >> num1;

cout <<"Ingrese el segundo numero: ";
cin >> num2;

cout <<"Ingrese la operacion (+, -, *, /): ";
cin >> operacion;

switch (operacion) {
    case '+':
        cout <<"Resultado: " << num1 + num2 << endl;
        break;
    case '-':
        cout <<"Resultado: " << num1 - num2 << endl;
        break;
    case '*':
        cout <<"Resultado: " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 != 0) {
            cout <<"Resultado: " << num1 / num2 << endl;
        } else {
            cout <<"Error: Division por cero no es permitida." << endl;
        }
        break;
    default:
        cout <<"Operacion invalida." << endl;
    }
    return 0;
}