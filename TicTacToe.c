#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void createTable(char [3][3]);
int togglePlayer(int );

int main(){
    char table[3][3] = {'-', '-', '-', '-', '-', '-', '-', '-', '-'};
    char player1[30], player2[30];
    int playerNumber = 2, input, pos;

    printf("--------Welcome to TicTacToe!!--------\n");

    printf("Player 1 tell me your name please: ");
    scanf("%s", player1);
    fflush(stdin);
    printf("\nPlayer 2 tell me your name please: ");
    scanf("%s", player2);
    fflush(stdin);
    printf("\n");
 
    do{
        playerNumber = togglePlayer(playerNumber);
        createTable(table);
        printf("\n");
        if(playerNumber == 1){
            printf("Hello %s give me your move: ", player1);
            scanf("%d", &input);
            fflush(stdin);
            pos = 1;

            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    if(pos == input)
                        table[i][j] = 'x';
                    pos++;        
                }
            }
        }
        if(playerNumber == 2){
            printf("Hello %s give me your move: ", player2);
            scanf("%d", &input);
            fflush(stdin);
            pos = 1;

            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    if(pos == input)
                        table[i][j] = 'o';
                    pos++;        
                }
            }
        }
    
    }while(true);

    
    
    
    return  0;
}

void createTable(char table[3][3]){
  for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++)
            printf(" %c ", table[i][j]);
        printf("\n");
    }
}

int togglePlayer(int playerNumber){
    if(playerNumber == 2)
        return 1;
    return 2;
}