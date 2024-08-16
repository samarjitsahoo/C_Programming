#include<stdio.h>
#include<stdlib.h>

void swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

void SelectionSort(int A[],int n)
{
    int i,j,k;
    for(i=0;i<n;i++){
        for(j=k=i;j<n;j++)
        {
            if(A[k]>A[j])
                k=j;
        }
        swap(&A[i],&A[k]);
    }
}


int main()
{
    int A[10] = {1,5,2,1,6,3,6,2,5,10};
    int i;
    SelectionSort(A,10);
    for(i=0;i<10;i++)
    {
        printf("%d ",A[i]);
    }
    return 0;
}
