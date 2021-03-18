#include<stdio.h>
  
// 1번. 정수를 입력 받아 짝수 홀수 출력 프로그램
/*int main(void){  
	int a;
	         
	scanf_s("%d", &a, sizeof(a));

	if (a % 2 == 0)
		printf("짝수");
	else
		printf("홀수"); 
}*/

// 2번. 전위 연산자와 후위 연산자
/*
int main(void) {
	int x = 7; int y = 7; int a;

	a = ++x + y--;     // 앞에 증감 혹은 감소 연산자가 있으면 계산 전 뒤에 있으면 계산 끝나고

	printf("%d \n", a);
}*/
#include<stdlib.h>   //난수(rand)값을 얻기 위한 헤더 파일
int main(void) {
	for (int i = 0; i < 100; i++) {
		printf("%d \n", (rand() % 70 + 1));      // 1~70까지 난수 구함
	}

}
