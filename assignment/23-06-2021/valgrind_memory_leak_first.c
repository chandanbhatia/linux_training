#include <stdlib.h>

int main()
{
        int *p = malloc(10*sizeof(int));
        return 0;
}

/****************************************************

valgrind --tool=memcheck --leak-check=yes ./memtest.o  

  ==521== HEAP SUMMARY:
  ==521==     in use at exit: 40 bytes in 1 blocks
  ==521==   total heap usage: 1 allocs, 0 frees, 40 bytes allocated
  ==521==
  ==521== 40 bytes in 1 blocks are definitely lost in loss record 1 of 1
  ==521==    at 0x4C31B0F: malloc (in /usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so)
  ==521==    by 0x10865B: main (in /root/memtest.o)
  ==521==
  ==521== LEAK SUMMARY:
  ==521==    definitely lost: 40 bytes in 1 blocks
  ==521==    indirectly lost: 0 bytes in 0 blocks
  ==521==      possibly lost: 0 bytes in 0 blocks
  ==521==    still reachable: 0 bytes in 0 blocks
  ==521==         suppressed: 0 bytes in 0 blocks
  ==521==
  ==521== For counts of detected and suppressed errors, rerun with: -v

****************************************************/
