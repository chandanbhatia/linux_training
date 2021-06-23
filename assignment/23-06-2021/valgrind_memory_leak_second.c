#include <stdlib.h>

int main()
{
        int *p = malloc(10*sizeof(int));
        free(p);
        /*  Here we are writing to memoy after free */
        p[0] = 0x22;
        return 0;
}

/**************************************************************************************

valgrind --tool=memcheck --leak-check=yes ./memtest.o  

  ==528== Invalid write of size 4
  ==528==    at 0x1086B0: main (in /root/memtest.o)
  ==528==  Address 0x522f040 is 0 bytes inside a block of size 40 free'd
  ==528==    at 0x4C32D3B: free (in /usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so)
  ==528==    by 0x1086AB: main (in /root/memtest.o)
  ==528==  Block was alloc'd at
  ==528==    at 0x4C31B0F: malloc (in /usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so)
  ==528==    by 0x10869B: main (in /root/memtest.o)

**************************************************************************************/
