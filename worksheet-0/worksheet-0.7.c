//TicTacToe

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


bool current_user =  false; // false = player 1 | true = player 2
bool game_over = false;

char arr[3][3] = {
    {' ', ' ', ' '},
    {' ', ' ', ' '},
    {' ', ' ', ' '}
};


void print_array_pointer_arithmetic(char *arr, int row, int column){
    printf("|--------|\n");

    
    int row_counter, column_counter;

    for (row_counter = 0; row_counter < row; row_counter++)
    {

        printf("|");
        
        for (column_counter = 0; column_counter < column; column_counter++)
        {
            printf("%c ", *(arr + row_counter *3 + column_counter ));
            printf("|");
        }
        printf("\n");
        printf("|--------|");
        printf("\n");
    }
}

struct grid {
    int row;
    int column;
};

struct grid grid_finder(){
    struct grid grid_user;

    do{
            do {
            printf("enter vertical grid reference(0-2): ");
            scanf("%d", &grid_user.row); 
            while (getchar() != '\n');
        } while (grid_user.row < 0 || grid_user.row > 2);

        do {
            printf("enter horizontal grid reference(0-2): ");
            scanf("%d", &grid_user.column); 
            while (getchar() != '\n');
        } while (grid_user.column < 0 || grid_user.column > 2);
    } while (arr[grid_user.row][grid_user.column] == 'X' || arr[grid_user.row][grid_user.column] == 'O' );



    return grid_user;
}

void table_commiter(){

    char xo_player;

    if(current_user == 0){
        xo_player = 'O';
    } else{
        xo_player = 'X';
    }

    printf("Player %c\n", xo_player);
    struct grid grid_user = grid_finder();  // capture the return value

    arr[grid_user.row][grid_user.column] = (current_user == 1) ? 'X' : 'O';


}

bool check_win_for(char symbol){

    // rows
    for (int r = 0; r < 3; r++){
        if (arr[r][0] == symbol && arr[r][1] == symbol && arr[r][2] == symbol)
            return true;
    }
    // columns
    for (int c = 0; c < 3; c++){
        if (arr[0][c] == symbol && arr[1][c] == symbol && arr[2][c] == symbol)
            return true;
    }
    // diagonals
    if (arr[0][0] == symbol && arr[1][1] == symbol && arr[2][2] == symbol)
        return true;
    if (arr[0][2] == symbol && arr[1][1] == symbol && arr[2][0] == symbol)
        return true;

    return false;
}

void match_checker(){
    if (check_win_for('X')) {
        printf("Player X wins!!!\n");
        game_over = true;
    } else if (check_win_for('O')) {
        printf("Player O wins!!!\n");
        game_over = true;
    }
}




int main(){

    printf(" _____   _____    ____      _____      _       ____      _____    ___    _____  \n");
    printf("|_   _| |_   _|  / ___|    |_   _|    / \\     / ___|    |_   _|  / _ \\  | ____| \n");
    printf("  | |     | |   | |          | |     / _ \\   | |          | |   | | | | |  _|   \n");
    printf("  | |     | |   | |___       | |    / ___ \\  | |___       | |   | |_| | | |___  \n");
    printf("  |_|   |_____|  \\____|      |_|   /_/   \\_\\  \\____|      |_|    \\___/  |_____| \n");




    int row = 3;
    int column = 3;
    print_array_pointer_arithmetic((char*)arr, row, column);
    //printf("\n\n\n\n\n\n\n");


    while(game_over != true){
        table_commiter();

        print_array_pointer_arithmetic((char*)arr, row, column);

        current_user = !current_user;

        match_checker();
        
    }



        return 0;
}

