#include<stdio.h>
int main()
{
	int n1,n2,s=0;
	printf("Enter range:");
	scanf("%d%d",&n1,&n2);
	while(n1<=n2)
	{
		s=s+n1;
		n1=n1+1;
	}
	printf("sum %d",s);
	return 0;
}
