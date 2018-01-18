#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

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
