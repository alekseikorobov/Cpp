// пример для корректного вывода русских символов

#include "stdafx.h"
#include "stdio.h"
#include "conio.h"
#include <locale> //библиотека для русских символов

int main()
{
	setlocale(LC_ALL,"Russian"); //метод для правки кодировки символов 1

	printf("привет");

	getch();

	return 0;
}
