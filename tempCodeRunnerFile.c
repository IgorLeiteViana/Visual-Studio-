#include <stdio.h>

int main() {
  printf("Código da amizade do Sheldon\n");

  int amigoteste1 = 0; // Inicialmente falso
  int amigo = 0; // Inicialmente falso
  int amigoteste2 = 0;
  int amigoteste3 = 0;  // Inicialmente falso

  while (amigoteste1 == 0) {
    printf("Ligando...\n");
    scanf("%d", &amigoteste1);

    if (amigoteste1 == 1) {
      printf("Ele ligou! Indo para o plano 2.\n");
    }
  }

  if (amigoteste1 == 1) {
    printf("Convidar para o convite.\n");
    scanf("%d", &amigoteste2);
  }

  if (amigoteste2 == 1) {
    printf("Começo de uma amizade!\n");
  } else if (amigoteste2 ==0) {
    if (amigoteste2 == 0) {
      printf("chá , leite ou café");  
      printf("Aceitou a bebida?\n");
      scanf("%d", &amigoteste2);
    }if (amigoteste2 == 1) {
    printf("Começo de uma amizade!\n");
    }
     if (amigoteste2 == 0)
    {
    while (amigoteste2 == 0) {
    printf("perguntar interrese\n");
    scanf("%d", &amigoteste2);
    if (amigoteste2 == 1) {
      printf("Realizar interrese.\n");
    }if (amigoteste2 == 1) {
    printf("Começo de uma amizade!\n");
   }
  }
    }
  }  
  return 0;
}
