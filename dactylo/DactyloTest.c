#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
    char inttext [150];
    char utext [150];
    
    
    printf("Enter your text: ");
    fgets(inttext, 150, stdin);

    system("clear");

    printf("Type: %s", inttext);
    fgets(utext, 150, stdin);

        if (strcmp(utext, inttext) == 0)
        {
            printf("Great");
        }
        else
        {
            printf("Wrong");
        }
        
        



getchar();

return 0;
}
