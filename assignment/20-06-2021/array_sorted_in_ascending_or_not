#include <stdio.h>
#include <stdbool.h>

#define ARRAY_SIZE 6

int array[ARRAY_SIZE] = {1, 5, 10, 10, 20, 160};

bool check_for_ascending_order(int arr[], int size){
    for(int i=1; i<size; i++){
        if(arr[i] < arr[i-1]){
            return false;
        }
    }
    return true;
}
int main() {
    if( check_for_ascending_order(array,ARRAY_SIZE) ){
        printf("Array is sorted in ascending order");
    }else{
        printf("Array is not sorted in ascending order");
    }
    return 0;
}
/****************************
 Test Case 1:
	ARRAY_SIZE 0x06
	array[ARRAY_SIZE] = {1, 5, 10, 10, 20, 160};
	Output: Array is sorted in ascending order
	
 Test Case 2:
	ARRAY_SIZE 0x06
	array[ARRAY_SIZE] = {20, 5, 10, 10, 20, 160};
	Output: Array is not sorted in ascending order
	
 Test Case 3:
	ARRAY_SIZE 0x09
	array[ARRAY_SIZE] = {1, 5, 10, 10, 20, 20, 90, 102, 160};
	Output: Array is sorted in ascending order
	
 Test Case 4:
	ARRAY_SIZE 0x09
	array[ARRAY_SIZE] = {1, 5, 10, 10, 20, 20, 90, 89, 160};
	Output: Array is not sorted in ascending order

****************************/
