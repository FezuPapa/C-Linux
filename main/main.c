#include <stdio.h>
#include <string.h>

int main()
{
char *truc = "olala";
char userinput[64];;

scanf("%s", &userinput);
for (int i =0; i < strlen(truc); ++i) 
{
  if (truc[i] != userinput[i]) 
  {
    printf("Damn");
  }
}

}
  
