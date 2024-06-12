#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

/*
Soma de dois valores e devolve resultados
Entradas:
		x - primeiro valor
		y - segundo valor
Saida:
		Soma dos dois valores
*/
double soma(double x, double y) {
	return x + y;
}

/*
Subtração de dois valores e devolve resultados
Entradas:
		x - primeiro valor
		y - segundo valor
Saida:
		Subtração dos dois valores
*/
double sub(double x, double y) {
	return x - y;
}

/*
Multiplicação de dois valores e devolve resultados
Entradas:
		x - primeiro valor
		y - segundo valor
Saida:
		Multiplicação dos dois valores
*/
double multi(double x, double y) {
	return x * y;
}
	
/*
Divisão de dois valores e devolve resultados
Entradas:
		x - primeiro valor
		y - segundo valor
Saida:
		Divisão dos dois valores ou erro se o divisor for 0.
*/
static double divisão(double x, double y) {
	if (y == 0) {
		printf("ERRO: Não possivel a divisão por 0.\n");
		return NAN;
	}
	return x / y;
}

/*
Raíz quadrada de um valor e devolve resultados
Entradas:
		x - primeiro valor
Saida:
		Raiz quadrada do valor ou mensagem de erro caso o valor for negativo.
*/
double raiz(double x) {
	if (x < 0) {
		printf("ERRO: Não existe raiz quadrada de um número negativo.\n");
		return NAN;
	}
	return sqrt(x);
}

/*
O quadrado de um valor e devolve resultados
Entradas:
		x - primeiro valor
Saida:
		Quadrado do valor.
*/
double quadrado(double x) {
	return x * x;
}

/*
O fatorial de um valor e devolve resultados
Entradas:
		x - primeiro valor
Saida:
		Fatorial do valor ou mensagem de erro caso o valor for negativo.
*/
double fatorial(double x) {
	if (x < 0) {
		printf("ERRO: Não existe fatorial de um número negativo.\n");
		return NAN;
	}
	if (x == 0 || x == 1) {
		return 1;
	}
	double result = 1;
	for (int i = 2; i <= x; i++) {
		result *= i;
	}
	return result;
}


// Limpa o ecrã
void clear() {
#if defined(_WIN32) || defined(_WIN64)
	system("cls");
#else
	system("clear");
#endif
}


// Comfirma se o valor escolhido pelo utilizador é válido.
double valor_valido() {
	double valor;
	while (1) {
		if (scanf("%lf", &valor) != 1) {
			printf("ERROR: Caracter inválido. Introduza um número:\n");
			while (getchar() != '\n'); 
		}
		else {
			return valor;
		}
	}
}

int main()
{
	int operador;
	double x, y, resultado;

	setlocale(LC_CTYPE, "pt-PT");

	while (1){
		clear();
		printf("Calculadora Simples\n"
			"1) Adição\n"
			"2) Subtração\n"
			"3) Multiplicação\n"
			"4) Divisão\n"
			"5) Raízes quadradas\n"
			"6) Quadrado\n"
			"7) Fatorial de qualquer número\n"
			"8) Sair\n\n");

		printf("Escolha o número referente à operação que quer fazer: ");
		scanf_s("%d", &operador);

		clear();

		switch (operador) {
		case 1:
			printf("Soma:\n"
				"Introduz dois números:\n");
			x = valor_valido();
			y = valor_valido();
			resultado = soma(x, y);
			printf("%.2f + %.2f = %.2f\n", x, y, resultado);
			break;
		case 2:
			printf("Subtração:\n"
				"Introduz dois números:\n");
			x = valor_valido();
			y = valor_valido();
			resultado = sub(x, y);
			printf("%.2f - %.2f = %.2f\n", x, y, resultado);
			break;
		case 3:
			printf("Multiplicação:\n"
				"Introduz dois números:\n");
			x = valor_valido();
			y = valor_valido();
			resultado = multi(x, y);
			printf("%.2f * %.2f = %.2f\n", x, y, resultado);
			break;
		case 4:
			printf("Divisão:\n"
				"Introduz dois números:\n");
			x = valor_valido();
			y = valor_valido();
			resultado = divisão(x, y);
			if (!isnan(resultado)) {
				printf("%.2f / %.2f = %.2f\n", x, y, resultado);
			}
			break;
		case 5:
			printf("Raiz quadrada:\n"
				"Introduz um número:\n");
			x = valor_valido();
			resultado = raiz(x);
			if (!isnan(resultado)) {
				printf("√%.2f = %.2f\n", x, resultado);
			}
			break;
		case 6:
			printf("Quadrado:\n"
				"Introduz um número:\n");
			x = valor_valido();
			resultado = quadrado(x);
			printf("%.2f^2 = %.2f\n", x, resultado);
			break;
		case 7:
			printf("Fatorial:\n"
				"Introduz um número:\n");
			x = valor_valido();
			resultado = fatorial(x);
			if (!isnan(resultado)) {
				printf("%.2f! = %.2f\n", x, resultado);
			}
			break;
		case 8:
			printf("\nA sair...\n");
			return 0;
			break;
		default:
			printf("Operador inválido. Tente outro.\n");
		}
		printf("\nCarregue Enter para continuar...");
		while (getchar() != '\n');
		getchar();
	}
}