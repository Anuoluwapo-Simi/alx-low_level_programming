#include <stdio.h>

/**
*main - prints the same number of arguments passeed to it
*@argc: number of arguments passed to the function
*@argv: arguments vector of pointers to strings
*
*Return: always 0
*/
int main(int argc, char *argv[] __attribute__((unused)))

{
printf("%d\n", argc - 1);
return (0);
}
