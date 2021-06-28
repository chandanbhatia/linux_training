// Online C compiler to run C program online
#include <stdio.h>

unsigned int get_nibble_set_count(unsigned int nibble){
    switch(nibble){
        case 1:
            return 1;
            break;
        case 2:
            return 1;
            break;
        case 3:
           return 2;
           break;
        case 4:
            return 1;
            break;
        case 5:
            return 2;
            break;
        case 6:
           return 2;
           break;
        case 7:
            return 3;
            break;
         case 8:
            return 1;
            break;
        case 9:
           return 2;
           break;
        case 0xA:
            return 2;
            break;
        case 0xB:
            return 3;
            break;
        case 0xC:
           return 2;
           break;        
        case 0xD:
            return 3;
            break;
        case 0xE:
            return 3;
            break;
        case 0xF:
           return 4;
           break;
        default:
           return 0;
           break;
      
    } 
    return 0;
}
void count_set_bits(unsigned int data){
    unsigned int nibble, count = 0;
    for(int i=0; i< 8; i++){
        nibble = (data >> i*4) & 0x0F;
        count =  count + get_nibble_set_count(nibble);
    }
    printf ("count set bits for 0x%x is %d  ", data, count);
}

int main() {
   unsigned int data = 0x12345678;
   count_set_bits(data);
   return 0;
}

/********************************************************************************
Test Case 1:
  count set bits for 0x12345678 is 13
 
Test Case 2:
  count set bits for 0xab3cf2e7 is 20

********************************************************************************/
