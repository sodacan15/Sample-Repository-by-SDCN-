#include <stdio.h>

int main () {
  // Basic pointer example
  int number = 42;
  int *ptr = &number;  // ptr points to the address of number
  
  printf("This is a replit powered file.\n");
  printf("Value: %d\n", number);
  printf("Address: %p\n", (void*)&number);
  printf("Pointer value: %p\n", (void*)ptr);
  printf("Value through pointer: %d\n", *ptr);
  
  return 0;
}
