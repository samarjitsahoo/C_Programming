#include <stdio.h>

#define MAX 100

int idx = -1, n;


/* 9. Implement Priority Queue data structure and associated operations using arrays.
 Design a menu for using the operations. */


// pqVal holds data for each index item
// pqPrio holds priority for each index item

int pqVal[MAX];
int pqPrio[MAX];

// Checking if Queue is empty

int isEmpty()
{
  return idx == -1;
}

// Checking if Queue is full

int isFull()
{
  return idx == MAX - 1;
}

// enqueue just adds item to the end of the priority queue | O(1)

// Adding elements to Queue

void Enqueue()
{

  int d, p;

  printf("Enter element to add in Queue:");
  scanf("%d", &d);
  printf("Enter priority to add in Queue:");
  scanf("%d", &p);

  // Increase the index
  idx++;

  // Insert the element in priority queue
  pqVal[idx] = d;
  pqPrio[idx] = p;
}

// Seeing front element
// returns item with highest priority
// NOTE: Max Priority Queue High priority number means higher priority | O(N)

int peek()
{
  // Note : Max Priority, so assigned min value as initial value
  int indexPos = -1;
  int maxPrio = 0;
  // Linear search for highest priority
  for (int i = 0; i <= idx; i++)
  {
    // If two items have same priority choose the one with
    // higher data value
    if (maxPrio == pqPrio[i] && indexPos > -1 && pqVal[indexPos] < pqVal[i])
    {
      maxPrio = pqPrio[i];
      indexPos = i;
    }

    // note: using MAX Priority so higher priority number
    // means higher priority
    else if (maxPrio < pqPrio[i])
    {
      maxPrio = pqPrio[i];
      indexPos = i;
    }
  }

  // Return index of the element where
  return indexPos;
}


// This removes the element with highest priority
// from the priority queue | O(N)

void Dequeue()
{
  if (!isEmpty())
  {
    // Get element with highest priority
    int indexPos = peek();

    // reduce size of priority queue by first
    // shifting all elements one position left
    // from index where the highest priority item was found
    for (int i = indexPos; i < idx; i++)
    {
      pqVal[i] = pqVal[i + 1];
      pqPrio[i] = pqPrio[i + 1];
    }

    // reduce size of priority queue by 1
    idx--;
  }
}

// Function For displaying queue

void display()
{

  printf("Priority Queue is:\n");
  for (int i = 0; i <= idx; i++)
  {
    printf("(%d, %d)\n", pqVal[i], pqPrio[i]);
  }
}

// Function for Menu

void choice()
{

  int c, i;

  printf("Enter 1 for Enqueue, 2 for Dequeue, 3 for Display , 4 for peek,5 for is empty or 6 for is full: ");
  scanf("%d", &c);

  switch (c)
  {

    case 1:

      Enqueue();
      display();
      break;


    case 2:

      Dequeue();
      display();
      break;


    case 3:

      display();
      break;


    case 4:

      i = peek();
      printf("Highest priority element is : %d", pqVal[i]);
      break;


    case 5:

      isEmpty();
      break;


    case 6:

      isFull();
      break;


    default:
      printf("Invalid case!!");
  }
}

// Main function

int main()
{

  printf("Enter number of members in Priority Queue:");
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    Enqueue();
  }

  choice();

  return 0;
}