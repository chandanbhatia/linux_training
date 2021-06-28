#include <stdio.h>

#define even_or_odd(data)  ( (data & 0x01) ? printf(" %d is odd \n", data): printf(" %d is even \n", data))

int main() {
   unsigned int data = 992230;
   even_or_odd(data);
    return 0;
}

/*********************************
Test Case 1:
  992230 is even

Test Case 2:
  238 is even 

Test Case 3:
  2389 is odd 
*********************************/
