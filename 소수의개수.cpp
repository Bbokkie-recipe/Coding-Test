#define _CRT_SECURE_NO_WARNINGS
#include "Header.h"
#include "stdio.h"
using namespace std;
int main() {
	int n, cnt = 0;
	int isPrime = 1;
	cin >> n;
	for(int i = 2; i <=n ; i++){
		isPrime = 1;
		for (int j = 2; j*j <= i; j++) {
			if (i%j ==0) {
				isPrime = 0;
				break;
			}
		}
		if (isPrime == 1) {
			cnt++;
		}
	}
	printf("%d",cnt);
	return 0;
}
// 20
// 8

//200000
//17984
