// test_1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "stdio.h" // библиотека для функций - printf,scanf
#include "conio.h" // библиотека для функций - getch
#include "math.h"



void test1()
{	
	float a,b,c,d,root1,root2; //выделение памяти для 6 переменных типа float - число с плавующей точкой
	//clrscr();
	printf("a=");//показать а
	scanf ("%f",&a); // ждет ввода данных с клавиатуры по заданному типу
		
	printf("\nb=");	
	scanf ("%f",&b);
	
	printf("\nc=");	
	scanf ("%f",&c);

	d = sqrt(b*b - 4 *a*c); // sqrt - стандартная функция из библиотеки math.h

	if(d < 0)
	{
		printf("not roots");
	}
	else
	{
		root1 = (-b+d)/(2*a);
		root2 = (-b-d)/(2*a);

		printf("\n root1 = %f \t root2=%f",root1,root2);
	}

	getch();
}




int main()
{
	test1();
	return 0;
}
