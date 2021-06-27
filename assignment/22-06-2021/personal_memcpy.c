#include <stdio.h>

#define ARRAY_ELEMENT  20
void printArray(int arr[], int n){
    for(int i=0; i<n;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void memcpy_personal(void *const dest, const void *const src, size_t n){
    char *p_dest = (char *)dest;
    char *p_src = (char *)src;
    while(n){
        *p_dest++ = *p_src++;
        n --;
    }
}
int main() {
    int inputIntegerArray[ARRAY_ELEMENT], outIntegerArray[ARRAY_ELEMENT];
    int inputCharArray[ARRAY_ELEMENT], outCharArray[ARRAY_ELEMENT];
    for(int i=0; i< ARRAY_ELEMENT; i++){
        inputIntegerArray[i] =  i + 1000;
    }
    
    memcpy_personal(outIntegerArray,inputIntegerArray, sizeof(inputIntegerArray));
    printf("Integer Input Array: \n");
    printArray(inputIntegerArray,ARRAY_ELEMENT);
    printf("Integer Output Array: \n");
    printArray(outIntegerArray,ARRAY_ELEMENT);
    printf("\n\n");
    for(int i=0; i< ARRAY_ELEMENT; i++){
        inputCharArray[i] =  i + 10;
    }
    memcpy_personal(outCharArray,inputCharArray, sizeof(inputCharArray));
    printf("Char Input Array: \n");
    printArray(inputCharArray,ARRAY_ELEMENT);
    printf("Char Output Array: \n");
    printArray(outCharArray,ARRAY_ELEMENT);
    
}

/***********************************************************
Output:

  Integer Input Array: 
  1000 1001 1002 1003 1004 1005 1006 1007 1008 1009 1010 1011 1012 1013 1014 1015 1016 1017 1018 1019 
  Integer Output Array: 
  1000 1001 1002 1003 1004 1005 1006 1007 1008 1009 1010 1011 1012 1013 1014 1015 1016 1017 1018 1019 


  Char Input Array: 
  10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 
  Char Output Array: 
  10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 


***********************************************************/
