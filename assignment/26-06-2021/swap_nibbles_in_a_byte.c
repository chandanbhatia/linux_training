#include <stdio.h>
#include <stdint.h>
struct nibbleData {
    uint8_t first:4;
    uint8_t second:4;
};
union byte{
    uint8_t byte;
    struct nibbleData nibble;
};

uint8_t swapNibble(uint8_t input){
    union byte inputByte;
    inputByte.byte = input;
    uint8_t tempData;
    tempData = inputByte.nibble.first;
    inputByte.nibble.first=  inputByte.nibble.second;
    inputByte.nibble.second = tempData;
    return inputByte.byte;
} 
int main() {
    uint8_t byte = 0xf2;
    printf("input byte is 0x%x \n", byte);
    printf("nibble byte post swap is 0x%x \n", swapNibble(byte));

    // printf("zeroBit is %d firstBit is %d secondBit is %d thirdBit is %d fouthBit is %d fifthBit is %d sixBit is %d sevenBit is %d \n", byte_data.bit.zeroBit, byte_data.bit.firstBit, byte_data.bit.secondBit, byte_data.bit.thirdBit, byte_data.bit.fouthBit, byte_data.bit.fifthBit,byte_data.bit.sixBit, byte_data.bit.sevenBit);
    
     return 0;
}

/********************************************************
Test Case 1:
  input byte is 0xf2 
  nibble byte post swap is 0x2f
  
Test Case 2:
  input byte is 0xe9 
  nibble byte post swap is 0x9e 

********************************************************/
