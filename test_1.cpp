// test_1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "stdio.h" // ���������� ��� ������� - printf,scanf
#include "conio.h" // ���������� ��� ������� - getch
#include "math.h"



void test1()
{	
	float a,b,c,d,root1,root2; //��������� ������ ��� 6 ���������� ���� float - ����� � ��������� ������
	//clrscr();
	printf("a=");//�������� �
	scanf ("%f",&a); // ���� ����� ������ � ���������� �� ��������� ����
		
	printf("\nb=");	
	scanf ("%f",&b);
	
	printf("\nc=");	
	scanf ("%f",&c);

	d = sqrt(b*b - 4 *a*c); // sqrt - ����������� ������� �� ���������� math.h

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
