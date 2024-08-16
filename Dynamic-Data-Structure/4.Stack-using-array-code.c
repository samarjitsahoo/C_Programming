#include <stdio.h>

// For Dynamic Memory allocation
#include <stdlib.h>

// Using Dynamic Memory Allocation

/*4. Implement Stack data structure and associated operations using arrays.
Design a menu for using the operations.*/

// For displaying Stack

void print(int *a, int n)
{

  printf("Stack is:\t");

  for (int i = 0; i < n; i++)
  {

    printf("%d\t ", *(a + i));

  }
}

// Checking if array is empty

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

    printf("Stack is Not Empty");
  }
  else
  {
    printf("Stack is Empty");
  }
}

// Checking if Stack is empty

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

    printf("Stack is  Full");
  }

  else
  {
    printf("Stack is Not Full");
  }
}

// Pushing element to stack

void push(int *arr1, int n, int e)
{

  /*int *arr2;
  arr2=calloc(n+1,sizeof(int));
  arr2=arr1;
  arr2[n]=e;
  print(arr2,n+1); return arr2,n+1;*/


  arr1 = realloc(arr1, n + 1);
  arr1[n] = e;
  print(arr1, n + 1);

}

// Popping/Deleting element from top of stack

void pop(int *arr, int n)
{

  printf("%d\n", arr[n - 1]);

  arr = realloc(arr, n - 1);

  print(arr, n - 1);
}

// Peek or Looking at the first element of stack

void peek(int *arr, int n)
{

  printf("%d", arr[n - 1]);

}

// Checking Size of Array

void size(int n)
{

  printf("The size of stack is:%d", n);

}

// Menu Function for Stack

int choice(int *arr, int n)
{

  int c, e;

  printf("Enter 1 for Push, 2 for Pop, 3 for Peek , 4 for Size,5 for is empty or 6 for is full: ");
  scanf("%d", &c);

  switch (c)
  {


    case 1:
      printf("Enter element to push:");
      scanf("%d", &e);

      push(arr, n, e);
      return n + 1;
      break;


    case 2:
      pop(arr, n);

      return n - 1;
      break;


    case 3:

      peek(arr, n);

      return n;
      break;


    case 4:
      size(n);
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

  printf("Enter number of members in stack:");
  scanf("%d", &n);

  arr = calloc(n, sizeof(int));


  for (int i = 0; i < n; i++)
  {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &arr[i]);
  }


  int nsize = choice(arr, n);


//do{


  while (test == 1)
  {

    printf("\nIf you want to repeat Enter 1 else Enter 2:");
    scanf("%d", &test);

    if (test == 1)
    {

      int e = choice(arr, nsize);

      if (e == (n + 1))
      {
        nsize += 1;;
      }

      else if (e == (-1))
      {
        break;
      }

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
  return 0;
}