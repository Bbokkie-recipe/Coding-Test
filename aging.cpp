#define _CRT_SECURE_NO_WARNINGS
#include "Header.h"
using namespace std;

int main() {
	// input :  780316-2376152
	// output : 42W
	char a[20];
	int year, age;
	scanf("%s", &a);
	//������ ���ڸ� ���ڷ��ϱ� ���� -48
	// �빮�� A 65, �빮�� Z 90
	// �ҹ��� a 97, �ҹ��� Z 122
	// '0' 48, '9' 57

	if (a[7] == '1' || a[7] == '2') {
		year = 1900 + ((a[0] - 48) * 10 + (a[1] - 48));
	}
	else {
		year = 1900 + ((a[0] - 48) * 10 + (a[1] - 48));
	}
	age = 2019 - year + 1;
	printf("%d", age);

	if (a[7] == '1' || a[7] == '3') {
		printf("M\n");
	}
	else {
		printf("W\n");
	}
	return 0;
}