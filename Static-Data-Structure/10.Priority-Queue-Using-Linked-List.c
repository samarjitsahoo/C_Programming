#include <stdio.h>

#include <stdlib.h>


/* 10. Implement Priority Queue data structure and associated operations using linked list.
 Design a menu for using the operations. */


int n;

// Creating structure for queue

struct node
{
  int data;
  int priority;
  struct node *next;
};

// Head Pointer
struct node *head;


// Function to Display Queue

void display(struct node *Node)
{

  printf("Priority Queue is:\n");

  while (Node != NULL)
  {
    printf("(%d, %d)\n", Node->data, Node->priority);

    Node = Node->next;
  }
}

// Function to Add A New Node to Queue

void Enqueue()
{

  int d, p;
  struct node *ptr;

  printf("Enter element to add in Queue:");
  scanf("%d", &d);
  printf("Enter priority to add in Queue:");
  scanf("%d", &p);

  struct node *new = (struct node *)malloc(sizeof(struct node));

  new->data = d;
  new->priority = p;

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
}

// Function for Checking if queue is empty

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

// Function for Checking front element of queue

int peek()
{

  struct node *ptr;
  ptr = head;
  int i = ptr->priority;
  int pos = 0;

  while (ptr->next != NULL)
  {
    if (i < (ptr->priority))
    {
      i = ptr->priority;
    }
    ptr = ptr->next;
    pos++;
  }
  return pos - 1;
}

// Function for deleting elements from queue

void Dequeue()
{

  struct node *ptr, *ptr1;
  int pos = peek();

  ptr = head;

  for (int i = 0; i < pos; i++)
  {
    ptr1 = ptr;
    ptr = ptr->next;
    if (ptr == NULL)
    {
      printf("Can't delete");
    }
  }
  ptr1->next = ptr->next;
  free(ptr);
}

// Function for Checking if queue is full

void isFull()
{

  struct node *new = (struct node *)malloc(sizeof(struct node));

  if (new == NULL)
  {
    printf("Queue is  Full");
  }

  else
  {
    printf("Queue is Not Full");
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
      display(head);
      break;


    case 2:

      Dequeue();
      display(head);
      break;


    case 3:

      display(head);
      break;


    case 4:

      peek();
      break;


    case 5:

      isempty();
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