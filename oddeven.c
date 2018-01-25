#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void) 
{
	char a[100],temp;
	int i;
	scanf("%s",a);
	for(i=0;i<strlen(a);i=i+2)
	{
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
		
	}
	printf("%s",a);
	return 0;
}
