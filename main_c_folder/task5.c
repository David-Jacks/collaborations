/*
 Implement a basic calculator in C that can perform addition, subtraction, multiplication, and division. 
 The program should take two numbers and an operator (+, -, *, or /) as input and display the result.
 */
//input is a two numbers and an opeartor in the form as listed above;
//the process is to develop an algorithm to implement calculations with two operands
//
#include<stdio.h>

int main(void){
	int no_1, no_2, final_ans; //declaring the two numbers;
	char sign;
	printf("please input first no.:\n");
	scanf("%d", &no_1);

	printf("please input second no.:\n");
	scanf("%d", &no_2);
	
	
	printf("please input operation(+, -, *, /). :\n");
	scanf("%c", &sign);
	
	if(sign == '+'){
		final_ans = (no_1 + no_2);
	}else if(sign == '*'){	
		final_ans = (no_1 * no_2);
	}else if(sign == '-'){
		final_ans = (no_1 - no_2);
	}else if(sign == '/'){
		final_ans = (no_1 / no_2);	
	}	
	
	printf("hence the final is %d\n", final_ans);

	return 0;	
}
