// test_ operator.cpp: 
//
#include <locale>
#include "stdafx.h"
#include <iostream>  // std; cout; endl;
#include <iomanip>  // setw 
using namespace std;
int main()
{ 	
	setlocale(LC_ALL,"Russian");	
	bool t = true;
	
	int k = 50;
	if(k == 90)
	{ 
		cout << "k = 90 or k = 40 "<< endl; 
	}
	else
	{ 
		if(k == 50) 
			{cout << "k = 50"<< endl;
			cout << "это всё хорошо"<< endl;
		}	
		else 
			cout << "k != 90 and k != 50"<< endl; 
	}

	system("pause");
	return 0;
}

