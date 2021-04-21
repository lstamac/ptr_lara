#include <stdio.h>
#include <stdlib.h>

int piramida[1000][1000];

int main () {
	int tocke, n, i, j;
	
	scanf("%d", &n);
	for (i=0; i<n; i++) {
		for (j=0; j<n-i; j++) {
			scanf("%d", &piramida[i][j]);
		}
	}
	
	for (i=0; i<n-1; i++) {
		for (j=0; j<(n-i)-1; j++) {
			if (piramida[i][j] > piramida[i][j+1]) {
				piramida[i+1][j] += piramida[i][j];
			} else {
				piramida[i+1][j] += piramida[i][j+1];
			}
		}
	}
	printf("%d", piramida[n-1][0]);
	return 0;
}
