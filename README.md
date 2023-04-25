
# Stacks in C

In C programming language, a stack is a data structure that follows the Last In First Out (LIFO) principle, which means that the last element added to the stack will be the first element to be removed.

![stack-in-c-thumbnail-image](https://user-images.githubusercontent.com/88421625/234395485-849c94b1-b63a-4afb-98f1-ab983ae65240.jpg)


## Key Points
Here are some important concepts related to implementing a stack in C:

•	Declaring a stack: A stack can be implemented using an array or a linked list. To declare a stack using an array, we define an array of fixed size and an integer variable to keep track of the top of the stack. For example, int stack[MAX_SIZE], top = -1; declares a stack of maximum size MAX_SIZE and initializes the top to -1.

•	Pushing elements onto the stack: To push an element onto the stack, we increment the top variable and assign the value to the stack[top]. For example, if we want to push the value x onto the stack, we can do stack[++top] = x;

•	Popping elements from the stack: To pop an element from the stack, we first check if the stack is empty (i.e., top == -1). If it is not empty, we return the value at the top of the stack and decrement the top variable. For example, if we want to pop the top element from the stack, we can do int x = stack[top--]; return x

• Stacks can be implemented in C using either an array or a linked list.

• When implementing a stack using an array, you need to keep track of the index of the top element in the stack. You can push elements onto the stack by incrementing the top index and storing the new element at that index. Similarly, you can pop elements off the stack by returning the element at the top index and decrementing the top index.

• When implementing a stack using a linked list, you need to define a structure that represents a stack node. Each node should contain a data element and a pointer to the next node in the stack. You can push elements onto the stack by creating a new node, setting its data element to the new value, and setting its next pointer to the current top node. Similarly, you can pop elements off the stack by returning the data element of the current top node and updating the top pointer to point to the next node.

• It's important to check for stack overflow and underflow when implementing a stack. Stack overflow occurs when you try to push an element onto a full stack, while stack underflow occurs when you try to pop an element from an empty stack.

• C provides a standard library function called "push" and "pop" that can be used to implement a stack using an array. These functions are declared in the <stdlib.h> header file.

• C does not provide a built-in stack data structure in its standard library. So, you need to implement a stack on your own if you want to use it in your program.






## Push operation
The push operation is used to add an item to the top of a stack. It involves two steps:

1. Check if the stack is full: If the stack is full, it cannot accommodate any more items, and the push operation fails.

2. Add the item to the top of the stack: If the stack is not full, the item is added to the top of the stack. This involves incrementing the top pointer to the next empty position and storing the item at that position.

### Algorithm
```bash
1. Check if the stack is full (i.e., if the top index is equal to the maximum size of the stack minus 1)
2. If the stack is full, print an error message and return
3. If the stack is not full, increment the top index by 1 and add the new element to the top of the stack


```

## Pop Operation
The pop operation is used to remove the item at the top of a stack. It involves two steps:

1. Check if the stack is empty: If the stack is empty, there are no items to remove, and the pop operation fails.

2. Remove the item at the top of the stack: If the stack is not empty, the item at the top of the stack is removed. This involves retrieving the item at the top position, decrementing the top pointer to the previous position, and updating the stack to reflect the removal of the item.

### Algorithm
```bash
1. Check if the stack is empty (i.e., if the top index is less than 0)
2. If the stack is empty, print an error message and return a default value (e.g., -1)
3. If the stack is not empty, remove the element at the top of the stack and return its value
4. Decrement the top index by 1 to update the top of the stack
```


## Code:
```bash
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
```
## Output

![Screenshot 2023-04-26 014330](https://user-images.githubusercontent.com/88421625/234395642-9020a7c7-9db1-4e6b-9524-9db6f32a4fff.png)

![Screenshot 2023-04-26 014554](https://user-images.githubusercontent.com/88421625/234395664-44da9fda-4dfa-4905-b114-5a9aec0595cd.png)
