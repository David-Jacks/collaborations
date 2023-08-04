/*
 Write a C program to check if a given number is a prime number or not.
 A prime number is a natural number greater than 1 that is divisible only by 1 and itself.
 * */
//input is a given number
//process is an algorithm to check if that given number is a prime number
//output is to return if it is prime or not, hence a true or false statement
#include<stdio.h>
#include<stdbool.h>
int main(void){
	int given_input = 5;//considering this as the number that is given
	
	bool check = true;//assuming check to be true in the initial state	
	
	for(int i = 1; i < given_input; i++){//I am starting i from 1 to the exact number less than the number given
	
		if(given_input % i == 0){//if any of the numbers between 1 and the number given should divide the number given
			
			check = false;//then we can say it is not a prime number
					  
			break;//then we can exit out of the loop to save time, there is no need for next checking
		}
	}

	printf("%d\n", check);

return 0;
}
