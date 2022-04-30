#include "stdio.h"
#include "stdlib.h"

void read_file(FILE *file) {

  if (!file) {
    printf("Unable to open the file.\n");
    exit(1);
  }

  char buffer[25];

  printf("Reading the content of the file:\n===\n");
  while (fgets(buffer, 25, file) != NULL) {
    printf("%s", buffer);
  }

  printf("\n===\n");

  printf("Closing the file.\n");
}

void write_file(FILE *file, char *content) {
  fprintf(file, "%s", content);
  printf("The file has been written\n");
}

int main(int argc, char **argv) {
  int i;
  printf("params: \n");
  for (i = 0; i < argc; i++) {
    printf("%s\n", argv[i]);
  }
  printf("This reads the content of a file and prints the result.\n\n\n");
  if (argc < 2) {
    printf("Please specify a file path.\n");
    return 1;
  }

  char operation = 'r';
  if (argc >= 3) {
    operation = argv[2][0];
  }

  printf("Operation is %c\n", operation);
  FILE *file = fopen(argv[1], &operation);

  if (operation == 'r') {
    read_file(file);
  } else {
    if (argc < 4) {
      printf("Please define something to write into the file\n");
      return 2;
    }
    write_file(file, argv[3]);
  }
  fclose(file);
  return 0;
}
