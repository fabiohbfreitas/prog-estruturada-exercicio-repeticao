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

  for (int i = 1; i <= 5; i += 1) {
    printf("%d\n", i * 3);
  }

  return EXIT_SUCCESS;
}