#include <stdio.h>

int main()
{
  //set value and operator
  int num1, num2;
  int loop = 1;
  char oper;


  while(loop)
  {

    printf("Enter a value: ");
    scanf("%d", &num1);

    printf("Enter an operator: ");
    scanf(" %c", &oper);

    printf("Enter a value: ");
    scanf("%d", &num2);

       
       switch(oper)
       {
         case '+':
         printf("= %d\n\n", num1 + num2);
         break;

         case '-':
         printf("= %d\n\n", num1 - num2);
         break;

         case '*':
         printf("= %d\n\n", num1 * num2);
         break;

         case '/':
         printf("= %d\n\n", num1 / num2);
         break;
        }

            
            char userinput;;
            

            printf("Y/N Would you like to continue ?\n\n");
            scanf("%c", &userinput);

            if (userinput == 'y' || userinput == 'Y')
            {
                loop = 1;
                printf("\n");
            }
            if (userinput == 'n' || userinput == 'N')
            {
                loop = 0;
            break;
            }

   }



  return 0;
}