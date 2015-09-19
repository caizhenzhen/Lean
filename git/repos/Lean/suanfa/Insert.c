//直接插入排序
/*起始游标i选定第二个元素，如果i-1即第一个元素大于第二个元素，
temp = a[i],游标j=i,将i-1后往后移动直到temp>a[j-1]。将temp插入到a[j-1]此时i=2之前的都是有序
循环游标i直到数组最后一个元素。*/
#include <stdio.h>
int main(void)
{
  int num = 0;
  int array[10] = {13,2,5,18,7,12,9,10,15,6};
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
  printf("%d,",array[i]);
  printf("num=%d\n",num);
  printf("\n");
}
