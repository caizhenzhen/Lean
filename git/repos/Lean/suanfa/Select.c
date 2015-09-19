#include <stdio.h>
static int num = 0;
int main()
{
  int i,j,temp,b;
  int array[10] = {13,2,5,18,7,12,9,10,15,6};
  for(i=0;i<10;i++)
  {
    temp = i;
    for(j=i+1;j<10;j++)
   {
    if(array[temp]>array[j])
    {
    temp = j;
    }
   }
   if(temp!=i)
   {
     b = array[temp];
     array[temp] = array[i];
     array[i] = b;
     num++;
   }
  }
  for (i = 0;i <9 ;i++)
  printf("%d,",array[i]);
  printf("\n");
  printf("num:%d\n",num);
}
