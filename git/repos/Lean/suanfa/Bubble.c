
#include <stdio.h>
#define false 0
#define true 1
int main()
{
  int num = 0;
  int array[10] = {13,2,5,18,7,12,9,10,15,6};
  int i,j,temp;
  int flag = false;
  for (i = 0; i < 10; i++)
    {
     flag = false;
     for(j = 9; j >= i;j--)
       if(array[j]<array[j-1])
         {
           temp = array[j];
           array[j] = array[j-1];
           array[j-1] = temp;
           num++;
           flag = true;
          }
       if(!flag)
        break;
   }
  for (i = 0;i < 10 ;i++)
   printf("%d,",array[i]);
   printf("\n");
   printf("num:%d\n",num);
}


#if 0
#include <stdio.h>
int main()
{
  int num = 0;
  int array[10] = {15,8,2,16,9,54,52,11,25,3};
  int i,j,temp;
for (i = 0; i < 10; i++)
{
  for(j = 9; j > i;j--)
  if(array[j]<array[j-1])
  {
    temp = array[j];
    array[j] = array[j-1];
    array[j-1] = temp;
    num++;
  }
}
 for (i = 0;i < 10 ;i++)
  printf("%d,",array[i]);
  printf("\n");
  printf("num:%d\n",num);
}

#endif




