//PUSH and POP on stacks
#include<stdio.h>
#define MAX 5

int a[MAX],top=-1;
void push();
void pop();
void display();
int peek();

int main()
{
    int ch;
    printf("1. PUSH or INSERT\n");
    printf("2. POP or DELETE\n");
    printf("3. DISPLAY\n");
    printf("4. END\n");
    printf("5. PEEK");

    while(1)
    {
        printf("\n\nEnter Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            {
                push();
                break;
            }
        case 2:
            {
                pop();
                break; 
  }
        case 3:
            {
                display();
                break;
            }
case 4:
            {
            	printf("Exit from stack");
               return 0;
               
            }
        case 5:
            {
                peek();
                break;
            }
        }
    }
}

void push()
{
    int data;
    if(top==MAX-1)
    {
        printf("\nstack is full\n");

    }
    else
    {
        printf("enter element\n");
        scanf("%d",&data);
        printf("%d is pushed into stack\n", data);
        top++;
        a[top]=data;
    }
}

void pop()
{
    if(top==-1)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("popped element : %d",a[top]);
        top--;
    }
}

void display()
{
    int i;
    if (top>=0)
    {
        printf("Elements of the stack:");
        for (i=top;i>=0;i--)
            printf("\n%d",a[i]);
    }
    else
    {
        printf("The stack is empty");
    }
}

int peek()
{
	
    if(top<0)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("%d is the peek element",a[top]);
        return a[top];
    }
}


