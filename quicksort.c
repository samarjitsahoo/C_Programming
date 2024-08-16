#include<stdio.h>
#include<stdlib.h>

void swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

int partition(int A[],int l,int h)
{

int pivot=A[l];
int i=l,j=h;
do
{
do{i++;}while(A[i]<=pivot);
do{j--;}while(A[j]>pivot);
if(i<j)swap(&A[i],&A[j]);
}while(i<j);
swap(&A[l],&A[j]);
return j;
}


void QuickSort(int A[],int l, int h)
{
    int j;
  if(l<h)
 {
 j=partition(A,l,h);
 QuickSort(A,l,j);
 QuickSort(A,j+1,h);
 }
}


int main()
{
    int A[11] = {1,5,2,1,6,3,6,2,5,10};
    int i;
     A[10] = INT32_MAX;
    QuickSort(A,0,10);
    for(i=0;i<10;i++)
    {
        printf("%d ",A[i]);
    }
    return 0;
}
