#include<iostream>
int main()
{
	int c,first,last,middle,n,search,array[100];
	printf("enter the element :\n");
	scanf("%d",&n);
	printf("enter the %d integer :\n",n);
	for(c=0;c<n;c++)
	scanf("%d",&search);
	first=0;
	last=n-1;
	middle=(first+last)/2;
	while(first<=last)
	{
		if(array[middle]<search)
		first=middle+1;
		else if(array[middle]==search)
		{
			printf("%d is present at index %d.\n",search,middle+1);
			break;
			}
			else
			last=middle-1;
			middle=(first+last)/2;
			}
			if(first>last)
			printf("not found %d is not present in the list \n",search);
			return 0;
		}
	

