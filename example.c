#include <stdio.h>

int main(void)
{
    char c;
    char next;

    printf("enter a character : ");
    scanf(" %c", &c);

    next = c + 1;

    printf("the next character of %c (%i) is %c (%i)\n",
           c, c, next, next);

    return 0;
}