#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 *
 *
 */

int main(void)
{
    int index;
    char characters[] = "abcdefghijUVWXYZ0123456789/,.-+=~`<>:";
	srand((unsigned int)(time(NULL)));   
	for(index = 0; index < 12; index++)
	{
		printf("%c", characters[rand() % (sizeof characters - 1)]);
	}
    return (0);
}
