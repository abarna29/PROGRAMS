#include <stdio.h>

int main() 
{
	int n,t,a[10];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
	    for(int j=i+1;j<n;j++)
	    {
    	    if(a[i]>a[j])
    	    {
    	        t=a[i];
    	        a[i]=a[j];
    	        a[j]=t;
    	    }
	    }
	}
	for(int i=0;i<n;i++)
	{
	    printf("%d ",a[i]);

	}
	return 0;
}
INPUT
5
2 1 6 4 8
OUTPUT
1 2 4 6 8 
