#include <stdio.h>

// For Dynamic Memory allocation

#include <stdlib.h>

int n, i, el;

struct Queue *ptr;


/* 7. Implement Queue data structure and associated
using linked list Design a menu for using the
operations. */

// Making structure for queue

struct Queue
{

  int data;
  struct Queue *next;
};

// Head Pointer
struct Queue *head;

// Function for displaying queue

void display(struct Queue *Node)
{

  printf("Queue is:\t");

  while (Node != NULL)
  {

    printf("%d\t", Node->data);

    Node = Node->next;
  }
  printf("\n");
}

// Function for Enqueue-Adding element at the end of queue

void Enqueue(int e)
{

  struct Queue *new = (struct Queue *)malloc(sizeof(struct Queue));

  new->data = e;

  if (head == NULL)
  {
    head = new;
    new->next = NULL;
  }

  else if (head->next == NULL)
  {
    head->next = new;
    new->next = NULL;
  }

  else
  {
    ptr = head;

    while (ptr->next != NULL)
    {
      ptr = ptr->next;
    }
    ptr->next = new;
    new->next = NULL;
  }
  display(head);
}

// Function for Dequeue-Deleting element from the front of queue

void Dequeue()
{

  if (head == NULL)
  {

    printf("Queue is Empty");
  }

  else if (head->next == NULL)
  {

    free(head);
    printf("only member of queue deleted");
  }

  else
  {
    ptr = head;
    head = head->next;
    free(ptr);
    printf("Member of queue deleted");
  }
  display(head);
}

// Function for seeing if queue is empty or not

void isempty()
{

  if (head != NULL)
  {
    printf("Queue is Not Empty");
  }

  else
  {
    printf("Queue is Empty");
  }
}

// Function for seeing if queue is full or not

void isfull()
{

  struct Queue *new = (struct Queue *)malloc(sizeof(struct Queue));

  if (new == NULL)
  {
    printf("Queue is  Full");
  }

  else
  {
    printf("Queue is Not Full");
  }
}

// Function for seeing element at the end

void rear()
{

  while (ptr->next != NULL)
  {
    ptr = ptr->next;
  }

  printf("%d", ptr->data);
}


// Seeing the size of queue

void size(int t)
{
  printf("The size of Queue is:%d", t);
}

// Function for seeing element at the front

void front()
{

  printf("%d", head->data);
}

// Function for Menu

void choice()
{

  int c, e;

  printf("Enter 1 for Enqueue, 2 for Dequeue, 3 for front , 4 for rear,5 for is empty ,6 for is full or 7 for size: ");
  scanf("%d", &c);


  switch (c)
  {

    case 1:

      printf("Enter element to add in Queue:");
      scanf("%d", &e);
      Enqueue(e);

      break;


    case 2:

      Dequeue();
      break;


    case 3:
      front();

      break;


    case 4:

      rear();
      break;


    case 5:

      isempty();
      break;


    case 6:

      isfull();
      break;


    case 7:

      size(n);
      break;


    default:
      printf("Invalid case!!");
  }
}

// Main Function

int main()
{

  printf("Enter number of members in Queue:");
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &el);
    Enqueue(el);
  }

  choice();

  return 0;
}