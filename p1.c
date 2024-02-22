#include<stdio.h>
void main()
{
	FILE * p;
	p = fopen("log.txt","w");
	fprintf(p,"This is a file\n");
	printf("Hello World\n");
	fclose(p);
}

