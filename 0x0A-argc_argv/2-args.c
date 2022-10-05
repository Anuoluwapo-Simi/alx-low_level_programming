#include <stdio.h>

/**
*main - pints all arguments it receives
*@argc: number of arguments passed to the function
*@argv: arguments vector of poiter to strings
*
*Return: always 0
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}

