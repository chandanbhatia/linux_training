/* Getting bits from byte data without any bitwise operation */

#include <stdio.h>
#include <stdint.h>

struct bitData {
    uint8_t zeroBit:1;
    uint8_t firstBit:1;
    uint8_t secondBit:1;
    uint8_t thirdBit:1;
    uint8_t fouthBit:1;
    uint8_t fifthBit:1;
    uint8_t sixBit:1;
    uint8_t sevenBit:1;
};
union byte{
    uint8_t byte;
    struct bitData bit;
};
int main() {
    union byte byte_data;
    byte_data.byte = 0x7f;
    printf("input byte is 0x%x \n", byte_data.byte);
    printf("zeroBit is %d firstBit is %d secondBit is %d thirdBit is %d fouthBit is %d fifthBit is %d sixBit is %d sevenBit is %d \n", byte_data.bit.zeroBit, byte_data.bit.firstBit, byte_data.bit.secondBit, byte_data.bit.thirdBit, byte_data.bit.fouthBit, byte_data.bit.fifthBit,byte_data.bit.sixBit, byte_data.bit.sevenBit);
    
     return 0;
}

/****************************************************************************************************************** 
Test Case 1:
  input byte is 0x7f 
  zeroBit is 1 firstBit is 1 secondBit is 1 thirdBit is 1 fouthBit is 1 fifthBit is 1 sixBit is 1 sevenBit is 0 
  
 Test Case 2:
  input byte is 0x23 
  zeroBit is 1 firstBit is 1 secondBit is 0 thirdBit is 0 fouthBit is 0 fifthBit is 1 sixBit is 0 sevenBit is 0 
/******************************************************************************************************************
