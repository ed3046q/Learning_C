// library or header file that contains standard input/output operations
#include <stdio.h>
#include "usefulfunctions.h" /* notice "" searches current directory */

/*
  main() function every C program must have a main,
  it has a returnable 'int' this is for exit codes
*/
int main(void) // void means no input argument
{
   printf("Hello World\n!");  /* using standard ouput function to printf()*/
    printf("%d\n",sqr(255));
    printf("Goodbye World!\n");

    return 0; /* return exit code 0, no error */
}