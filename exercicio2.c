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
  int readed_value = 0;
  do {
    clear_terminal();
    if (readed_value < 0) {
      printf("[Erro] Digite um numero maior que zero.\n\n");
    }
    printf("Digite o número desejado: ");
    scanf("%d", &readed_value);
  } while (readed_value < 0);

  clear_terminal();
  for (int i = readed_value; i > -1; i -= 1) {
    printf("%d\n", i);
  }

  return EXIT_SUCCESS;
}

