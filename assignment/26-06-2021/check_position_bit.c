#include <stdio.h>

#define checkPositionBit(val, position) (val = ( val>> position) & 0x01 )

int main() {
    unsigned int data = 0xFFF8, position = 1;
    printf("input data  is 0x%x \n", data);
    checkPositionBit(data, position);
    printf("Bit at postion %d  is %d \n", position, data);
    return 0;
}

/*********************************************************************************
Test Case 1:
  input data  is 0xfff8 
  Bit at postion 1 is 0 

Test Case 2:
  input data  is 0xfff8 
  Bit at postion 10 is 1 

Test Case 3:
  input data  is 0xfff8 
  Bit at postion 3 is 1 

*********************************************************************************/
