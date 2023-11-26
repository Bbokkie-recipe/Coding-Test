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
	int curValue, maxSum = 0;
	int n, input, result= 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input;
		result = digit_sum(input);
		if (maxSum < result) {
			maxSum = result;
			curValue = input;
		}
		else if (maxSum == result) {
			if (curValue < input) {
				curValue = input;
			}
		}
	}
	printf("%d ", curValue);
	return 0;
}

// 5
// 125 15232 79 1325 97
// 97
