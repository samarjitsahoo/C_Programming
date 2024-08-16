#include <stdio.h>

// For dynamic memory allocation

#include <stdlib.h>

int n;


/* 5. Implement Stack data structure and associated
operations using linked list. Design a menu for
using the operations. */

// Making structure for stack

struct stack
{

  int data;
  struct stack *next;
};

// Head Pointer
struct stack *head;

// Function for displaying stack

void display(struct stack *Node)
{

  printf("Stack is:\t");

  while (Node != NULL)
  {
    printf("%d\t", Node->data);
    Node = Node->next;
  }
  printf("\n");
}

// Popping/Deleting element at top of stack

void pop()
{

  if (head == NULL)
  {

    printf("\nStack is empty");
  }

  else
  {
    struct stack *ptr;
    ptr = head;
    head = ptr->next;
    free(ptr);
    display(head);
  }
}

// Inserting element at top of stack

void push ()
{

  int val;

  struct stack *new = (struct stack *)malloc(sizeof(struct stack));

  if (new == NULL)
  {
    printf("\nOVERFLOW");
  }

  else
  {
    printf("Enter element value: ");
    scanf("%d", &val);

    new->data = val;
    new->next = head;

    head = new;
  }
  display(head);
}

// Checking if stack is empty

void isempty()
{

  if (head != NULL)
  {

    printf("Stack is Not Empty");
  }
  else
  {
    printf("Stack is Empty");
  }
}

// Checking if stack is full

void isfull()
{

  struct stack *new = (struct stack *)malloc(sizeof(struct stack));

  if (new == NULL)
  {
    printf("Stack is  Full");
  }
  else
  {
    printf("Stack is Not Full");
  }

}

// Seeing element at top of stack

void peek()
{
  printf("%d", head->data);
}

// Looking at size of stack

void size(int t)
{

  printf("The size of stack is:%d", t);
}

// Menu function

void choice()
{

  int c, e;

  printf("Enter 1 for Push, 2 for Pop, 3 for Peek , 4 for Size,5 for is empty or 6 for is full: ");
  scanf("%d", &c);

  switch (c)
  {

    case 1:

      push();
      break;


    case 2:

      pop();
      break;


    case 3:

      peek();
      break;


    case 4:

      size(n);
      break;


    case 5:

      isempty();
      break;


    case 6:

      isfull();
      break;


    default:

      printf("Invalid case!!");
  }
}

// Main function

int main()
{

  printf("Enter number of elements:");
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {

    push();
  }

  choice();
  return 0;
}