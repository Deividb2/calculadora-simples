#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

float calcular(float num1, float num2, char operador);

int main() {
	setlocale(LC_ALL, "pt-BR");

	printf("========= Bem vindo à calculadora =========\n\n");
	printf("Digite a expressão (ex: 5 + 3)");

	while (true) {
		float number1, number2;
		char operador, resposta;

		scanf("%f %c %f", &number1, &operador, &number2);
		system("cls");
		printf("%f %c %f = %f\n", number1, operador, number2, calcular(number1, number2, operador));

		printf("Deseja realizar mais operações? (s/n): ");
		cin >> resposta;

		if (resposta == 's') {
			continue;
		}
		else {
			break;
		}

	}
}

float calcular(float num1, float num2, char operador) {
	switch (operador)
	{
	case '+':
		return num1 + num2;
		break;

	case '-':
		return num1 - num2;

	case '*':
	case 'x':
	case 'X':
	case '.':
		return num1 * num2;
		break;

	case '/':
	case ':':
		if (num2 != 0) return num1 / num2;
		else {
			printf("Erro: divisão por 0");
		}
		break;
	default:
		printf("Operador inválido");
		return 0;
	}

}