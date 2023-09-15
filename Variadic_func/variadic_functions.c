#include <stdio.h_>
#include <stdarg.h>
#include <stdlib.h>

/**
 */

int sum(int count, ...)
{
	va_list allnumbers;
	va_start(allnumbers, count); //initializes va_list
	int result =0, i;

	/* using a for loop to access all members of the list */
	for  (i = 0; i < count; i++)
	{
		result = result + va_arg(allnumbers, int);
	}

	va_end(allnumbers);

	return (result);
}

int main()
{
	int n;

	n = sum(10, 4, 6, 7, 10);
	printf("%d", n);

	return (0);
}
