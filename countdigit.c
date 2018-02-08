#include <stdio.h>

int main() {
	int s,count=0;
	scanf("%d",&s);
	while(s>=1)
	{
		s= s/10;
		++count;
	}	
	printf("count=%d",count); 
	return 0;
}
