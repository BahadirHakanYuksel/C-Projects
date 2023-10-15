#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define pf printf
#define sf scanf

int main() {
	
	char text[100];
	char arr[] = "abcdefghijklmnoprstuvyzxwqABCDEFGHIJKLMNOPRSTUVYZXWQ";
	char arr2[100][100];
	char ch1,ch2,ch3[30][30];
	int num1 = 0,num2 = 0;
	int i,j = 0;
	
	pf("\n -------------------------\n Find a Characters Numbers\n -------------------------\n\n Enter a Text : "); gets(text);

	for(i = 0;i<strlen(arr);i++){
		for(j = 0;j<strlen(text);j++){
			if(arr[i] == text[j]) num1 ++;
		}
		arr2[i][0] = arr[i];
		arr2[i][1] = num1;
		num1 = 0;
	}
	pf("\n -------------------------\n All Numbers Of Characters\n -------------------------\n");
	for(i = 0; i<strlen(arr); i++){
		if(arr2[i][1] != 0) pf(" %c : %d \n",arr2[i][0],arr2[i][1]);
	}
	
	for(i = 0;i<strlen(arr);i++){
		if(arr2[i][1] > arr2[i+1][1]){
			num1 = arr2[i][1];
			if(num1 > num2){
				num2 = num1;
				ch2 = arr2[i][0];
			}
		}
	}
	

	num1 = 0; 
	for(i = 0; i<strlen(arr); i++){
		if(arr2[i][1] == num2){
			ch3[num1][0] = arr2[i][0];
			ch3[num1][1] = arr2[i][1];
			num1++;
		}
	}
	pf("\n -------------------------\n MAX Numbers Of Characters\n -------------------------\n");
	for(i = 0;i<num1;i++) pf(" %c : %d\n",ch3[i][0],ch3[i][1]);
	
	return 0;
}
