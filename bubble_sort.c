//Bubble sort algorithm
#include<stdio.h>

//Reading array elements
void read(int *arr,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("Enter element %d :",i+1);
        scanf("%d",&arr[i]);
    }
}

//Printing array elements
void print(int *arr,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}

//Perform bubble sort
void bubblesort(int *arr,int size)
{
    int temp;
    for(int i=0; i<size-1 ;i++)  //For number of passes
    {
        printf("\nNumber of passes :%d",i+1);
        for(int j=0; j<size-1-i ;j++) //For comparison in each pass
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

//To make bubble sort adaptive
void bubblesortadp(int *arr,int size)
{
    int temp;
    int issort=0;
    for(int i=0; i<size-1 ;i++)  //For number of passes
    {
        printf("\nNumber of passes :%d",i+1);
        issort=1;
        for(int j=0; j<size-1-i ;j++) //For comparison in each pass
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                issort=0;
            }
        }
        if(issort)      //To check whether sorted at initial passes
        {
            return;
        }
    }
}

int main()
{
    int size;
    printf("Enter the size of array :");
    scanf("%d",&size);
    int arr[size];
    read(arr,size);
    printf("The array elements before sorting are :");
    print(arr,size);
    //bubblesort(arr,size);

    //To make bubblesort adaptive
    bubblesortadp(arr,size);
    printf("\nThe array elements after sorting are :");
    print(arr,size);
    return 0;
}