#define _CRT_SECURE_NO_WARNINGS
#include "Header.h"
using namespace std;

int main() {
	// input :  g0en2Ts8eSoft
	// output : 
	// 28
	// 6
	char a[100];
	int result = 0;
	int cnt = 0; // result의 약수의 개수
	scanf("%s", &a);

	for (int i = 0; a[i]!='\0'; i++) {
		if (a[i] >= 48 && a[i] <= 57) {
			//printf("%d\n", a[i]-48); // 0 2 8
			result = result * 10 + (a[i] - 48);
		}
	}
	for (int i = 1; i<= result; i++) {
		if (result % i == 0) {
			cnt += 1;
		}
	}
	printf("%d\n", result); //  28
	printf("%d\n", cnt);  // 6
	return 0;
}