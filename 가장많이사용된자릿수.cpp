#define _CRT_SECURE_NO_WARNINGS
#include "Header.h"
#include "stdio.h"
using namespace std;
int main() {
	int posNum[11] = { 0 };
	int n = 0;
	cin >> n;
	while (n > 0) {
		int temp = 0;
		temp = n % 10;
		posNum[temp]++;
		n = n / 10;
	}
	int max = 0;
	int max_idx = 0;
	for (int i = 0; i < 10; i++) {
		if (max < posNum[i]) {
			max = posNum[i];
			max_idx = i;
		}
		if (max == posNum[i]) {
			if (max_idx < i) {
				max_idx = i;
			}
		}
	}
	printf("%d", max_idx);
	return 0;
}

// 1230565625
// 5
