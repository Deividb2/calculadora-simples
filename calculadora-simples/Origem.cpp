#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

float calcular(float num1, float num2, char operador);

int main() {
	setlocale(LC_ALL, "pt-BR");

	cout << "========= Bem vindo à calculadora =========\n\n";
	cout << " - número" << endl;
	cout << " - operador" << endl;
	cout << " - número" << endl;

	start:
	float number1;
	float number2;
	char operador;

	cin >> number1;
	cin >> operador;
	cin >> number2;
	system("cls");
	cout << number1 << " " << operador << " " << number2 << " = " << calcular(number1, number2, operador) << endl;
	goto start;
}

float calcular(float num1, float num2, char operador) {
	if (operador == '+') {
		return num1 + num2;
	}
	else if (operador == '-') {
		return num1 - num2;
	}
	else if (operador == '*' || operador == 'x') {
		return num1 * num2;
	}
	else if (operador == '/' || operador == ':') {
		return num1 / num2;
	}
	else {
		cout << "Operador inválido" << endl;
		return 0;
	}

}