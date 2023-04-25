# Bitwise-Operation
In C, the following 6 operators are bitwise operators (also known as bit operators as they work at the bit-level). They are used to perform bitwise operations in C.
 

- 1.The __& (bitwise AND)__ in C or C++ takes two numbers as operands and does AND on every bit of two numbers. The result of AND is 1 only if both bits are 1.  
- 2.The __| (bitwise OR)__ in C or C++ takes two numbers as operands and does OR on every bit of two numbers. The result of OR is 1 if any of the two bits is 1. 
- 3.The __^ (bitwise XOR)__ in C or C++ takes two numbers as operands and does XOR on every bit of two numbers. The result of XOR is 1 if the two bits are different. 
- 4.The __<< (left shift)__ in C or C++ takes two numbers, the left shifts the bits of the first operand, and the second operand decides the number of places to shift. 
- 5.The __>> (right shift)__ in C or C++ takes two numbers, right shifts the bits of the first operand, and the second operand decides the number of places to shift. 
- 6.The __~ (bitwise NOT)__ in C or C++ takes one number and inverts all bits of it.

![bitwose-ope](https://user-images.githubusercontent.com/113619312/234051949-06920a17-ca18-4d85-bfba-6aed5ca1309e.png)

---

## __Code I__
```
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
```

---

## __Output I__
![Screenshot 2023-04-11 154745](https://user-images.githubusercontent.com/113619312/234366739-d704113a-8fbe-431b-96c9-b9c636886fce.png)

## __Code II__
```
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	/*int x,y,z;
	char bitwise;
	printf("Enter the Bitwise operator:");
	scanf("%c",&bitwise);
	printf("Enter the first number:\n");
	scanf("%d",&x);
	printf("Enter the second number:\n");
	scanf("%d",&y);
	


	
	switch (bitwise)
	{
		case '&':
			z=x&y;
			printf("Bitwise AND of x & y is:%d\n",z);
			break;
		case '|':
			z=x|y;
			printf("Bitwise OR of x & y is:%d\n",z);
			break;
		case '^':
			z=x^y;
			printf("Bitwise XOR of x & y is:%d\n",z);
			break;
		case '~':
			z=x~y;
			printf("Bitwise NOT of x & y is:%d\n",z);
			break;
		default :
			printf("Enter a Valid Bitwise Operator(&/|/^/~)");
	}*/
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
	/*if(num&1){
		printf("Number is odd");
	}
	else {
		printf("Number is even");
	}*/
	
	return 0;
}
```

## __Output__
![Screenshot 2023-04-11 154314](https://user-images.githubusercontent.com/113619312/234367011-d05cf3b7-3c2b-40bd-ac12-2d20abd0b980.png)
