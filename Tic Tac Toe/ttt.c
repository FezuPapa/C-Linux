#include <stdio.h>
#include <stdlib.h>

char box[10]={'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

void creating_board();
void marking_board(int, char);

int main ()
{
    int choice, player=1, i = -1;
    char mark;
    
    
    while(i == -1)
    {
        creating_board();   
        player= (player %2) ? 1: 2;

        printf("P%d, enter a number: ", player);
        scanf("%d", &choice);

        mark=(player==1) ? 'X' : 'O';
        marking_board(choice, mark);
        
        i=checkwin();
        player++;
    }

    creating_board();
    if(i == 1)
        printf("\t\tP%d won the game\t\t", player);
    else
        printf("Draw");

    return 0;
}



void creating_board()
{
    system("clear");
    
    printf("\t\t   ____________________\t\t\n");
    printf("\t\t  //                 //\t\t\n");
    printf("\t\t //   Tic Tac Toe   //\t\t\n");
    printf("\t\t//_________________//\t\t\n\n\n\n");
    printf("\tPlayer 1 (X)              Player2 (O)\t\n\n\n");
    printf("\t\t       |     |\t\n");
    printf("\t\t    %c  |  %c  |  %c  \t\t\n", box[1], box[2], box[3]);
    printf("\t\t  -----|-----|----- \t\t\n");
    printf("\t\t    %c  |  %c  |  %c  \t\t\n", box[4], box[5], box[6]);
    printf("\t\t  -----|-----|----- \t\t\n");
    printf("\t\t    %c  |  %c  |  %c  \t\t\n", box[7], box[8], box[9]);
    printf("\t\t       |     |\t\t\n\n");
    printf(" \n");

       
}

void marking_board(int choice, char mark)
{
    if(choice==1 && box[1]=='1')
        box[1]=mark;
    else if (choice==2 && box[2]=='2')
        box[2]=mark;
    else if (choice==3 && box[3]=='3')
        box[3]=mark;
    else if (choice==4 && box[4]=='4')
        box[4]=mark;
    else if (choice==5 && box[5]=='5')
        box[5]=mark;
    else if (choice==6 && box[6]=='6')
        box[6]=mark;
    else if (choice==7 && box[7]=='7')
        box[7]=mark;
    else if (choice==8 && box[8]=='8')
        box[8]=mark;
    else if (choice==9 && box[9]=='9')
        box[9]=mark;
    else
    {
        system("clear");
        printf("ERROR : WRONG INPUT");
        
        exit(0);
        
    }
}   

int checkwin()
{
    //check horizontal combos
    if(box[1] == box[2] && box[2] == box[3])
        return 1;
    else if(box[4] == box[5] && box[5] == box[6])
        return 1;
    else if(box[7] == box[8] && box[8] == box[9])
        return 1;
        
    //check for vertical combos
    else if(box[1] == box[4] && box[4] == box[7])
        return 1;
    else if(box[2] == box[5] && box[5] == box[8])
        return 1;
    else if(box[3] == box[6] && box[6] == box[9])
        return 1;

    //check for diagonal combos
    else if(box[1] == box[5] && box[5] == box[9])
        return 1;
    else if(box[3] == box[5] && box[5] == box[7])
        return 1;

    else
        return -1;
}