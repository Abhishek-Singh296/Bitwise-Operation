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

## __Code__
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

## __Output__
![Screenshot 2023-04-11 152649 (2)](https://user-images.githubusercontent.com/113619312/234052498-a3f5439d-874c-483b-8108-e0da7513ffaa.png)
