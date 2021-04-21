#include <stdio.h>
#include <stdlib.h>

int main () {
	int tocke, n, i, j, izhod=0, a;
	
	scanf("%d %d", &tocke, &n);
	for (i=0; i<n; i++) {
		scanf("%d", &j);
		tocke += j;
		if (tocke >= 3200) a++;
		if (tocke < 3200) a=0;
		if (a>izhod) izhod=a;
	}
	printf("%d", izhod);
	return 0;
}
/*
3200 
10  
20   
10
-35
20
15
-10
-20
20
-30
-10 */
