#include <stdio.h>  // This line includes the standard input/output library, providing functions like printf and scanf for formatted input and output.

// The following two header files were included in the original code but are not used in this specific example. You can remove them if you don't plan to use functionalities from those libraries.
// #include <stdlib.h>
// #include <string.h>

int main() {
  int *arr;  // Declares a pointer variable 'arr' that will point to an integer array.
  int n, i;  // Declares two integer variables 'n' to store the size of the array and 'i' for loop iteration.

  printf("qual o tamanho do seu vetor? (How big is your array?)");  // Prompts the user to enter the size of the array in Portuguese.
  scanf("%d", &n);  // Reads the integer input from the user and stores it in the variable 'n'.

  arr = (int *)malloc(n * sizeof(int));  // Allocates memory for the array using malloc. The cast `(int *)` ensures the allocated memory is treated as an integer array.

  if (!arr) {  // Checks if memory allocation was successful. The '!' operator negates the value, so if 'arr' is NULL (allocation failed), the condition is true.
    printf("Não fou possivel alocar memoria para o vetor (Memory allocation failed for the array)\n");
    return 1;  // Returns 1 to indicate an error.
  }

  for (i = 0; i < n; i++) {
    arr[i] = i + 1;  // Assigns values to the array elements. Each element gets its index + 1.
  }

  printf("vetor = ( (Array = ( ");  // Prints the beginning of the array representation.
  printf("%d ", arr[4]);  // Prints only the element at index 4 (assuming the array indexing starts from 0).
  for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);  // Prints all elements of the array with spaces in between.
  }
  printf(") \n\n");  // Prints the closing parenthesis and newline characters.

  free(arr);  // Deallocates the memory used by the array to prevent memory leaks.
  return 0;  // Returns 0 to indicate successful program execution.
}
