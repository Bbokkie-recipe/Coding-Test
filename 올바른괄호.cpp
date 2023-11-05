#define _CRT_SECURE_NO_WARNINGS
#include "Header.h"
#include "stdio.h"
using namespace std;

int main() {
	char a[101];
	int cnt = 0;
	bool isRightDoor = true;
	gets_s(a);
	for (int i = 0; a[i] != '\0'; i++) {
		if (a[i] == '(') {
			cnt += 1;
		}
		else {
			cnt -= 1;
		}
		if (cnt < 0) {
			isRightDoor = false;
		}
	}
	if (cnt !=0) {
		isRightDoor = false;
	}

	if (isRightDoor) {
		printf("YES");
	}
	else {
		printf("NO");
	}
	return 0;
	//(())() YES
	//(((())((((())((((()))))))))) YES
}