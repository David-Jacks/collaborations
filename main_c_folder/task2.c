
//Given an array of integers, write a C program to find the maximum and minimum elements in the array.
	//solution
//the input here is an array of integers
//the process here is to have an algorithm that generate both maximum and the minumum elements in the array
//the output is to return those maximum and minimum values

#include <stdio.h>

int main(void){

int given_array[] = {4, 5 , 8, 9, 77, 45, 3, 14, 2};//this is just an example array being used as input
int max = given_array[0];
int min = max;
for(int i = 0; i < sizeof(given_array)/sizeof(given_array[0]); i++){
	if(min > given_array[i])
		min = given_array[i];
	if(max < given_array[i])
		max = given_array[i];
}

printf("Hence the maximum array element is %d and the minimum array element is %d.\n", max, min);
return 0;
}
