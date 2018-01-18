#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

void BubbleSort(int *arr,int nLength)
{
  int i,j;
 if(arr == NULL&&nLength<=0) return;
  for(i = 0;i<nLength;i++)
  {
    for(j = 0;j<nLength;j++)
    {
     if(arr[j] > ar[j+1])
     {
        arr[j] = arr[j]^arr[j+1];
        arr[j+1] = arr[j]^arr[j+1];
        arr[j] =  arr[j]^arr[j+1];
     }
    }
  }

}

int main()
{
  int i;
  int arr[] = {15,52,889,78,4,6,45};
  BubbleSort(arr,sizeof(arr)/sizeof(arr[0]));
  for(i = 0;i<sizeof(arr)/sizeof(arr[0]))
  {
    printf("%d  ",arr[i]);     
  }
  printf("\n");
  return 0;
}
