#include <stdio.h>
#include <stdlib.h>

int prastevilo (int a) {
	int i, j;
	a=a-1;
	while (a != j) {
		a++;
		for (j=2; a%j!=0 && a!=j; j++);
	}
	return a;
}

int main () {
	int tocke, n, i, j;
	
	scanf("%d", &n);
	for (i=2; 1!=n; i++) {
		i = prastevilo(i);
		printf("%d\n", i);
		while (n%i==0) {
			n = n/i;
			printf("%d*", i);
		}
	}
	return 0;
}
