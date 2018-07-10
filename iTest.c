//iTest for Automation of Tests
// Just a prototype
#include<stdio.h>
#include<string.h>
#include<assert.h>
#define l printf("passed")
#define m printf("failed")
int statussummary(int r)
{
	if(r==1)
		return 1;
	else 
		return 0;
}
void ROFL()
{
	printf("Hello world! I work with gitHub!");
}

int main()
{

	int check;
	printf("hello world");
	statussummary(check);
	printf("Hello world! I work with gitHub!");

	
	ROFL();


	printf("TheEnd!");
	printf("Goodbye!");
    return 0;
}

int jon()
{
	printf("Hello! ROFL");
	return 0;
}


