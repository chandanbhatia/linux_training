#include <stdio.h>

#define setBits(val, position,nbits) ( {\
    unsigned int mask = (0x01 << nbits) - 1;\
    val = val | (mask << position) ; \
    }) 
    
#define clearBits(val, position,nbits) ( {\
    unsigned int mask = (0x01 << nbits) - 1;\
    val = val &  ~(mask << position) ; \
    }) 
    

int main() {
    unsigned int data = 0x00, position = 10, nbits = 4;
    printf("input data is 0x%x \n", data);
    setBits(data, position, nbits);
    printf("post sets bit position %d nbits %d data is 0x%x \n", position, nbits, data);
    nbits = nbits - 1;
    printf("input data is 0x%x \n", data);
    clearBits(data, position,nbits );
    printf("post clear bit position %d nbits %d data is 0x%x \n", position, nbits, data);
     return 0;
}

/*************************************************
Test Case 1:
  input data is 0x0 
  post sets bit position 10 nbits 4 data is 0x3c00 
  input data is 0x3c00 
  post clear bit position 10 nbits 3 data is 0x2000 
  
 Test Case 2:
  input data is 0x0 
  post sets bit position 2 nbits 4 data is 0x3c 
  input data is 0x3c 
  post clear bit position 2 nbits 4 data is 0x0

*************************************************/
