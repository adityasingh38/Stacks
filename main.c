// program to implement a stack using an array

#include <stdio.h>

#define MAX 10

int stk[MAX];
int top = -1;

void push();
void pop();
void display();

int main()
{
    int choice;
	char c;
	
	printf("Stack Operations: \n");
	printf("1. push\n2. pop\n3. display\n");
	
	do
	{	
		printf("\nEnter 1, 2 or 3 to perform a stack operation from the list above, or 4 to exit: ");
		scanf("%d", &choice);
	
		switch(choice)
		{
			case 1:
				{
					printf("\n\nEntered choice: %d\n", choice);
					push();
					break;
				}
			case 2:
				{
					printf("\n\nEntered choice: %d\n", choice);
					pop();
					break;
				}
			case 3:
				{
					printf("\n\nEntered choice: %d\n", choice);
					display();
					break;				
				}
			case 4:
				{
					printf("\n\nTerminating...");
					break;
				}
			default:
				{
					printf("\n\nInvalid choice. Terminating...");
					break;
				}		
		}
		
	}while(choice == 1 || choice == 2 || choice == 3);
	
	return 0;

    return 0;
}

// push function
void push()
{
    int n;

	printf("Enter an integer: ");
	scanf("%d", &n);

    if(top == (MAX - 1))
    {
        printf("stack overflow, cannot push element into the stack");
    }
    else
    {
        top++;
        stk[top] = n;

        printf("Element entered.\n\n\n");
    }

}

//pop function
void pop()
{
    if(top < 0)
    {
        printf("stack underflow, cannot pop element from the stack");
    }
    else
    {
        top--;
        printf("Element removed.\n\n\n");
    }

    return;
}

//display function
void display()
{
    int i;

    printf("Available stack: ");

    for(i = 0; i <= top; i++)
    {
        printf("%d\t", stk[i]);
    }

    printf("\n\n\n");
    
    return;
}
