#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char benoit, pedro, axel;
    int hum, gent, intel;

    printf("There are 3 people. \nYou will have to rate them on a scale from 1 to 10.\n\n");

    printf("Rate Benoit on a scale of 1 to 10: \n\n");

    printf("Funny /10: ");
    scanf("%d", &hum);

    printf("Kindness /10: ");
    scanf("%d", &gent);

    printf("Intel /10: ");
    scanf("%d", &intel);

    benoit = hum + gent + intel;

    printf("Benoit has %d points.\n\n", benoit);
    
    printf("Next step in 5sec...\n\n");

    sleep(5);
    system("clear");

    hum = 0;
    gent= 0;
    intel= 0;

    printf("Rate Pedro on a scale of 1 to 10: \n\n");

    printf("Funny /10: ");
    scanf("%d", &hum);

    printf("Kindness /10: ");
    scanf("%d", &gent);

    printf("Intel /10: ");
    scanf("%d", &intel);

    pedro = hum + gent + intel;

    printf("Pedro has %d points.\n\n", pedro);

    printf("Next step in 5sec...\n\n");
    sleep(5);
    system("clear"); 

    printf("Rate Axel on a scale of 1 to 10: \n\n");

    printf("Funny /10: ");
    scanf("%d", &hum);

    printf("Kindness /10: ");
    scanf("%d", &gent);

    printf("Intel /10: ");
    scanf("%d", &intel);

    axel = hum + gent + intel;

    printf("Axel has %d points.\n\n", axel);

    printf("CALCULATING . . .");
    sleep(5);

}   


