#include <stdio.h>
#include <math.h>

void sh(long double* x, long double *epsilon);

int main(){
	long double x, epsilon;
	int flag = 1;
	while(flag == 1){
		printf("\n" "Do you want to find sh(x)?");
		printf("\n" "Print 1 if YES, 0 if NO" "\n");
		scanf("%d", &flag);
		if(flag == 1){
			printf("\n" "x=");
			scanf("%Lf", &x);
			printf("\n" "accurate=");
			scanf("%Lf", &epsilon);
			sh(&x, &epsilon);
			printf("%Lf\n", sinhl(x));
		} else{
			break;
		}
	}
	return 0;
}

void sh(long double* x, long double* epsilon) {
	long double elem = *x, Sum = *x;
	long double next_elem = elem * (*x) * (*x) / 6;
	Sum += next_elem;
	int i = 2;
	while(fabsl(next_elem - elem) >= *epsilon){
		elem = next_elem;
		next_elem = elem * (*x) * (*x) / ((2 * i) * (2 * i + 1));
		Sum += next_elem;
		i += 1;
	}
	printf("%Lf\n", Sum);
}	
	
