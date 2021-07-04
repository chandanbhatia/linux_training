#include <stdio.h>

void BinaryToHex(unsigned int array[], unsigned int size){
    unsigned int outHex = 0, loopCount=size;
    while(loopCount){
        outHex =  outHex + ( array[loopCount-1] << (size-loopCount));
        loopCount--;
    }
    printf("Hex number is 0x%x \n",outHex);
}
int main() {
    unsigned int array[] = {1, 1, 1,1, 1, 1, 1, 0};
    printf("Binaray number is ");
    for(int i=0; i< (sizeof(array)/ sizeof(unsigned int)); i++){
        printf("%d",array[i]);
    }
    printf("\n");
    BinaryToHex(array,sizeof(array)/ sizeof(unsigned int));
    
    return 0;
}

/***************************************************
Test Case 1:
  Binaray number is 11111110
  Hex number is 0xfe 
  
Test Case 2:
  Binaray number is 100110000010
  Hex number is 0x982 

/***************************************************
