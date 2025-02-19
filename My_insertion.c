#include<stdio.h>

void InsertNumber( int arr[],int *count,int NumberofDigits, int position)
{
  for(int i=*count;i>=position;i--)
  { arr[i]=arr[i-1];
  }
arr[position-1]=NumberofDigits;
(*count)++;
}
void DisplayElements(int arr[],int count)
{
  for(int i = 0;i < count;i++)
  {
    printf("%d\t",arr[i]);
  }
  printf("\n");
}
int main()
{
int arr[10]={20,22,24,28,30,32,34,36,38};
int count=8;
int element=26;
int position=4;

printf("initial digits before insertion-->>");
DisplayElements(arr,count);
InsertNumber(arr, &count,element, position);
printf("final digits after insertion-->>");
DisplayElements(arr,count);
return 0;

}
