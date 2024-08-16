#include <stdio.h>

int stack[100], n, top = -1;

/*  4. Implement Stack data structure and associated operations using arrays. Design a menu for using the operations. */


// For printing stack

void print(int s[], int n)
{

  printf("Stack is:\t");

  for (int i = 0; i <= n; i++)
  {
    printf("%d\t ", s[i]);
  }
  printf("\n");
}

// For Popping /Deleting element at the top of stack

void pop()
{
  if (top == -1)
    printf("Underflow");
  else
    top = top - 1;
}

// Pushing element at the top of stack

void push ()
{
  int val;
  if (top == n )
    printf("\n Overflow");
  else
  {
    printf("Enter the value: ");
    scanf("%d", &val);
    top = top + 1;
    stack[top] = val;
  }
  print(stack, top);
}

// For checking if stack is empty or not

void isempty(int st[], int n)
{
  int e = 0;
  for (int i = 0; i < n; i++)
  {
    if (st[i] != 0)
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

// For checking stack is full or not

void isfull(int st[], int n)
{
  int e = 0;
  for (int i = 0; i < n; i++)
  {
    if (st[i] == 0)
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

// Seeing the element at the top of stack

void peek(int st[], int n)
{
  printf("%d", st[n - 1]);
}

// Seeing size of stack

void size(int t)
{
  printf("The size of stack is:%d", t + 1);
}

// Menu function

int choice()
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

      peek(stack, top);
      break;


    case 4:

      size(top);
      return top;
      break;


    case 5:

      isempty(stack, top);
      break;


    case 6:

      isfull(stack, top);
      break;


    default:

      printf("Invalid case!!");
      return -1;
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