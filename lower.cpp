#define _CRT_SECURE_NO_WARNINGS
#include "Header.h"
#include "stdio.h"
using namespace std;

int main() {
	// input :  go   Di   s  p  E   o pLe
	// output : godispeople
	char a[101], b[101];
	int i, p = 0;
	gets_s(a);
	for (int i = 0; a[i] != '\0'; i++) {
		if (a[i] != ' ') {
			if (a[i] <= 90) { b[p++] = (a[i] + 32); }
			else { b[p++] = (a[i]); }
		}
	}
	b[p] = '\0';
	printf("%s\n", b); 
	return 0;
}