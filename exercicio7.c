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
  int readed_value = 0;
  do {
    clear_terminal();
    if (readed_value < 0) {
      printf("[Erro] Digite um numero valido.\n\n");
    }
    printf("Digite o número desejado: ");
    scanf("%d", &readed_value);
  } while (readed_value < 0);
  
  clear_terminal();

  int prev_term = 0;
  int next_term = 1;

  if (readed_value == 0) {
    printf("%d\n", prev_term);
  } else if (readed_value == 1) {
    printf("%d\n%d\n", prev_term, next_term);
  } else {
    printf("%d\n%d\n", prev_term, next_term);
    for (int i = 3; i <= readed_value; i += 1) {
      int temp = prev_term + next_term;
      printf("%d\n", temp);
      prev_term = next_term;
      next_term = temp;
    }
  }



  return EXIT_SUCCESS;
}