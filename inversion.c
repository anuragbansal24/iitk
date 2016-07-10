#include<stdio.h>
#include<stdlib.h>

int merge(int *p,int i, int mid,int j)

{
	printf("\nInside Merge");
	int m;int r,s;
	int n1=mid-i+1;
	int n2=j-mid;
	int *c=(int *) malloc (sizeof(int)*(n1+2));
	int *d=(int *) malloc (sizeof(int)*(n2+2));
	for (m=1;m<=n1;m++)
		{
			c[m]=p[i+m-1];
		}

	for (m=1;m<=n1;m++)
		{
			d[m]=p[mid+m];
		}
	c[n1+1]=6058;d[n2+1]=6058;
	r=1;s=1;
	for(m=i;m<=j;m++)
	{
	if(c[r]<d[s])
		{
		p[m]=c[r];
		r++;
		}
	else 
		{
		p[m]=d[s];
		s++;
		}
	}
}

void  mergesort(int *p, int i, int j)
	{
	//printf("Inside merge sort");
       int mid;
	if(i>=j)
		{
		return;
		}
	else
		{
		mid=(i+j)/2;
		mergesort(p,i,mid);
		mergesort(p,mid+1,j);
		merge(p,i,mid,j);
		}
/*for(i=1;i<=j;i++)
                {
		printf("%p ",&p[i]);
                printf(" %d\n",p[i]);
                }
*/

	}


int main()
	{
	int n,i,initial=1;
	printf("Enter the no of elements");
	scanf("%d", &n);
	int *a = (int *) malloc (sizeof(int)*(n+1));
	printf("Enter the elements");
	for(i=1;i<=n;i++)
		{
		scanf("%d",&a[i]);
		}
	printf("The array elements are");
	for(i=0;i<=n;i++)
                {
		printf("%p ",&a[i]);
                printf(" %d\n",a[i]);
                }
mergesort(a,initial,n);
	printf("The array elements are");
	for(i=1;i<=n;i++)
                {
	//	printf("%p ",&a[i]);
                printf(" %d\n",a[i]);
                }
	}
