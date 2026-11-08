# Fibonacci
I created a basic program which uses heap memory to create a list which, finds the size
of integer and multiplies this by the number of steps inputted by the end user, to establish how much memory is needed.

## features

- I had to define the base cases for the for loop to work and generate the rest of the sequence
- I used malloc to allocate memory from the heap with the paramters I defined, I stored this in a pointer variable called steps because I need to store the memory address into a pointer variable - this is whenever I allocate memory from heap.
- I also always need to free the extra memory I used after I'm done and also set the pointer variable to equal nullptr to reduce dangling pointer risk.

## Screenshot of console

<img width="687" height="282" alt="image" src="https://github.com/user-attachments/assets/2db86f52-ee5a-4fef-ba0f-267bb23aae18" />
