#include <iostream>
using namespace std;

char board[3][3] = {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'}
};

void format()
{
    cout << "\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " " << board[i][j] << " ";
            if (j < 2) cout << "|";
        }
        cout << "\n";
        if (i < 2) cout << "---|---|---\n";
    }
    cout << "\n";
}

bool win(char p)
{
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == p && board[i][1] == p && board[i][2] == p) return true;
        if (board[0][i] == p && board[1][i] == p && board[2][i] == p) return true;
    }

    if (board[0][0] == p && board[1][1] == p && board[2][2] == p) return true;
    if (board[0][2] == p && board[1][1] == p && board[2][0] == p) return true;

    return false;
}

inline char swapplayer(char p)
{
    if (p == 'X')
        return 'O';
    else
        return 'X';
}

int main()
{
    char player = 'X';
    int pos;
    int count = 0;
    bool won = false;

    do
    {
        format();
        cout << "Player " << player << ", enter a position (1-9): ";
        cin >> pos;

        int r = -1, c = -1;

        switch (pos)
        {
            case 1: r = 0; c = 0; break;
            case 2: r = 0; c = 1; break;
            case 3: r = 0; c = 2; break;
            case 4: r = 1; c = 0; break;
            case 5: r = 1; c = 1; break;
            case 6: r = 1; c = 2; break;
            case 7: r = 2; c = 0; break;
            case 8: r = 2; c = 1; break;
            case 9: r = 2; c = 2; break;
            default:
                cout << "Invalid choice! Try again.\n";
                continue;
        }

        if (board[r][c] != 'X' && board[r][c] != 'O')
        {
            board[r][c] = player;
            count++;

            if (win(player))
            {
                won = true;
                format();
                cout << "Player " << player << " wins!\n";
                break;
            }

            player = swapplayer(player);
        }
        else
        {
            cout << "Position taken! Select another.\n";
        }

    } while (count < 9);

    if (!won)
    {
        format();
        cout << "It's a tie!\n";
    }

    return 0;
}