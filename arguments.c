#include "stdio.h"

int main(int argc, char *argv[]) {
  printf("This program prints all of the arguments that it's passed to and "
         "prints \"No args\" if nothing is passed.\n\n");
  // We set the start index as 1 because we don't want to print the
  // first argument which is the file name
  if (argc == 1) {
    printf("No arg(s)\n");
    return 1;
  } else {
    printf("The currently passed arguments are: \n");
  }
  for (int i = 1; i < argc; i++) {
    printf("%s\n", argv[i]);
  }

  printf("\nFinished!\n");
  return 0;
}
