#include "main.h"
#include <stdio.h>

/**
  * main - prints the number of arguments passed into it.
  *@argc: count of the arguments
  *@argv: array of pointers to the strings which are those arguments
  * Return: 
: */
int main(int argc, char *argv[] __attribute__((unused)))
{

	printf("%d\n", argc - 1);

	return (0);
}
