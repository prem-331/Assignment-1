#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void selection_sort(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        int temp=a[i];
        int minIdx=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<temp){
                minIdx=j;
                temp=a[j];
            }
        }
        temp = a[i];
        a[i]=a[minIdx];
        a[minIdx]=temp;
    }

}
void bubble_sort(int a[], int n)
{
    int counter=1;
    while(counter<n)
    {
        for(int i=0;i<n-counter;i++)
        {
            if(a[i]>a[i+1])
            {
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        counter++;
    }

}
int main()
{
    printf("Enter no of elements:\n");
    int n;
    scanf("%d",&n);
    int arr1[n], arr2[n];
    for(int i=0;i<n;i++){
        arr1[i]=(n-i)*100;
        arr2[i]=arr1[i];
    }
    clock_t start,end;
    start=clock();
    selection_sort(arr1,n);
    end=clock();
    printf("Total time taken by selection sort for unsorted array: %f\n",(double)(end-start)/CLOCKS_PER_SEC);
    start=clock();
    selection_sort(arr1,n);
    end=clock();
    printf("Total time taken by selection sort for sorted array: %f\n",(double)(end-start)/CLOCKS_PER_SEC);



    clock_t start2,end2;
    start2=clock();
    bubble_sort(arr2,n);
    end2=clock();
     printf("Total time taken by bubble sort for unsorted array: %f\n",(double)(end2-start2)/CLOCKS_PER_SEC);
    start2=clock();
    bubble_sort(arr2,n);
    end2=clock();
     printf("Total time taken by bubble sort for sorted array: %f\n",(double)(end2-start2)/CLOCKS_PER_SEC);
}