#include <stdio.h>

#include <stdlib.h>

int n = 12;

/* Write the function for heap sort using C.*/

// Heapify function
void heapify(int *, int, int);

void swap(int a, int b)
{
  int temp = a;
  a = b;
  b = temp;
}

// Function for heap sort

void heapsort(int *arr, int n)
{

  for (int i = n / 2 - 1; i >= 0; i--)

    heapify(arr, n, i);

  for (int i = n - 1; i >= 0; i--)
  {

//swap(arr[0],arr[i]);

    int temp = arr[0];
    arr[0] = arr[i];
    arr[i] = temp;

    for (int i = 0; i < n; i++)
    {

      printf("%d\t", *(arr + i));
    }
    printf("\n");

    heapify(arr, i, 0);

  }
}

// Heapify function
void heapify(int *arr, int n, int i)
{

  int largest = i;

  int left = 2 * i + 1;

  int right = 2 * i + 2;

  if ((left < n) && (arr[left] > arr[largest]))
    largest = left;

  if ((right < n) && (arr[right] > arr[largest]))
    largest = right;

  if (largest != i)
  {

    // swap(arr[i],arr[largest]);

    int temp = arr[i];
    arr[i] = arr[largest];
    arr[largest] = temp;

    for (int i = 0; i < n; i++)
    {

      printf("%d\t", *(arr + i));
    }
    printf("\n");


    heapify(arr, n, largest);
  }

}

// Main function

void main()
{

  int *arr, *store, n, i;

  printf("Enter number of elements: ");
  scanf("%d", &n);

  arr = (int *)calloc(n, sizeof(int));

  for (i = 0; i < n; i++)
  {

    printf("Enter element %d: ", i + 1);
    scanf("%d", &arr[i]);

  }
  printf("Sorted array is: ");
  heapsort(arr, n);

  for (i = 0; i < n; i++)
  {
    printf("%d\t ", *(arr + i));
  }
}
