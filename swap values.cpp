#include<stdio.h>1
main()
{
	int n1,n2,temp;
	scanf("%d%d",&n1,&n2);
	temp=n1;
	n1=n2;
	n2=temp;
	printf("n1=%d",n1);
	printf("\n n2=%d",n2);
	return  0;
}
