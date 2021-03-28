/*
 ============================================================================
 Name        : Calc_Yalvach.c
 Author      : Murat Yalvach
 Version     : 1
 Description : Simple calculator, 7 possible operations
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

int main(int argc,char *argv[])
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	float a,b;
	char m,r;

	/*shows available operations once at the beginning*/

	printf("Возможные операции: \n");
	printf("+ сложение\n");
	printf("- вычитание\n");
	printf("* умножение\n");
	printf("/ деление\n");
	printf("^ возведение в степень\n");
	printf("r извлечение корня\n");
	printf("! факториал\n");

	 /* do ... while; contains all program*/
do {
	printf("Введите нужную операцию: \n");     /*asks the operation. On it depends
												choosing of one of "cases"*/
	scanf(" %c", &m);
	switch (m)
	{
		case '+':
			printf("Введите первое число: \n");
			scanf(" %f", &a);
			printf("Введите второе число: \n");
			scanf(" %f", &b);
			printf("Результат: %f \n", a+b);
			break;
		case '-':
			printf("Введите первое число: \n");
			scanf(" %f", &a);
			printf("Введите второе число: \n");
			scanf(" %f", &b);
			printf("Результат: %f \n", a-b);
			break;
		case '*':
			printf("Введите первое число: \n");
			scanf(" %f", &a);
			printf("Введите второе число: \n");
			scanf(" %f", &b);
			printf("Результат: %f \n", a*b);
			break;
		case '/':
			printf("Введите делимое: \n");
			scanf(" %f", &a);
			printf("Введите делитель: \n");
			scanf(" %f", &b);
			   if (a == 0)                              /*checks if "a" equal to zero*/
			 	 {
				 	 printf("Делимое не должно равняться нулю. \n");
			 	 }
			   else
				   printf("Результат: %f \n", a/b);
			break;
		case '^':
			printf("Введите основание: \n");
			scanf(" %f", &a);
			printf("Введите степень: \n");
			scanf(" %f", &b);
			printf("Результат: %.6f \n", powf (a, b)); /*counts the nth power of "a"*/
			break;
		case 'r':
			printf("Введите подкоренное выражение: \n");
			scanf(" %f", &a);
			printf("Введите степень корня: \n");
			scanf(" %f", &b);
			printf("Результат: %f \n", powf (a, 1/b)); /*counts the nth root of "a"*/
			break;
		case '!':
				printf("Введите число: \n");
				scanf(" %f", &a);
				b = a;
					if (a>0)
					{
						for(int i = 1; i < b; i++)     /*counts the factorial of "a"*/
						{
							a = a * (b - i);
						}
						printf("Результат: %f \n", a);
					}
					else if (b == 0)
						puts("Результат: 1 \n");
					else
						puts("Ошибка. Число должно быть больше нуля. \n");
			break;
		default:
			puts("Неизвестная операция.");
	}
	printf("Выполнить следующую операцию? y/n \n");
			scanf(" %c", &r);
   } while (r == 'y');                               /*checks to continue or not*/
	return 0;
}
