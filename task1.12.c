#include <stdio.h>
/*
 * Напишите программу, которая печатает содержимое своего ввода, помещая по одному
слову на каждой строке.
 */

int main() {
    int c, ns;

    printf("Enter string: ");
    printf("\n");

    ns = 0;
    while ((c = getchar()) != EOF)
    {
        if(c == ' ' || c == '\t')
        {
            if(ns == 0)
            {
                ++ns;
                printf("\n");
            }
        }
        else
        {
            ns = 0;
            printf("%c", c);
        }
    }
    printf("\n");
    return 0;
}