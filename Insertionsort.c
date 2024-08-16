#include<stdio.h>
#include<stdlib.h>


void InsertionSort(int A[],int n)
{
    int i,j,x;
    for (i=1;i<n;i++)
    {
        j=i-1;
        x = A[i];
        while(j>-1 && A[j]>x)
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = x;
    }
}


int main()
{
    int A[10] = {1,5,2,1,6,3,6,2,5,10};
    int i;
    InsertionSort(A,10);
    for(i=0;i<10;i++)
    {
        printf("%d ",A[i]);
    }
    return 0;
}
