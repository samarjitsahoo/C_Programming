#include <stdio.h>

int queue[100], n;


/* 6. Implement Queue data structure and associated operations using arrays.
 Design a menu for using the operations. */


// Function for displaying queue

void display(int qu[], int n)
{

  printf("Queue is:\t");

  for (int i = 0; i < n; i++)
  {
    printf("%d\t ", qu[i]);
  }
  printf("\n");
}

// Function for Enqueue-Adding element at the end of queue

void Enqueue(int que[], int n, int e)
{

  n++;
  que[n - 1] = e;
  display(que, n);
}

// Function for Dequeue-Deleting element from the front of queue

void Dequeue(int que[], int n)
{

  for (int i = 0; i < n - 1; i++)
  {
    que[i] = que[i + 1];
  }
  n--;

  display(que, n);
}

// Function for seeing element at the front

void front(int que[], int n)
{

  printf("%d", que[n - 1]);
}

// Function for seeing element at the end

void rear(int qu[], int n)
{

  printf("%d", qu[0]);
}

// Function for seeing if queue is empty or not

void isempty(int queue[], int n)
{

  int e = 0;

  for (int i = 0; i < n; i++)
  {

    if (queue[i] != 0)
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

// Function for seeing if queue is full or not

void isfull(int que[], int n)
{

  int e = 0;

  for (int i = 0; i < n; i++)
  {

    if (que[i] == 0)
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

// Function for menu for queue

void choice(int queue[], int n)
{

  int c, e;

  printf("Enter 1 for Enqueue, 2 for Dequeue, 3 for front , 4 for rear,5 for is empty or 6 for is full: ");
  scanf("%d", &c);

  switch (c)
  {

    case 1:

      printf("Enter element to add in Queue:");
      scanf("%d", &e);
      Enqueue(queue, n, e);
      break;


    case 2:

      Dequeue(queue, n);
      break;


    case 3:

      front(queue, n);
      break;


    case 4:

      rear(queue, n);
      break;


    case 5:

      isempty(queue, n);
      break;


    case 6:

      isfull(queue, n);
      break;


    default:
      printf("Invalid case!!");
  }
}

// Main function

int main()
{

  printf("Enter number of members in Queue:");
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &queue[i]);
  }

  choice(queue, n);
  return 0;
}