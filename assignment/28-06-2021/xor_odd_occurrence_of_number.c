#include <stdio.h>

unsigned int array[] ={20,20,40,40,13,13,11,88,88,99,99,11,11};

int main()
{
    unsigned int sizeAarry, xor = 0;
    sizeAarry = sizeof(array)/sizeof(unsigned int);
    xor = array[0];
    printf("Input array is: %d ", array[0]);
    for(int i=1; i<sizeAarry; i++){
        xor = xor ^array[i];
        printf("%d ",array[i]);
    }
    printf("\n");
    printf("XOR is %d \n",xor);
    
    return 0;
}

/****************************************************************
Output:
  Input array is: 20 20 40 40 13 13 11 88 88 99 99 11 11 
  XOR is 11 
****************************************************************/
