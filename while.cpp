// while.cpp: пример оператора while, в котором ожидается ввод заданных символов (кроме русских символов)
//

#include "stdafx.h"
#include <locale>
#include "stdafx.h"
#include <iostream>  // std; cout; endl;
#include <iomanip>  // setw 
using namespace std;
int main()
{
	setlocale(LC_ALL,"Russian");	

	//char letter[] = {'Д','д','d','D','l','L'}; пример массива

	char letter;
	int done=0;
    bool cikle=true; // цикл=true.истинно для того чтобы войти в тело while
	                 //   т.к. while требует истинного значения.
	while(cikle)
	{
		cout<<"\n Ввидите Д или Н "<<"Enter:"<<endl;

		cin>>letter;
		if(letter=='Д'||letter=='д'||letter=='d'||letter=='D')
	    cikle=false; // цикл прерывается в связи с тем что получили нужное значение.
        
		else if(letter=='Н'||letter=='н')
        cikle=false;
		else cout<<'\a'; // иначе звук динамиков 
	}

       cout<<"Вы ввели букву"<<setw(20)<<letter<<endl;

	system("pause");


	return 0;
}

