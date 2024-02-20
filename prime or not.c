#include <stdio.h>
void checkPrime(int N)
{
	int flag = 1,i;
	for ( i = 2; i <= N / 2; i++) {
		if (N % i == 0) {
			flag = 0;
			break;
		}
	}
	if (flag) {
		printf("The number %d is a Prime Number\n", N);
	}
	else {
		printf("The number %d is not a Prime Number\n", N);
	}
	return;
}

int main()
{
	int N;
	printf("Enter the number to check whether a given number is prime or not:");
	scanf("%d",&N);
	checkPrime(N);
	printf("\n------------Nishan Bhattarai-------------");
    printf("\n--------- Rollno:15 --------------");
	return 0;
}
