#include<stdio.h>

void DeleteNumber( int arr[],int * count,int position)
{
  if(position < 1 || position> * count)
  {
      printf("The deletion has failed. Try again\n");
  }
  for(int i=position-1;i < * count-1;i++)
  {
      arr[i]=arr[i+1];
  }
  (* count)--;
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
int arr[10]={22,24,26,28,30,32,34,36,38,40};
int count=10;
int position=3;

printf("initial digits before insertion-->>");
DisplayElements(arr,count);
DeleteNumber(arr, &count, position);
printf("final digits after insertion-->>");
DisplayElements(arr,count);
return 0;

}
