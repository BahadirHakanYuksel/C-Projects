#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define pf printf
#define sf scanf

int for_2k(num){
	int k;
	if(num % 2 == 0) k = 1;
	else k = 0;
	
	return k;
}
int for_3k(num){
	int k;
	if(num % 3 == 0) k = 1;
	else k = 0;
	
	return k;
}

int main() {
	int num1 = 0,numberIs2K,numberIs3K;
	pf("Enter a Number : "); sf("%d",&num1);
	numberIs2K = for_2k(num1);
	numberIs3K = for_3k(num1);
	
	if(numberIs2K == 1 && numberIs3K == 1) pf("%d is 6k",num1);
	else pf("%d is not 6k",num1);
	return 0;
}
