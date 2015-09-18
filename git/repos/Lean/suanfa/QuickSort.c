//快速排序
#include <stdio.h>
static int num = 0;
void QuickSort(int array[], int low, int high);
int FindPos(int array[], int low, int high);
int main()
{
  int i;
  int array[10] = {13,2,5,18,7,12,9,10,15,6};
  QuickSort(array,0,9);
  for (i = 0;i < 10 ;i++)
  printf("%d,",array[i]);
  printf("\n");
  printf("num:%d\n",num);
}
void QuickSort(int array[], int low, int high)
{
  int pos;
 if(low<high) 
  {
    pos = FindPos(array,low,high);
    QuickSort(array,low,pos-1);
    QuickSort(array,pos+1,high);
  }
}
int FindPos(int array[], int low, int high)
{
   int temp = array[low];
   while(low<high)
  {
     while(low<high&&temp<array[high])
     high--;
     array[low]=array[high];
     num++;
     while(low<high&&array[low]<temp)
     low++;
     array[high]=array[low];
     num++;
  }
  array[low]=temp;

  return low;
}
