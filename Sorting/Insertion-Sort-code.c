#include <stdio.h>

#include <stdlib.h>

/* Write the function for Insertion sort using C.*/

// Function for swap
/*void swap (int a,int b){
			int temp = a;
			a=b;
     	       		b = temp;
            		           }

// Function for Insertion Sort

void InsertSort (int *S,  int length) {
	  int j;


		for(int i =1; i<length; i++)
      	{
int v=S[i];
  for(int j=i-1;(j>= 0)&&(S[j]>v);j--){
 S[j+1]=S[j];}
S[j+1]=v; } }*/


// Function for Insertion Sort
void insertionSort(int *a, int length)
{
  int i, j, value;
  for (i = 1; i < length; i++)
  {
    value = a[i];
    for (j = i - 1; j >= 0 && a[ j ] > value; j--)
    {
      a[j + 1] = a[ j ];
    }
    a[j + 1] = value;
  }
}

// Main function

void main()
{

  int *arr, n, i;

  printf("Enter number of elements: ");
  scanf("%d", &n);

  arr = (int *)calloc(n, sizeof(int));


  for (i = 0; i < n; i++)
  {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &arr[i]);
  }


  printf("Sorted array is: ");
  insertionSort (arr, n);


  for (i = 0; i < n; i++)
  {
    printf("%d\t ", *(arr + i));
  }
}




















































































































































































































