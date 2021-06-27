#include <stdio.h>

#define clearBit(val, position) (val = val & ~(0x01 << position))

#define setBit(val, position) (val = val | (0x01 << position) ) 

#define toggleBit(val, position) ( val = val ^ (0x01<<position))

int main() {
    unsigned int data = 0xff, position = 2;
    printf("input data  is 0x%x \n", data);
    clearBit(data, position);
    printf("post clear bit %d, data is 0x%x \n", position, data);
    
    data = 0x80;
    position = 0;
    printf("input data  is 0x%x \n", data);
    setBit(data, position);
    printf("post set bit %d, data is 0x%x \n", position, data);
    
    data = 0xff;
    position = 0;
    printf("input data  is 0x%x \n", data);
    toggleBit(data, position);
    printf("post toggle bit %d, data is 0x%x \n", position, data);
     return 0;
}

/*************************************************************************************************
Test Case 1:
  input data  is 0xff 
  post clear bit 2, data is 0xfb 
  input data  is 0x80 
  post set bit 0, data is 0x81 
  input data  is 0xff 
  post toggle bit 0, data is 0xfe
  
 Test Case 2:
  input data  is 0xfffff 
  post clear bit 10, data is 0xffbff 
  input data  is 0xf980 
  post set bit 10, data is 0xfd80 
  input data  is 0x81 
  post toggle bit 0, data is 0x80 
*************************************************************************************************/
