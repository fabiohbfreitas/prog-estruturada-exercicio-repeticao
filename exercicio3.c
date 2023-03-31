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

  int readed_value = 1;
  do {
    clear_terminal();
    
    if (readed_value < 1) {
      printf("[ERRO] O número deve ser maior que 1.\n\n");
    }
    printf("Digite o numero desejado: ");
    scanf("%d", &readed_value);

  } while (readed_value < 1);

  clear_terminal();
  for (int i = 1; i <= readed_value; i += 2) {
    printf("%d\n", i);
  }

  return EXIT_SUCCESS;
}
