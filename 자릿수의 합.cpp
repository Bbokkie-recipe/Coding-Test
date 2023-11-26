#define _CRT_SECURE_NO_WARNINGS
#include "Header.h"
#include "stdio.h"
using namespace std;

int digit_sum(int x) {
	int temp = 0;
	while (x >0) {
		temp += x % 10;
		x = x / 10;
	}
	return temp;
}
int main() {
	int sums[50001] = { 0 };
	int inputs[50001] = { 0 };
	int n , input, result, index= 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input;
		inputs[i] = input;
		result = digit_sum(input);
		sums[i] = result;
	}
	int _max = 0;
	for (int k = 0; k < n; k++) {
		if (_max <= sums[k]) {
			_max = sums[k];
			if (_max == sums[k]) {
				if (sums[index] > inputs[k]) {
					continue;
				}
				else {
					index = k;
				}
			}
		}
	}
	printf("%d", inputs[index]);
	return 0;
}

// 5
// 125 15232 79 1325 97
// 97
