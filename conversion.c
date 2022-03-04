/*
 * This files provides functions that will convert files types. For example, int
 * -> str, str -> int and so on. Each conversion is implemented in a separate
 * function. In case the coversion is not possible, the function returns an
 * error accordingly
 * */

// Take a string value and convert it to int (if possible).

#include <stdio.h>
#include <stdlib.h>
int convert_str_to_int(char *value) { return atoi(value); }

double convert_str_to_double(char *value) { return atof(value); }

char *convert_int_to_str(int value) {
  char *result;
  sprintf(result, "%d", value);
  return result;
}

int main() {
  printf("Convert \"1\" to int:\n");
  printf("%i\n", convert_str_to_int("1"));
  printf("Convert 2 as int to str:\n");
  printf("%s\n", convert_int_to_str(2));
  printf("Convert 3.45678 as str to double:\n");
  printf("%f\n", convert_str_to_double("3.45678"));

  printf("\n\nFinished\n\n");
  return 0;
}
