#include<stdio.h>
  
// 1��. ������ �Է� �޾� ¦�� Ȧ�� ��� ���α׷�
/*int main(void){  
	int a;
	         
	scanf_s("%d", &a, sizeof(a));

	if (a % 2 == 0)
		printf("¦��");
	else
		printf("Ȧ��"); 
}*/

// 2��. ���� �����ڿ� ���� ������
/*
int main(void) {
	int x = 7; int y = 7; int a;

	a = ++x + y--;     // �տ� ���� Ȥ�� ���� �����ڰ� ������ ��� �� �ڿ� ������ ��� ������

	printf("%d \n", a);
}*/
/*#include<stdlib.h>   //����(rand)���� ��� ���� ��� ����
int main(void) {
	for (int i = 0; i < 100; i++) {
		printf("%d \n", (rand() % 70 + 1));      // 1~70���� ���� ����
	}

}*/

/*#include <stdio.h>

int main(void) {

	int a = 4;
	printf("%2d", a);

}*/

// ������ 
/*
int main(void) {

	int a = 10; 
	int *p;
	p = &a;
	printf("%p \n", p);   //�ּ� ���
	printf("%d   \n", *p);     //�ּ� ��ġ�� ����� �� ���
	
	*p = 20;

	printf("%d \n", *p);
	printf("%d", a);
}*/
/*
void swap(int* p, int n);
void get_array_avg(int* values, int n);

int main() {
	int a[5] = { 10,20,30,40,50 };
	double q = 2;
	swap(&a, 5);
	get_array_avg(&a,5);
	q = a[0] / 5;
	printf("%g", q);
	
}
void swap(int* p, int n) {
	for (int i = 0; i < n - 1; i++) {
		printf("%d    ", p[i]);
	}
}
void get_array_avg(int* values, int n) {
	for (int i = 0; i < n-1; i++) {
		values[0]  += values[i+1];
	}
	
}*/

/*#include<stdlib.h>
int function(int num1[], int num2[]);

int function(int num1[], int num2[]) {
	int *num;
	int j, i, temp;
	num = malloc(sizeof(int) * 6);
	
	for (i = 0, j = 3; i < 3; i++, j++) {
		num[i] = num1[i];
		num[j] = num2[i];}
	for (int i = 0; i <= 5; i++) 
		for (int j = 0; j < i; j++) {
			temp = num[i];
			num[i] = num[j];
			num[j] = temp;
		}
		return *num;
		free(num);
	
}

int main() {
	int A[] = { 12,23,10 };
	int B[] = { 18,32,52 };
	int* c;
    c = malloc(sizeof(int) * 6);
	c = function(A, B);
	for (int i = 0; i < 6; i++)
		printf("%d", c[i]);
	free(c);



}*/

#include <stdio.h>
void main() {
	int a = 10;
	int i;

	for (i = 1; i <= a; i++) {
		if (a % i == 0) {
			printf("%d ", i);
		}
	}
}








