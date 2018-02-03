#include <stdio.h>
#include<string.h>
int main(void) {
     char  a[50];
     int b,count=0,i;
     scanf("%d",'.');
     for(i=0;a[i]!=0;i++)
     {
     	if(a[i]==1)
     	{
     		count++;
     	}
     }
     printf("no of lines in given paragraph%d",count);
	return 0;
}
