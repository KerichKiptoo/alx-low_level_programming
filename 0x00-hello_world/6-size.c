#include <stdio.h>
/**
 *main - Prints the sizeof many var types
 *Return: Always 0 (Success)
 *
 */

int main(void)
{
	printf("The size of int is: %d byte(s)\n ", sizeof(int));
	printf("The size of char is: %d byte(s)\n ", sizeof(char));
	printf("The size of float is: %d byte(s)\n ", sizeof(float));
	printf("The size of double is: %d byte(s)\n ", sizeof(double));
	printf("The size of long long int is: %d byte(s)\n ",
			sizeof(long long int));
	return (0);
}
