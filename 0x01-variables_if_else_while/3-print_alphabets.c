#include <stdio.h>
/**
 * main - put alphabet in lowecase and uppercase
 *
 * Return : Always 0.
 */
int main() {
    char c;
    char C;
    for (c = 'a'; c <= 'z'; ++c){
        putchar(c);
    }
    for (C = 'A'; C <= 'Z'; ++C){
         putchar(C);
    }
        putchar('\n');
 	return(0);       
}

