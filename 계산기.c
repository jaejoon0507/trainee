// ȭ�� ���� ��ȯ��

#include<stdio.h>  

int main(void) {
	double temperature, a;
	
	printf("�ٲ� ȭ�� �µ�:");
	scanf_s("%lf", &temperature, sizeof(temperature));

	printf("%lf �� ", temperature);
	temperature = (temperature -  32) / 9 * 5;

	printf("%lg�Դϴ�", temperature);  //%g�� �ǹ� �ִ� ���� ����ϰڴ�
}