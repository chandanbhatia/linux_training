#include <stdio.h>
#include <stdbool.h>

#define ARRAY_SIZE 5

int array[ARRAY_SIZE] = {1,-2,3,-1,2};

static inline int  max(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
int maximum_sum_sub_array(int arr[], int size){
    int sumReturn = array[0],tempSum;
    for(int i = 0;i < size; i++)		
	{
		tempSum = 0;
		for(int j = 1;j <= size; j++)
		{
			if(i+j > size){
				break;
			}
			tempSum+= arr[i + j - 1];
			sumReturn = max(sumReturn,tempSum);
			/*printf("data at i %d j at %d tempSum %d sumReturn %d \n",i, j , tempSum, sumReturn);*/
		}
	}
	return sumReturn;
}
int main() {
   printf("maximum sum of sub array  %d ",maximum_sum_sub_array(array,ARRAY_SIZE));

    return 0;
}
/****************************
 Test Case:
	ARRAY_SIZE 5
	array[ARRAY_SIZE] = {1,-2,3,-1,2};
	maximum sum of sub array  4 


****************************/
