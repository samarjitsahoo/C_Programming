#include <stdio.h>

// For Dynamic Memory allocation
#include <stdlib.h>

// Using Dynamic Memory Allocation


/*6. Implement Queue data structure and associated operations using arrays.
 Design a menu for using the operations.*/

// For displaying Queue

void display(int *a, int n)
{

  printf("Queue is:\t");

  for (int i = 0; i < n; i++)
  {

    printf("%d\t ", *(a + i));

  }
  printf("\n");
}

// Adding elements in the end

void Enqueue(int *arr, int n, int e)
{

  arr = realloc(arr, n + 1);

  arr[n] = e;

  display(arr, n + 1);
}

// Deleting elements from Queue from the start

void Dequeue(int *arr, int n)
{

  for (int i = 0; i < n - 1; i++)
  {

    arr[i] = arr[i + 1];
  }

  arr = realloc(arr, n - 1);

  display(arr, n - 1);
}

// Seeing element at the start/front

void front(int *arr, int n)
{

  printf("%d", arr[n - 1]);
}

// Seeing element at the end/rear

void rear(int *arr, int n)
{

  printf("%d", arr[0]);

}

// Checking if queue is empty

void isempty(int *ar, int n)
{

  int e = 0;

  for (int i = 0; i < n; i++)
  {

    if (ar[i] != 0)
    {
      e++;
    }
  }

  if (e != 0)
  {

    printf("Queue is Not Empty");
  }

  else
  {
    printf("Queue is Empty");
  }
}

// Checking if queue is empty

void isfull(int *arr1, int n)
{

  int e = 0;

  for (int i = 0; i < n; i++)
  {

    if (arr1[i] == 0)
    {
      e++;
    }

  }

  if (e == 0)
  {

    printf("Queue is  Full");
  }

  else
  {
    printf("Queue is Not Full");
  }
}

// Menu function

int choice(int *arr, int n)
{

  int c, e;

  printf("Enter 1 for Enqueue, 2 for Dequeue, 3 for front , 4 for rear,5 for is empty or 6 for is full: ");
  scanf("%d", &c);

  switch (c)
  {


    case 1:

      printf("Enter element to add in Queue:");
      scanf("%d", &e);

      Enqueue(arr, n, e);

      return n + 1;
      break;


    case 2:

      Dequeue(arr, n);

      return n - 1;
      break;


    case 3:

      front(arr, n);

      return n;
      break;


    case 4:

      rear(arr, n);
      return n;
      break;


    case 5:

      isempty(arr, n);
      return n;
      break;


    case 6:

      isfull(arr, n);
      return n;
      break;


    default:

      printf("Invalid case!!");
      return -1;

  }
}

// Main Function
int main()
{

  int *arr;

  int n, c, test = 1, e;

  printf("Enter number of members in Queue:");
  scanf("%d", &n);

  arr = calloc(n, sizeof(int));

  for (int i = 0; i < n; i++)
  {

    printf("Enter element %d: ", i + 1);
    scanf("%d", &arr[i]);
  }


  int nsize = choice(arr, n);

  do
  {

    printf("\nIf you want to repeat Enter 1 else Enter 2:");
    scanf("%d", &test);

    if (test == 1)
    {

      int e = choice(arr, nsize);

      if (e == (n + 1))
      {
        nsize += 1;
      }
      else if (e == (-1))
      {  break;  }

      else if (e == (n - 1))
      {
        nsize -= 1;
      }

      else
      {
        nsize = n;
      }
    }

    else
    {
      free(arr);
    }
  }

  while (test == 1);

  return 0;
}