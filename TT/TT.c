#include <stdio.h>
#include <memory.h>
#include <stdlib.h>



int strlen_mais_en_mieux(char * truc) {
  int counter = 0;

  while (truc[counter] != '\0') {
    counter++;
  }

  return counter;
}

int main(int argc, char const *argv[])
{

  char bonjour[8];

  puts("Chose a word for the typecheck");
  fgets(bonjour, 8, stdin);

  printf("%s\n", bonjour);


  

  char *buffer = malloc(sizeof(char) * strlen_mais_en_mieux(bonjour) + 1);


  printf("please enter a word\n");
  scanf("%s", buffer);
  
  
  int correct_flag = 1;
  int counter = 0;

  if (strlen_mais_en_mieux(bonjour) != strlen_mais_en_mieux(buffer)) {
    correct_flag = 0;
    puts("words length dont match");
  }
  
  for (int i = 0; bonjour[i] != '\0' && buffer[i] != '\0'; ++i) {
    if (bonjour[i] != buffer[i]) {
      printf("You got the word wrong: expected %c and got %c on the %dth character.\n", bonjour[i], buffer[i], i);
      correct_flag = 0;
    }
  }

  /*while(bonjour[counter] != '\0' && buffer[counter] != '\0' && correct_flag) {
    if (bonjour[counter] != buffer[counter]) {
      printf("You got the word wrong: expected %c and got %c on the %dth character.\n", bonjour[counter], buffer[counter], counter);
      correct_flag = 0;
    }
    counter++;
  }*/

  if (correct_flag) {
    puts("Great");
  }


  
  free(buffer);

  return 0;
}