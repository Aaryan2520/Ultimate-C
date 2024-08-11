#include <stdio.h>

void print_board(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("---|---|---\n");
    }
}

int check_winner(char board[3][3], char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return 1;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return 1;
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return 1;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return 1;
    return 0;
}

int main() {
    char board[3][3] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };
    char players[2] = {'X', 'O'};
    int turn = 0;
    int row, col;

    while (1) {
        print_board(board);
        printf("Player %c's turn\n", players[turn % 2]);
        printf("Enter row (0, 1, 2): ");
        scanf("%d", &row);
        printf("Enter column (0, 1, 2): ");
        scanf("%d", &col);

        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
            printf("Invalid move. Try again.\n");
            continue;
        }

        board[row][col] = players[turn % 2];

        if (check_winner(board, players[turn % 2])) {
            print_board(board);
            printf("Player %c wins!\n", players[turn % 2]);
            break;
        }

        int is_tie = 1;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] == ' ') {
                    is_tie = 0;
                    break;
                }
            }
            if (!is_tie) break;
        }

        if (is_tie) {
            print_board(board);
            printf("It's a tie!\n");
            break;
        }

        turn++;
    }

    return 0;
}
