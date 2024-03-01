#include <stdio.h>
#include <math.h>

void sh(long double* x, int* n);

int main(){
	long double x;
	int n, flag = 1;
	while(flag == 1){
		printf("\n" "Do you want to find sh(x)?");
		printf("\n" "Print 1 if YES, 0 if NO" "\n");
		scanf("%d", &flag);
		if(flag == 1){
			printf("\n" "x=");
			scanf("%Lf", &x);
			printf("\n" "accurate=");
			scanf("%d", &n);
			sh(&x, &n);
			printf("%Lf\n", sinhl(x));
		} else{
			break;
		}
	}
	return 0;
}

void sh(long double* x, int* n) {
	long double elem = *x, Sum = *x;
	for(int i = 1; i <= *n; i++){
		elem = elem * (*x) * (*x) / ((2 * i) * (2 * i + 1));
		Sum += elem;
	}
	printf("%Lf\n", Sum);
}	
	
