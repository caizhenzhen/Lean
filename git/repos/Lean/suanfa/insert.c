#include <stdio.h>
int main(void)
{
  int num = 0;
  int array[10] = {15,8,2,16,9,54,52,11,25,3};
  int i,j,temp;
  for (i = 1;i <= 9;i++)
  {
    if(array[i-1]>array[i])
    {
       temp = array[i];
       j = i;
       while(j>0&&array[j-1]>temp)
        {
          array[j] = array[j-1];
          j--;
         }
         array[j] = temp;
         num++;
    }
  }
  for (i = 0;i <= 9;i++)
  printf("array: %d\n",array[i]);
  printf("num=%d\n",num);
  printf("\n");
}
