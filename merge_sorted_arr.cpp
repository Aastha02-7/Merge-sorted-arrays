#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,m,i,j,k,t,c[40],a[20],b[20];
	printf("Enter a limit for A: ");
	scanf("%d",&n);
	printf("Enter a limit for B: ");
	scanf("%d",&m);
	printf("Enter elements for A:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter elements of B:\n");
	for(j=0;j<m;j++)
		scanf("%d",&b[j]);
	i=j=k;
	while(i<n && j<m)
	{
		if(a[i]<b[j])
		c[k++]=a[i++];
		else if(a[i]>b[j])
		c[k++]=b[j++];
		else
		{
			c[k++]=b[j++];
			i++;
		}
	}
	if(i<n)
	{
		for(t=0;t<n;t++)
			c[k++]=a[i++];
	}
	if(j<m)
	{
		for(t=0;t<m;t++)
			c[k++]=b[j++];
	}
	printf("\nAfter merge the array is:");
	for(k=0;k<(m+n);k++)
		printf("\n%d",c[k]);
	getch();
	return 0;
}
