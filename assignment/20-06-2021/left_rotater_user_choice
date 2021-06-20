#include <stdio.h>
#include <stdbool.h>

#define ARRAY_SIZE 9

int array[ARRAY_SIZE] = {1, 5, 26, 39, 20, 49, 90, 89, 160};

void left_rotater(int arr[], int size, int left_rotate_count){
    int backupArray[size];
    memcpy(backupArray,arr,size*sizeof(int));
    for(int i=0;i<size; i++){
        if(i >=left_rotate_count){
            arr[i-left_rotate_count] = backupArray[i];
        }else{
            arr[size-left_rotate_count+i] = backupArray[i];
        }
    }
}
int main() {
    int count;
    printf("Enter Left rotate count: \n");
    scanf("%d",&count);
    printf("pre rotation: ");
    for(int i=0; i<ARRAY_SIZE; i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    while(count>=ARRAY_SIZE){
         count = count- ARRAY_SIZE;
    }
    if(count){
        left_rotater(array,ARRAY_SIZE,count);
    }
    printf("Left rotate actual count: %d\n", count);
    printf("Post rotation: ");
    for(int i=0; i<ARRAY_SIZE; i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    return 0;
}
/****************************
 Test Case 1:
	ARRAY_SIZE 0x09
	array[ARRAY_SIZE] = {1, 5, 26, 39, 20, 49, 90, 89, 160};
	Enter Left rotate count: 7
	pre rotation: 1 5 26 39 20 49 90 89 160 
	Left rotate actual count: 7
	Post rotation: 89 160 1 5 26 39 20 49 90 
	
 Test Case 2:
	ARRAY_SIZE 0x09
	array[ARRAY_SIZE] = {1, 5, 26, 39, 20, 49, 90, 89, 160};
	Enter Left rotate count: 3
	pre rotation: 1 5 26 39 20 49 90 89 160 
	Left rotate actual count: 3
	Post rotation: 39 20 49 90 89 160 1 5 26 
		
 Test Case 3:
 	ARRAY_SIZE 0x09
	array[ARRAY_SIZE] = {1, 5, 26, 39, 20, 49, 90, 89, 160};
	Enter Left rotate count: 102
	pre rotation: 1 5 26 39 20 49 90 89 160 
	Left rotate actual count: 3
	Post rotation: 39 20 49 90 89 160 1 5 26 



****************************/
