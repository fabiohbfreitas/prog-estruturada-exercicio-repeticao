#include <stdlib.h>
#include <stdio.h>

void clear_terminal() {
  #ifdef _WIN32
    system("cls");
  #else
    system("clear");
  #endif
}

#define SEX_M 1
#define SEX_F 2

#define EYE_BLUE 1
#define EYE_GREEN 2
#define EYE_BROWN 3
#define EYE_BLACK 4

#define HAIR_BLONDE 1
#define HAIR_BROWN 2
#define HAIR_BLACK 3
#define HAIR_RED 4

int main() { 
  clear_terminal();

  int total_interviewed = 0;
  int target_participants = 0;

  while (1) {
    int readed_sex = 1;
    do {
      clear_terminal();
      printf("Informe os dados do proximo participante:\n\n");
      if (readed_sex != SEX_M && readed_sex != SEX_F) {
        printf("[Erro] Digite um valor valido.\n\n");
      }
      printf("\n\n1. Masculino\n");
      printf("2. Feminino\n");
      printf("Informe o sexo: ");
      scanf("%d", &readed_sex);
    } while (readed_sex != SEX_M && readed_sex != SEX_F);

    int readed_eye_color = EYE_BROWN;
    do {
      if (
        readed_eye_color != EYE_BLACK &&
        readed_eye_color != EYE_GREEN &&
        readed_eye_color != EYE_BLUE &&
        readed_eye_color != EYE_BROWN
      ) {
        printf("[Erro] Digite um valor valido.\n\n");
      }
      printf("\n\n1. Azul\n");
      printf("2. Verde\n");
      printf("3. Castanho\n");
      printf("4. Preto\n");
      printf("Informe a cor dos olhos: ");
      scanf("%d", &readed_eye_color);
    } while (
      readed_eye_color != EYE_BLACK &&
      readed_eye_color != EYE_GREEN &&
      readed_eye_color != EYE_BLUE &&
      readed_eye_color != EYE_BROWN
    );

    int readed_hair_color = HAIR_BROWN;
    do {
      if (
        readed_hair_color != HAIR_BLONDE &&
        readed_hair_color != HAIR_BLACK &&
        readed_hair_color != HAIR_BROWN &&
        readed_hair_color != HAIR_RED
      ) {
        printf("[Erro] Digite um valor valido.\n\n");
      }
      printf("\n\n1. Loiro\n");
      printf("2. Castanho\n");
      printf("3. Preto\n");
      printf("4. Ruivo\n");
      printf("Informe a cor do cabelo: ");
      scanf("%d", &readed_hair_color);
    } while (
      readed_hair_color != HAIR_BLONDE &&
      readed_hair_color != HAIR_BLACK &&
      readed_hair_color != HAIR_BROWN &&
      readed_hair_color != HAIR_RED
    );

    int readed_age = 10;
    do {
      if (
        readed_age < 10 ||
        readed_age > 100 
      ) {
        printf("[Erro] Digite um valor valido.\n\n");
      }
      printf("\n\nInforme a idade: ");
      scanf("%d", &readed_age);

      if (readed_age == -1) {
        break;
      }

    } while (
        readed_age < 10 ||
        readed_age > 100 
    );

    if (readed_age == -1) {
        break;
    }

    float readed_salary = 1;
    do {
      if (readed_salary < 0) {
        printf("[Erro] Digite um valor valido.\n\n");
      }
      printf("\n\nInforme o salário: ");
      scanf("%f", &readed_salary);
    } while (readed_salary < 0);


    if (
      readed_sex == SEX_F &&
      readed_eye_color == EYE_BROWN &&
      readed_hair_color == HAIR_BROWN &&
      readed_age >=18 && readed_age <= 35){
        target_participants += 1;
      }

    total_interviewed += 1;
  }

  if (total_interviewed == 0) {
    clear_terminal();
    printf("Não ha resultado disponível.\n");
    exit(1);
  }

  clear_terminal();
  printf("[RESULTADO]\n");
  printf("Total entrevistados: %d\n", total_interviewed);
  const int percentual = ((float)target_participants / total_interviewed) * 100;
  printf("Mulheres entre 18 e 35, com cabelo e olhos castanhos: %d%%\n", percentual);
  return EXIT_SUCCESS;
}