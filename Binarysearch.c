#include <stdio.h>
int main()
{
	int n,v;
	scanf("%d%d",&n,&v);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int mid,low=0,high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
	
	if (a[mid]==v)
	{
		printf("Found");
		return 0;
	}
	else if(a[mid]<v)
	{
		low=mid+1;
	}
	else
	high=mid-1;
}
printf("Not found");
return 0;

}
