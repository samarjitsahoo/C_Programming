#include <stdio.h>

// Recursive Function for linear search

int search(int a[], int ele, int key)
{

  if (ele == 0 && a[ele] != key)
    return -1;

  if (a[ele - 1] == key)
    return ele - 1;

  return search(a, ele - 1, key);

}

// Main Function

void main()
{

  int arr[23], key, n;

  printf("Enter number of elements: ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    printf("Element %d: ", i + 1);
    scanf("%d", &arr[i]);
  }

// Key to be found
  printf("Enter key to find: ");
  scanf("%d", &key);

// Calling Function
  int pos = search(arr, n, key);

// Checking Condition

  if (pos != -1)
    printf("Element found at: %d", pos + 1);

  else
    printf("Element not found");
}