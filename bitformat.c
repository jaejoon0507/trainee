/*#include <stdio.h>

int main(void) {
	printf("%d %#x %#o", 128, 128, 128);       //#x = 8진수로 변환, #o = 16진수로 변환

	return 0;
}*/

/*
#include <stdio.h>
#define EXCGABGE 1200    //기호상수

int main(void) {
	int won;
	won = EXCGABGE * 5;  // 기호 상수를 그대로 쓰는 것 = 리미털 함수

	printf("%d", won);

	return 0;
}
*/
/*
#include <stdio.h>

int main(void) {
	const int EXCHAGE = 100;    //const = 기호 상수 선언 
}*/


//상수 유형 정의 정미사 U,u = unsigned int, l,  L = long, ul, UL = Unsigned long, F = afloat


//inf = 오버플로우시 해당 변수에 무한대를 의미하는 특별한 값, %e = 지수 표기법으로 출력

/*
#include <stdio.h>

int main(void) {
	printf("%c", 7);       //소리가 나게 하는 제어문자. 이스케이프 시퀀스에서는 \a와 간다.
	printf("\\");

	return 0;
}*/
/*
#include <stdio.h>

int main(void) {

	int id, pass;

	printf("아이디와 패스워드를 입력하시오.");
	printf("id :____ \b\b\b\b\b");
	scanf_s("%d", &id, sizeof(id));

	return 0;

}*/
/* 증감연산자 사용
#include <stdio.h>

int main(void) {
	
	int x, y;

	x = 1;
	y = ++x;        // x에 먼저 1을 더하고 y에 대입
	printf("x = %d  y =%d ",x , y);

	y = x++;       // y에 먼저 대입 후 x에 1을 더함
	printf("x = %d  y = %d ", x, y);

	return 0;
}*/
/* 비트 이동
#include <stdio.h>


int main(void) {
	int x = 9;

	printf("%d >> 2 = %d \n", x, x >> 5);
	printf("%d << 2 = %d \n", x, x << 2);

	return 0;


}*/
/*형식 변환
#include <stdio.h>

int main(void) {

	double f;

	f = (double)5 / 2;

	printf("%f", f);

	return 0;
}*/
/*
#include <math.h>      // 거듭제곱을 연산하기 위한 전처리기
#include <stdio.h> 

int main(void) {
	int init_moneny = 24, years = 382; // 투자 원금, 투자 기간
	double interest = 0.06; // 이율

	double monet = init_moneny * pow((1.0 + interest), years); //pow 거듭제곱
	printf("인디언들 원금 = %f", monet);

	return 0;
	
}*/