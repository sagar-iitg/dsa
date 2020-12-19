#include<stdio.h>

int main(void)
{
	// Note that malloc() returns void * which can be
	// typecasted to any type like int *, char *, ..
	int *x = malloc(sizeof(int));
	printf("%d",sizeof(x));
}
