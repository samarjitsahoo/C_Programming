#include<stdio.h>
#include<stdlib.h>

void swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

void BubbleSort(int A[],int n)
{
    int i,j,flag;
    for (i=0;i<n-1;i++)
    {
        flag = 0;
        for(j=0;j<n-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                swap(&A[j],&A[j+1]);
                flag = 1;
            }
        }
        if(flag==0) break;
    }
}

int main()
{
    int A[10] = {1,5,2,1,6,3,6,2,5,10};
    int i;
    BubbleSort(A,10);
    for(i=0;i<10;i++)
    {
        printf("%d ",A[i]);
    }
    return 0;
}
