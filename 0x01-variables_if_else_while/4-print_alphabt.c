#include <stdio.h>

int main(void)
{
    char ab = 'a';

    while (ab <= 'z')
    {
        if (ab != 'q' && ab != 'e')
        {
            putchar(ab);
        }
        ab++;
    }

    putchar('\n');

    return 0;
}
