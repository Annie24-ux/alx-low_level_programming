#include <stdio.h>



/**
 *main - Prints
 *Return:0 Always
 */

int main(void)

{
char c;

for (c = '0'; c <= '9'; c++)

{

putchar(c);

}

for (c = 'a'; c <= 'f'; c++)

{

putchar(c);

}



putchar('\n');


return (0);

}


