#define _CRT_SECURE_NO_WARNINGS
#include "Header.h"
#include "stdio.h"
using namespace std;

int main() {
	int target = 0;
	int cnt[50001] = {0};
	cin >> target;
	for (int i = 1; i<= target; i++) {
		for (int j = i; j <= target; j=j+i) {
			cnt[j]++;
		}
	}
	for (int i = 1; i<=target;  i++) {
		printf("%d ", cnt[i]);
	}
	return 0;
}

//8
//1 2 2 3 2 4 2 4
