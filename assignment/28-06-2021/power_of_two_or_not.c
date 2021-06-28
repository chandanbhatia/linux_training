#include <stdio.h>
#include <stdbool.h>

bool power_of_two(unsigned int x)
{
    if(x){
        return (!(x & (x - 1)));
    }else{
        return 0;
    }
}

int main()
{
    unsigned int data =  128;
    if(power_of_two(data)){
     printf("%d is power of 2\n", data);
    }else{
     printf("%d is not power of 2\n", data);
    }
    data =  07;
    if(power_of_two(data)){
     printf("%d is power of 2\n", data);
    }else{
     printf("%d is not power of 2\n", data);
    }
    return 0;
}

/*********************************************************
Output:
  128 is power of 2
  7 is not power of 2
*********************************************************/
