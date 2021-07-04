#include <stdio.h>
#include <stdlib.h>

const char sectionInfoBuffer[] = {"\nThe table below shows the section numbiers of the manual followed by the types of pages they contain.\n 1   Executable programs or shell commands\n 2   System calls (functions provided by the kernel)\n 3   Library calls (functions within program libraries)\n 4   Special files (usually found in /dev)\n 5   File formats and conventions eg /etc/passwd\n 6   Games\n 7   Miscellaneous (including macro packages and conventions), e.g. man(7), groff(7)\n 8   System administration commands (usually only for root)\n 9   Kernel routines [Non standard]\n\n"};
int main()
{
        char buffer[100],stringData[50];
        int section;
        printf("Type command: ");
        scanf("%s",stringData);
        printf("%s", sectionInfoBuffer);
        printf("Type section: ");
        scanf("%d",&section);
        sprintf(buffer, "man %d %s", section, stringData);
        printf("%s\n", buffer);
        system(buffer);
        return 0;
}

/*********************************************************************
root@DESKTOP-0BS63JL:~/play# ./a.out
Type command: cp

The table below shows the section numbiers of the manual followed by the types of pages they contain.
 1   Executable programs or shell commands
 2   System calls (functions provided by the kernel)
 3   Library calls (functions within program libraries)
 4   Special files (usually found in /dev)
 5   File formats and conventions eg /etc/passwd
 6   Games
 7   Miscellaneous (including macro packages and conventions), e.g. man(7), groff(7)
 8   System administration commands (usually only for root)
 9   Kernel routines [Non standard]

Type section: 1
man 1 cp

*********************************************************************/
