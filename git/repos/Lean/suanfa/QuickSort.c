//快速排序
/*原理是经过第一次排序(终止条件是low>=high)使得游标位置的元素放到一个合适的位置，使得左面的都小于它，右边的都大与它。
再嵌套排序。一般第一个游标位置选择数组的第一个位置。*/
/*不是稳定的排序方式*/
#include <stdio.h>
#define NUM 6
static int num = 0;
static int array[NUM] = {5,2,67,0,4,6};
void QuickSort(int array[], int low, int high);
int FindPos(int array[], int low, int high);
int main()
{
  int i;
  //int array[NUM] = {13,2,5,18,7,12,9,10,15,6};
  //int array[NUM] = {5,2,67,0,4,6};
  QuickSort(array,0,NUM-1);
  for (i = 0;i < NUM ;i++)
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
   int i;
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
  for (i = 0;i < NUM ;i++) {printf("%d,",array[i]);}printf("\n");

  return low;
}
