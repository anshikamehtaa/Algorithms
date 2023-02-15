//We take an element and move it to it's orignal position
#include<stdio.h>
int main()
{
    int n=5,j;
    int arr[n],temp;
    printf("ENter the value of 5 elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<n;i++)
    {
        temp=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    printf("the array is\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

}