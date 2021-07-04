#include <stdio.h>

void convertToBinary(unsigned int number){
    if(number){
        convertToBinary(number/2);
       printf("%d ",number %2 );
    }
}
int main() {
    unsigned int number = 0x982;
    printf("Hex number is 0x%x \n",number);
    convertToBinary(number);
    
    return 0;
}

/**************************************************************
Test Case 1:
  Hex number is 0x982 
  1 0 0 1 1 0 0 0 0 0 1 0 
  
Test Case 2:
  Hex number is 0xfe 
  1 1 1 1 1 1 1 0 

**************************************************************/
