// test_formula.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "conio.h"
#include "stdio.h"


int multi(int a,int b)
{
	int r = a * b;

	
	return r;
}

float Amper(int w,int u) 
{ 
    if(u <= 0)
	{
		//u=1;

		return -1;
	}
  float A = (float)w / (float)u;

  return A; 
}

void main()
{   int w, u;
	
	scanf("%i",&w);
	scanf("%i",&u);
	
	float A = Amper (w,u);



	printf("%f",A);

	getch( );

		
}
