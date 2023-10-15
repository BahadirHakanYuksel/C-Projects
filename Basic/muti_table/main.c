#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define pf printf
#define sf scanf

int main() {
	
	int i = 0,j = 0,deg1,len = 10,arr[len][len];
	char en;
	pf("\n");
	for(i = 0;i<len;i++){
		deg1 = i+1;
		for(j = 0;j<len;j++){
			arr[i][j] = deg1;
			deg1 += i+1;
		}
	}
	
	for(i = 0;i<len;i++){
		for(j = 0;j<len;j++) pf(" %d\t",arr[i][j]);
		pf("\n");
	}
	
	sf("%c",&en);
	return 0;
}
