/*
 You are given a string in C, containing a sentence. Write a C program to count the number of words in the sentence. 
 Assume that words in the sentence are separated by spaces.
 * */
//input is a string sentence in C;
//process is to implement an algorithm to count the number of words in the sentence
//output is to print our the number of words in the sentence;
//algo: count the spaces in the sentence and add 1 to equals the number of words;

#include <stdio.h>

int main(void){
	char sentence[] = "I am about to solve this problem"; //considering this as the sentence given 
	
	int space_count = 0;
	
	for(int i = 0; i < sizeof(sentence)/sizeof(sentence[0]); i++){
		if(sentence[i] == ' ')
			space_count++;	
	}
	
	printf("hence the word count for the given string is %d.\n", space_count + 1);
}

