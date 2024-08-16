#include <stdio.h>

// For dynamic memory allocation

#include <stdlib.h>

int n, i = 0, in;


/* 3. Create a menu driven program to insert, display, and delete elements
 using doubly linked list. Insertion and deletion has three possible
 cases: (i) insertion at beginning, (ii) insertion at the end, and
(iii) insertion in the middle. Implement linear search and binary search
functions and add to the menu. Comment on the time complexity of binary
search using linked list. */

// Structure for storing linked list

struct node
{

  struct node *prev;

  int data;

  struct node *next;
};

// Head pointer
struct node *head;

// Function for list creation

void makelist(int data)
{

// Allocating memory for new node
  struct node *new = (struct node *)malloc(sizeof(struct node));

  if (new == NULL)
  {

    printf("\nOVERFLOW");
  }

  else if (head == NULL)
  {

    new->data = data;
    new->next = head;
    head = new;
  }

  else
  {
    struct node *temp;
    temp = head;
    new->data = data;

    while (temp->next != NULL)
    {
      temp = temp->next;
    }
    temp->next = new;
    new->prev = temp;
    new->next = NULL;
  }
}

// Function for displaying list

void display(struct node *Node)
{

  printf("Linked list is:\t");

  while (Node != NULL)
  {

    printf("%d\t", Node->data);

    Node = Node->next;
  }
}

// Function for inserting element at the beginning

void insert_begin(int data)
{

  struct node *temp;

  struct node *new = (struct node *)malloc(sizeof(struct node));

  if (new == NULL)
  {

    printf("\nOVERFLOW");
  }

  else
  {

    new->data = data;
    new->next = head;
    head = new;
    new->prev = NULL;
    printf("Node inserted");
    display(head);
  }
}

// Function for inserting element at the end

void insert_last(int data)
{

  struct node *temp;

  struct node *new = (struct node *)malloc(sizeof(struct node));

  new->data = data;

  if (new == NULL)
  {
    printf("\nOVERFLOW");
  }

  else if (head == NULL)
  {

    new->next = head;
    head = new;
    printf("Node inserted\n");
    display(head);
  }

  else
  {

    temp = head;
    while (temp->next != NULL)
    {
      temp = temp->next;
    }
    temp->next = new;
    new->prev = temp;
    new->next = NULL;

    printf("Node inserted\n");
    display(head);
  }
}

// Function for inserting element at any place(index)

void insert_anyplace(int data)
{

  struct node *temp;

  struct node *new = (struct node *)malloc(sizeof(struct node));

  if (new == NULL)
  {
    printf("\nOVERFLOW");
  }

  else
  {

    int item, loc;
    new->data = data;

    printf("Enter the location after which you want to insert: ");
    scanf("%d", &loc);

    temp = head;

    for (i = 0; i < loc - 1; i++)
    {

      temp = temp->next;

      if (temp == NULL)
      {

        printf("Can't insert");
      }
    }

    new->next = temp->next;

    new->prev = temp;
    temp->next = new;

    printf("Node inserted");
    display(head);
  }
}

// Function for deleting Node from the beginning

void delete_begin()
{

  if (head == NULL)
  {
    printf("\nList is empty");
  }

  else
  {

    struct node *ptr;
    ptr = head;
    head = ptr->next;
    head->prev = NULL;
    free(ptr);
    printf("Node deleted\n");
    display(head);
  }
}

// Function for deleting Node from the end

void delete_last()
{

  struct node *ptr;
  if (head == NULL)
  {
    printf("\nList is empty");
  }

  else if (head->next == NULL)
  {
    free(head);
    printf("Only Node deleted\n");
    display(head);
  }

  else
  {
    ptr = head;
    while (ptr->next != NULL)
    {
      ptr = ptr->next;
    }
    ptr->prev = NULL;
    free(ptr);
    printf("Node deleted\n");
    display(head);
  }
}

// Function for deleting Node from any place(index)

void delete_anyplace()
{

  struct node *ptr;
  int pos;

  printf("Enter position after which you want to delete: ");
  scanf("%d", &pos);

  ptr = head;

  for (i = 0; i < pos; i++)
  {

    ptr = ptr->next;

    if (ptr == NULL)
    {
      printf("Can't delete");
    }
  }

  struct node *ptr1;
  ptr1 = ptr->prev;
  ptr1->next = ptr->next;

  free(ptr);
  printf("Node deleted at: %d\n", pos + 1);
  display(head);
}

// Function for Linear Search

void linearsearch(int e)
{

  struct node *ptr;
  int f = 0;

  ptr = head;

  while (ptr != NULL)
  {

    if (ptr->data == e)
    {

      printf("Found at: %d", i + 1);
      f++;
      break;
    }

    else
    {
      i++;
    }
    ptr = ptr->next;
  }

  if (f == 0)
  {
    printf("Element not found");
  }
}

// Function for Binary Search

int binarysearch(int s, int n, int e)
{

  struct node *ptr;
  int f = 0;

  ptr = head;

  int mid = s + n / 2;

  for (i = 0; i < mid; i++)
  {
    ptr = ptr->next;
  }

  if (ptr->data == e)
  {
    printf("Found at: %d", i + 1);
    f++;
  }

  else if ((ptr->data) > e)
  {
    return binarysearch(s, mid - 1, e);
  }
  else
  {
    return binarysearch(mid + 1, n, e);
  }

  if (f == 0)
  {
    printf("Element not found");
  }
}

// Function for Menu

void choice()
{

  int c, in, e, key;

  printf("\nEnter 1 for insertion, 2 for Deletion, 3 for display,4 for linear search(Unsorted list),5 for binarysearch(Sorted list): ");
  scanf("%d", &c);

  switch (c)
  {

    case 1:

      printf("Enter position to insert:- 1 for begining,2 for last or 3 for any other position:");
      scanf("%d", &in);

      printf("Enter element value: ");
      scanf("%d", &e);

      switch (in)
      {

        case 1:
          insert_begin(e);
          break;

        case 2:
          insert_last(e);
          break;

        default:
          insert_anyplace(e);
      }
      break;


    case 2:

      printf("Enter position to delete:- 1 for begining,2 for last or 3 for any other position:");
      scanf("%d", &in);

      switch (in)
      {

        case 1:
          delete_begin();
          break;

        case 2:
          delete_last();
          break;

        default:
          delete_anyplace();
      }
      break;


    case 3:

      display(head);
      break;


    case 4:

      printf("Enter key to find:");
      scanf("%d", &key);

      linearsearch(key);


    case 5:

      printf("Enter key to find:");
      scanf("%d", &key);
      binarysearch(0, n, key);
      break;


    default:
      printf("Invalid case!!");
  }
}

// Main function

int main()
{

  printf("Enter number of members in doubly linked list:");
  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {

    printf("Enter element %d: ", i + 1);
    int e;
    scanf("%d", &e);

    makelist(e);

  }

  display(head);
  choice();
}