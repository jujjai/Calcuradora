#include <stdio.h>
#include <math.h>
#include <locale.h>

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
double div(double x, double y) {
	if (y == 0) {
		printf("ERRO: Não possivel a divisão por 0.\n");
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
		return 0;
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
		return 0;
	}

	return 0;
}

int main()
{
	char operador;
	double x, y, resultado;

	setlocale(LC_CTYPE, "pt-PT");

	printf("Calculadora Simples\n"
		"a) Adição\n"
		"b) Subtração\n"
		"c) Multiplicação\n"
		"d) Divisão\n"
		"e) Raízes quadradas\n"
		"f) Quadrado\n"
		"g) Fatorial de qualquer número\n"
		"h) Sair\n\n");
		printf("Escolha a letra referente à operação que quer fazer: ");
		scanf_s("%c", &operador);

	switch (operador) {
	case 'a':
		printf("Soma:\n"
			"Introduz dois números:\n");
			scanf_s("%lf %lf", &x, &y);
			resultado = soma(x, y);
			printf("%.2f + %.2f = %.2f", x, y, resultado);
			break;
		case 'b':
			printf("Subtração:\n"
			"Introduz dois números:\n");
			scanf_s("%lf %lf", &x, &y);
			resultado = sub(x, y);
			printf("%.2f - %.2f = %.2f", x, y, resultado);
			break;
		case 'c':
			printf("Multiplicação:\n"
			"Introduz dois números:\n");
			scanf_s("%lf %lf", &x, &y);
			resultado = multi(x, y);
			printf("%.2f * %.2f = %.2f", x, y, resultado);
			break;
		case 'd':
			printf("Divisão:\n"
			"Introduz dois números:\n");
			scanf_s("%lf %lf", &x, &y);
			resultado = div(x, y);
			printf("%.2f / %.2f = %.2f", x, y, resultado);
			break;
		case 'e':
			printf("Raiz quadrada:\n"
			"Introduz um número:\n");
			scanf_s("%lf", &x);
			resultado = raiz(x);
			printf("√%.2f = %.2f", x, resultado);
			break;
		case 'f':
			printf("Quadrado:\n"
			"Introduz um número:\n");
			scanf_s("%lf", &x);
			resultado = quadrado(x);
			printf("%.2f^2 = %.2f", x, resultado);
			break;
		case 'g':
			printf("Fatorial:\n"
			"Introduz um número:\n");
			scanf_s("%lf", &x);
			resultado = quadrado(x);
			printf("%.2f! = %.2f", x, resultado);
			break;
		case 'h':
			printf("A sair...\n");
			return 0;
	default:
		printf("Operador inválido. Tente outro.\n");
	}
}