#include <stdio.h>

// Declaring Array
int array[100], n;

/*  1. Create a menu driven program to insert, display, and delete
 elements using arrays. Insertion and deletion has three possible
 cases:(i) insertion at beginning, (ii) insertion at the end, and
(iii) insertion in the middle. Finally, include the already
coded linear search and binary search functions in the menu. */

// Function for displaying array
// Arguments- Array and number of elements

void display(int a[], int n)
{

  printf("Array is:\t");

  for (int i = 0; i < n; i++)
  {
    printf("%d\t ", a[i]);
  }
  printf("\n");
}


// Function for inserting elements in array
// Arguments- Array, number of elements, index of element to be inserted and element to be inserted

void insert(int arr[], int n, int in, int e)
{

  if (in < n)
  {
    n++;

    for (int i = n + 1; i >= in; i--)
    {
      arr[i] = arr[i - 1];
    }
    arr[in] = e;
    display(arr, n);
  }
  else if (in == n)
  {
    n++;
    arr[in] = e;
    display(arr, n);
  }
  else
  {
    printf("Invalid index");
  }
}


// Function for deleting elements in array
// Arguments- Array, number of elements, index of element to be deleted


void delete (int arr[], int n, int in)
{

  if (in < n)
  {
    for (int i = in; i < n - 1; i++)
    {
      arr[i] = arr[i + 1];
    }
    n--;
    display(arr, n);
  }
  else
  {
    printf("Invalid index");
  }
}



// Function for linear search of elements in array
// Arguments- Array, number of elements, key to be found


int linearsearch(int a[], int ele, int key)
{

  if (ele == 0 && a[ele] != key)
    return -1;
  if (a[ele - 1] == key)
    return ele - 1;
  return linearsearch(a, ele - 1, key);
}



// Function for binary search of elements in array (For sorted array)
// Arguments- Array, start index ,end index and key to be found

int binarysearch(int a[], int start, int end, int key)
{

  if (start > end)
    return -1;

  int mid = (start + end) / 2;

  if (a[mid] == key)
  {
    return mid;
  }

  else if (a[mid] > key)
  {
    return binarysearch(a, start, mid - 1, key);
  }

  else
  {
    return binarysearch(a, mid + 1, end, key);
  }
}

// Function for Menu of functions in array
// Arguments- Array and number of elements

void choice(int array[], int n)
{

  int c, e, in, key;

  printf("Enter 1 for insertion, 2 for Deletion, 3 for display,4 for linear search(Unsorted array),5 for binarysearch(Sorted array): ");
  scanf("%d", &c);

// Using switch case for menu

  switch (c)
  {

    case 1:

// Taking Input the index to insert element on
      printf("Enter index to insert: ");
      scanf("%d", &in);

// Taking Input the element to insert
      printf("Enter element to insert: ");
      scanf("%d", &e);


// Calling function
      insert(array, n, in - 1, e);
      break;

    case 2:

// Taking input index to delete
      printf("Enter index to delete: ");
      scanf("%d", &in);

// Calling function
      delete (array, n, in - 1);
      break;

    case 3:

// Calling function
      display(array, n);
      break;

    case 4:

// Taking Input the key to find
      printf("Enter key to find: ");
      scanf("%d", &key);

// Calling function
      int pos = linearsearch(array, n, key);

// Checking if element is found or not
      if (pos != -1)
      {
        printf("Element found at: %d", pos + 1);
      }
      else
      {
        printf("Element not found");
      }
      break;

    case 5:

// Taking Input the key to find
      printf("Enter key to find: ");
      scanf("%d", &key);

// Calling function
      int pos2 = binarysearch(array, 0, n, key);

// Checking if element is found or not
      if (pos2 != -1)
      {
        printf("Element found at: %d", pos2 + 1);
      }
      else
      {
        printf("Element not found");
      }
      break;

// Default case
    default:
      printf("Invalid case!!");

  }
}

// Main function
int main()
{

  int n;
  printf("Enter number of members in array: ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &array[i]);
  }

// Calling Menu function with array and number of elements
  choice(array, n);

}