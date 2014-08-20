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
                                //вопрос немного не понятен, даю все возможные варианты ответа:
                                //1. указание типа в скобочках -(float), перед перменной, это для того чтобы перевести тип 
                                //int в float. это называется НЕЯВНОЕ ПРИВЕДЕНИЕ ТИПОВ - такое приведение можно использовать     
                                //только для числовых типов (из int в double или float и наоборот)
                                //явное приведение нужно использовать для перевода из строки (string ) в числовое значение  
                                //(int). для этого есть специальные функции приведения (потом разберем их)
                                //2. если тебя смущает float перед А, то можно было бы объявить вначале данной функции.


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
