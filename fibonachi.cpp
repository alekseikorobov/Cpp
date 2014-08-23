// fibonachi.cpp: определяет точку входа для консольного приложения.
//
#include <locale>
#include "stdafx.h"
#include <iostream>  // std; cout; endl;
#include <iomanip>  // setw 
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{ 
	int f1=0,f2=1,t,c;
	cin>> c;
  for(int i=1;i<=c;i++)
  {

  t = f1 + f2;//третья переменная временная
  f1 = f2;// присвоение
  f2 = t;// присвоение
                     // }    выведет только последнее значение
  cout<<t<<endl;
                   //   }  выведет всё количество значений указанное в С
  system("pause");

                 //  }   ждёт
	return 0;
}
