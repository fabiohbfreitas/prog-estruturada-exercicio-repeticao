#include <stdlib.h>
#include <stdio.h>

void clear_terminal() {
  #ifdef _WIN32
    system("cls");
  #else
    system("clear");
  #endif
}

int main() { 
  clear_terminal();

  int total_sum = 0;
  for (int i = 1; i <= 50; i += 1) {
    total_sum += i*2;
  }
  printf("A soma total é %d.\n", total_sum);

  return EXIT_SUCCESS;
}