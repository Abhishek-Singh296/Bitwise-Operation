#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
		//To count the number of 1's
	int num,count=0;
	printf("Enter the number:\n");
	scanf("%d",&num);
	
	do{
		if(num&1){
		count++;
		}
		num=num>>1;
		
	}while(num!=0);
	printf("Number of 1's is:%d",count);
	//To check number is even or odd
	if(num&0){
		printf("Number is odd");
	}
	else {
		printf("Number is even");
	}
	
	return 0;
}
