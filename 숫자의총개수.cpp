#define _CRT_SECURE_NO_WARNINGS
#include "Header.h"
#include "stdio.h"
using namespace std;
int main() {
	int n, cur_sum = 0, pos_cnt = 1, oneToNineSum= 9, res = 0;
	cin >> n;
	while (cur_sum + oneToNineSum < n) {
		res += (pos_cnt++ * oneToNineSum);
		cur_sum += oneToNineSum;
		oneToNineSum *= 10;
	}
	res+= ((n-cur_sum) * pos_cnt);
	printf("%d", res);
	return 0;
}

// 15
// 21

//256
//660
