// test_operations.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "conio.h"
#include "stdio.h"

int main()
{	
	printf("i++ or ++i:\r\n");
	int i = 5;

	printf("%i\r\n",++i); // = 13
	printf("%i\r\n",i);

	i = i++ + i++; // итерация 5+1 + 5+1 

	printf("%i\r\n",i); // = 12

	int i1 = 5;
	//--------------------|-------|
	i1 = i1++ + ++i1; // (5+1) + (5+1)+1 
	// i++ сначало вывод текущего то чему равно i значения.
	// ++i выводим , то чему равно значение i+1,
	printf("%i\r\n",i1); // = 13
	
	//printf("%i\r\n",i++); //
	//i = 1;
	//printf("%i\r\n",i);//
	//i = 2;

	printf("--------------------------------------------\r\n");
	printf("for:\r\n");

	for(int i = 0,i1 = 10; i < 10 && i1<20; i++,i1++)
	{
		//printf("%i\r\n",i);

		printf("%i  \t  %i  \r\n",i,i1);
	}
	
	printf("--------------------------------------------\r\n");
	i=10;
	for(int f = i; f < 20; f++)
	{printf ("\t%i\r\n",f);
	}
	getch();

	return 0;
}

