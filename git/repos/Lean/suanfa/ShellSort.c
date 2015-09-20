/*

*/
#include <stdio.h>
static  int array[10] = {13,2,5,18,7,12,9,10,15,6};
int shellsortSh(int p[],int n);
static void printarray(int array[]);
int main()
{
  int num = 0, i = 0;
  num = shellsortSh(array,10);
  printf("num:%d\n",num);
  for (i = 0;i < 10 ;i++)
    printf("%d,",array[i]);
  printf("\n");
}


int shellsortSh(int p[],int n)
{
	int op=0;
	int h,i,j,temp;
	for(h=n/2;h>0;h=h/2)
	{
        printf("h%d\n",h);
		for(i=h;i<n;i++)
		{
			temp=p[i];
			for(j=i-h;j>=0&&p[j]>temp;j-=h)
			{
				p[j+h]=p[j];
				op++;
			}
			p[j+h]=temp;
			op++;
            printarray(array);
		}
	}
	return op;
}

static void printarray(int array[])
{
    int i ;
    for (i = 0;i < 10 ;i++)
    printf("%d,",array[i]);
  printf("\n");
}
