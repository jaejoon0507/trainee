/*#include <stdio.h>

int main(void) {
	printf("%d %#x %#o", 128, 128, 128);       //#x = 8������ ��ȯ, #o = 16������ ��ȯ

	return 0;
}*/

/*
#include <stdio.h>
#define EXCGABGE 1200    //��ȣ���

int main(void) {
	int won;
	won = EXCGABGE * 5;  // ��ȣ ����� �״�� ���� �� = ������ �Լ�

	printf("%d", won);

	return 0;
}
*/
/*
#include <stdio.h>

int main(void) {
	const int EXCHAGE = 100;    //const = ��ȣ ��� ���� 
}*/


//��� ���� ���� ���̻� U,u = unsigned int, l,  L = long, ul, UL = Unsigned long, F = afloat


//inf = �����÷ο�� �ش� ������ ���Ѵ븦 �ǹ��ϴ� Ư���� ��, %e = ���� ǥ������� ���

/*
#include <stdio.h>

int main(void) {
	printf("%c", 7);       //�Ҹ��� ���� �ϴ� �����. �̽������� ������������ \a�� ����.
	printf("\\");

	return 0;
}*/
/*
#include <stdio.h>

int main(void) {

	int id, pass;

	printf("���̵�� �н����带 �Է��Ͻÿ�.");
	printf("id :____ \b\b\b\b\b");
	scanf_s("%d", &id, sizeof(id));

	return 0;

}*/
/* ���������� ���
#include <stdio.h>

int main(void) {
	
	int x, y;

	x = 1;
	y = ++x;        // x�� ���� 1�� ���ϰ� y�� ����
	printf("x = %d  y =%d ",x , y);

	y = x++;       // y�� ���� ���� �� x�� 1�� ����
	printf("x = %d  y = %d ", x, y);

	return 0;
}*/
/* ��Ʈ �̵�
#include <stdio.h>


int main(void) {
	int x = 9;

	printf("%d >> 2 = %d \n", x, x >> 5);
	printf("%d << 2 = %d \n", x, x << 2);

	return 0;


}*/
/*���� ��ȯ
#include <stdio.h>

int main(void) {

	double f;

	f = (double)5 / 2;

	printf("%f", f);

	return 0;
}*/
/*
#include <math.h>      // �ŵ������� �����ϱ� ���� ��ó����
#include <stdio.h> 

int main(void) {
	int init_moneny = 24, years = 382; // ���� ����, ���� �Ⱓ
	double interest = 0.06; // ����

	double monet = init_moneny * pow((1.0 + interest), years); //pow �ŵ�����
	printf("�ε��� ���� = %f", monet);

	return 0;
	
}*/