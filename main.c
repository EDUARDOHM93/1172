#include <stdio.h>

int main (void){

	int X[10];
	
	scanf("%d %d %d %d %d %d %d %d %d %d", &X[0], &X[1], &X[2], &X[3], &X[4], &X[5], &X[6], &X[7], &X[8], &X[9]);
	
	int i = 0;
	while (i < 10) {

	if (X[i] < 1 ){
		printf("X[%d] = 1\n", i);
	} else {
		printf("X[%d] = %d\n", i, X[i]);
}	
	i++;		

}
return 0;
}
