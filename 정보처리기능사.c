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
#include<stdlib.h>   //����(rand)���� ��� ���� ��� ����
int main(void) {
	for (int i = 0; i < 100; i++) {
		printf("%d \n", (rand() % 70 + 1));      // 1~70���� ���� ����
	}

}
