#include <stdio.h>

/*Write a C program to find the factorial of a non-negative integer entered by the user.
  The factorial of a non-negative integer n is the product of all positive integers less than or equal to n.*/

//n factorial = n(n -1)! till the n is 1;
//the questions states that we find the factorial of a non-negative integer, hence = unsigned int;
//the question speaks of entered by the use hence the user will be making input;
//we return the factorial of the number the user will give as input

int main(void){
	int user_input;
	int fact_orial;

	printf("please input a non-negative integer\n");
	scanf("%d", &user_input);
	fact_orial =user_input;

	while(user_input != 1){	
		fact_orial *= (user_input - 1);
		user_input--;
	}	

	printf("the factorial of the number you inputed is %d.\n", fact_orial);

return 0;
}
