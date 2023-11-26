#define _CRT_SECURE_NO_WARNINGS
#include "Header.h"
#include "stdio.h"
using namespace std;
int main() {
	int n, input, cnt= 0;
	cin >> n;
	if (n<10) {
		return n;
	}
	cnt = 9;
	for (int i = 10; i <= n; i++) {
		int temp = i;
		while ( temp> 0) {
			temp = temp / 10;
			cnt += 1;
		}
	}
	printf("%d", cnt);
	return 0;
}
