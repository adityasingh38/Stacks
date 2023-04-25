
# Pointers in C

Pointers in C are variables that hold the memory addresses of other variables. They provide a way to manipulate memory and create dynamic data structures such as linked lists, trees, and graphs.

![PointersinC](https://user-images.githubusercontent.com/88421625/234385585-40a7e968-cf73-4e4f-8c6a-59a244897b94.png)


## Key Points
Here are some important pointers concepts in C:

• Declaring a pointer: To declare a pointer, we use an asterisk () in front of the variable name. For example, int ptr; declares a pointer to an integer.

• Assigning a value to a pointer: We can assign a value to a pointer using the ampersand operator (&) to get the memory address of a variable. For example, int x = 10; int* ptr = &x; assigns the memory address of x to ptr.

• Dereferencing a pointer: To access the value stored at the memory location pointed to by a pointer, we use the asterisk operator (*) in front of the pointer. For example, int y = *ptr; assigns the value stored at the memory location pointed to by ptr to y.

• Pointer arithmetic: We can perform arithmetic operations on pointers, such as addition and subtraction. When we add an integer to a pointer, the pointer is incremented by the size of the data type it points to. For example, ptr++ increments the pointer by the size of an int.

• Null pointers: A null pointer is a pointer that points to no valid memory address. We can assign a null value to a pointer using the keyword NULL. For example, int* ptr = NULL; declares a null pointer.

• Dynamic memory allocation: We can allocate memory dynamically using the functions malloc(), calloc(), and realloc(). These functions return a pointer to the allocated memory. We can free the allocated memory using the function free().

• Pointers to functions: In C, we can declare pointers to functions. This allows us to pass functions as arguments to other functions and to dynamically choose which function to call at runtime.

• Pointers and arrays: In C, an array is a pointer to the first element of the array. We can use pointers to access array elements and to perform pointer arithmetic on arrays.

Overall, pointers are a powerful feature of C that enable us to write efficient and flexible code. However, they also require careful memory management and can be a source of bugs if not used correctly.
## Syntax
The syntax for using a pointer is as follows:
```bash
datatype *var_name; 
int *ptr;   // ptr can point to an address which holds int data
```
NOTE: The pointer ptr always stores integer values.

The program file in this repository demonstrates the usage of pointers.

## Code:
```bash
#include <stdio.h>

int main()
{
	
	// a. creating a variable, then creating a pointer to point to the memory address of the variable, printing both variable values:
	
	int x;
	
	int arr[5] = {4, 2, 9, 3, 0};
	
	// pointer variable p
	// the data type of a variable and the data type of the pointer variable must be the same. 
	// the pointer variable without the * ALWAYS stores an integer value (regardless of what the data type of *p is).
	int *p;
	
	printf("Enter a number: ");
	scanf("%d", &x);
	
	// using & before a variable gives the memory address of that variable
	p = &x;
	
	printf("\n");
	printf("Value stored in x: %d \n", x);
	printf("Value that *p points towards: %d \n", *p);
	printf("Memory address of x, &x: %d \n", &x);
	printf("Memory address stored in p: %d \n", p);
	printf("Memory address of p, &p : %d \n\n\n", &p);
	
	
	// pointers with arrays:
	
	int *q = arr;
	
	printf("*q pointing towards: %d \n", *q);
	q++;
	printf("after incrementing, *q pointing towards: %d \n", *q);
	
	return 0;
	
}
```
## Output
![OP1](https://user-images.githubusercontent.com/88421625/234385788-9c7a937c-1140-4144-addb-8098450e0283.png)

