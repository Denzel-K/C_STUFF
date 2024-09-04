#include <stdio.h>
#include <stdlib.h>

int main(){
  // >> Size of datatypes
  int myInt;
  float myFloat;
  double myDouble;
  char myChar;

  printf("%lu bytes for integers\n", sizeof(myInt));  
  printf("%lu bytes for floats\n", sizeof(myFloat)); 
  printf("%lu bytes for doubles\n", sizeof(myDouble)); 
  printf("%lu bytes for characters\n\n", sizeof(myChar));   

  // >> Allocation and reading
  int * students;
  int numOfStudents = 12;

  students = calloc(numOfStudents, sizeof(*students));
  printf("Size of sudents pointer: %lu bytes. \n", sizeof(students));
  printf("Size of data at sudents pointer (dereferenced): %lu bytes. \n\n", sizeof(*students));
  printf("Total size (12) students: %lu bytes\n\n", numOfStudents * sizeof(*students));


  // >> Reallocation to increase size
  int *ptr1, *ptr2;

  // Allocate memory
  ptr1 = malloc(4);

  // Attempt to resize the memory
  ptr2 = realloc(ptr1, 8);

  // Check whether realloc is able to resize the memory or not
  if (ptr2 == NULL) {
    // If reallocation fails
    printf("Failed. Unable to resize memory");
  } else {
    // If reallocation is sucessful
    printf("Success. 8 bytes reallocated at address %p \n", ptr2);
    ptr1 = ptr2;  // Update ptr1 to point to the newly allocated memory
  }


  // >> Memory Deallocation
  int *ptr;
  ptr = malloc(sizeof(*ptr)); // Allocate memory for one integer

  // If memory cannot be allocated, print a message and end the main() function
  if (ptr == NULL) {
    printf("Unable to allocate memory");
    return 1;
  }

  // Set the value of the integer
  *ptr = 20;

  // Print the integer value
  printf("Integer value: %d\n", *ptr);

  // Free allocated memory
  free(ptr);

  // Set the pointer to NULL to prevent it from being accidentally used
  ptr = NULL;

  return 0;
}