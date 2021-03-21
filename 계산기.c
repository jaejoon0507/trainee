// 화씨 섭씨 변환기

#include<stdio.h>  

int main(void) {
	double temperature, a;
	
	printf("바꿀 화씨 온도:");
	scanf_s("%lf", &temperature, sizeof(temperature));

	printf("%lf 는 ", temperature);
	temperature = (temperature -  32) / 9 * 5;

	printf("%lg입니다", temperature);  //%g는 의미 있는 수를 출력하겠다
}