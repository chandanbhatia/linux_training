#include <stdio.h>

#define ARRAY_SIZE 0x05

int array[ARRAY_SIZE] = {20, 40, 1, 9, 50};

int main() {
	/* Assigning 1st array memeber as Largest Number */
    int largestNumber =array[0], secondLargestNumber = 0;
    for(int i=1; i<ARRAY_SIZE; i++ ){
            if( array[i] > largestNumber){
               {
                    secondLargestNumber = largestNumber;
                    largestNumber = array[i];
                }
            }
            else if( (array[i] > secondLargestNumber)
                && array[i] != largestNumber){
                secondLargestNumber = array[i];
            }
    }
    printf("Second Largest Number is: %d", secondLargestNumber);

    return 0;
}

/****************************
 Test Case 1:
	ARRAY_SIZE 0x05
	array[ARRAY_SIZE] = {20, 40, 1, 9, 50};
	Output: Second Largest Number is: 40
	
 Test Case 2:
	ARRAY_SIZE 0x08
	array[ARRAY_SIZE] = {9, 30, 59, 42, 11, 28, 42, 34};
	Output: Second Largest Number is: 42
	
 Test Case 3:
	ARRAY_SIZE 0x09
	array[ARRAY_SIZE] = {12, 23, 67, 32, 0, 28, 28, 23, 88};
	Output: Second Largest Number is: 67
	
 Test Case 4:
	ARRAY_SIZE 0x09
	array[ARRAY_SIZE] = {68, 23, 67, 32, 0, 28, 28, 23, 88};
	Output: Second Largest Number is: 68

****************************/
