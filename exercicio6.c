#include <stdlib.h>
#include <stdio.h>

void clear_terminal() {
  #ifdef _WIN32
    system("cls");
  #else
    system("clear");
  #endif
}

#define FINISHED 0
#define NOT_FINISHED 1

int main() { 
  clear_terminal();

  int status = NOT_FINISHED;
  float total_cost = 0;
  int selected_option = 1;
  int selected_quantity = 1;

  do {
    printf("Escolha a fruta desejada:\n");
    printf("1. Abacaxi R$5,00/unidade\n");
    printf("2. Maca    R$1,00/unidade\n");
    printf("3. Pera    R$4,00/unidade\n");
    printf("4. FINALIZAR COMPRA\n");
    if (total_cost > 0) {
      printf("===== Total Parcial R$%.2f\n",total_cost);
    }
    printf("> ");
    scanf( "%d", &selected_option);

    if (selected_option < 1) {
      printf("[ERRO] Opcao Invalida.\n");
      exit(EXIT_FAILURE);
    }

    if (selected_option == 4) {
      clear_terminal();
      printf("O total é R$%.2f\n", total_cost);
      printf("Obrigado pela compra.\n");
      exit(EXIT_SUCCESS);
    }

    float fruit_price = 0;
    switch (selected_option) {
      case 1:
        fruit_price = 5.0;
        break;
      case 2:
        fruit_price = 1;
        break;
      case 3:
        fruit_price = 4;
        break;
      default:
        printf("[ERRO] Fruta nao registrada.");
        exit(EXIT_FAILURE);
    }

    printf("Escolha a quantidade desejada: ");
    scanf("%d", &selected_quantity);

    if (selected_quantity < 1) {
      printf("[ERRO] Quantidade Invalida.\n");
      exit(EXIT_FAILURE);
    }


    total_cost += selected_quantity * fruit_price;
    clear_terminal();
    
  } while (status != FINISHED);


  return EXIT_SUCCESS;
}