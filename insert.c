#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int *A;
    int size;
    int length;
};
void display(struct Array arr)
{
    int i;
     printf("\nElements are\n");
    for(i=0;i<arr.length;i++)
    {

        printf("%d ",arr.A[i]);
    }
}
/*void add(int element,struct Array arr)
{
    if(arr.length<arr.size)
    {
        arr.A[arr.length-1]=element;
        printf("\nElement added successfully");
        arr.length++;
    }
}*/
void insert(int index,struct Array *arr,int element)
{
  int i;
  for(i=arr->length;i>=index;i--)
  {
      arr->A[i]=arr->A[i
      -1];
  }
  arr->A[index]=element;
  arr->length++;
}


int main()
{
    int n,i;
    struct Array arr;
    printf("Enter the size of the array\n");
    scanf("%d",&arr.size);
    arr.A=(int *)malloc(arr.size*sizeof(int));

    printf("\nEnter the number of elements in the array\n");
    scanf("%d",&arr.length);
    printf("\nEnter the elements\n");
    for(i=0;i<arr.length;i++)
    {
        scanf("%d",&arr.A[i]);
    }

    insert(3,&arr,15);
    display(arr);
}
