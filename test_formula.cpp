// Пример 3. В котором показан пример использования функций 
//

#include "stdafx.h"
#include "conio.h"
#include "stdio.h"


int multi(int a,int b)
{
	int r = a * b;

	
	return r; // t.e.chto poluchilos is formuli teper eto r. 
}

float Amper(int w,int u) //imya funkcii, tip peremennih, eto novoe telo.
{ 
    if(u <= 0)
	{
		//u=1;

		return -1;// esli u menshe nulya vozvrashaem -1 etomu u.
	}
  float A = (float)w / (float)u;//mojno v odnom meste ukazat tip i nevozvrashatsa bolee..?

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
