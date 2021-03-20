#include<stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <ncurses.h>
#include <curses.h>


int main()
{
//Variables : start for users choice, h hours, m minutes, s seconds
    int start, h, m, s; h = 0, m = 0, s = 0;
    char p = 'p';


    printf("---- STOPWATCH ----\n\n"); 
    printf("1. Start\n2. Exit\n\n");  
    scanf("%d", &start);     //users input start/exit
    
    switch (start)
    {
    case 1:     //if user press 1 stopwatch starts

        while (1) //The stopwatch infinite loop
        {
            
            if (s==60)  //if seconds > 59, minute gain one and second reset to 0
            {
                m=m+1;
                s=0;
            }
            if (m==60) //if min > 59, hours gain one and second reset to 0
            {
                h=h+1;
                m=0;
            }
            if (h==60) //if hours > 24 (hours), everything reset
            {
                h=0;
                m=0;
                s=0;
            }
        
            sleep(1); //1sec delay
            s=s+1;
            //clean the board
            system("clear");
            printf("---- STOPWATCH ----\n\n");  
        
            printf("%d : %d :%d \n\n", h, m, s); //print stopwatch

            if (p != 'p' && p != 'P')
            {
                getchar();
            }
            

        }
            
    
    case 2:  //users pressed 2, exit

    getchar();

    default:
        system("clear");

    }
    


return 0;


}