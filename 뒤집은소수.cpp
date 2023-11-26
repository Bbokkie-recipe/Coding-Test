#define _CRT_SECURE_NO_WARNINGS
#include "Header.h"
#include "stdio.h"
using namespace std;
int reverse(int x) {
	int res = 0;
	int tep = 0;
	while (x > 0) {
		tep = x % 10;
		res = res * 10 + tep;
		x = x / 10;
	}
	return res;
}
bool isPrime(int x) {
	for (int i = 2; i < x; i++) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}
int main() {
	int NumArr[101] = { 0};
	int n,i = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int tmp = 0;
		cin >> tmp;
		NumArr[i] = reverse(tmp);
		if (isPrime(NumArr[i])) {
			printf("%d ", NumArr[i]);
		}
	}

	
	return 0;
}

// 5
// 32 55 62 3700 250
// 23 73
