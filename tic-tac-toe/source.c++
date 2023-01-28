// load the necessay modules and libraries

#include <iostream>
#include <algorithm>
#include <vector>
#include <array>

// instantiate necessary modules
using std::cout;
using std::cin;
using std::endl;

// define variables
#define win 1000
#define draw 0
#define loss -1000

#define ai_marker 'O'
#define player_marker 'X'
#define empty_space '-'

#define start_depth 0

// define a function to print 'game state'
void print_game_state(int state){
    if (win == state)
    {
        /* code */
        cout << "win" << endl;
    }
    else if (draw == state)
    {
        /* code */
        cout << "draw" << endl;
    }
    else if (loss == state)
    {
        /* code */
        cout << "loss" << endl;
    }   
}

// define all possible winning states - create them using a vector
std::vector<std::vector<std::pair<int, int>>> winning_states
{
    // make_pair() constructs a pair of objects with two elements.

    // for every row
    {std::make_pair(0,0), std::make_pair(0,1), std::make_pair(0,2)},
    {std::make_pair(1,0), std::make_pair(1,1), std::make_pair(1,2)},
    {std::make_pair(2,0), std::make_pair(2,1), std::make_pair(2,2)}, 

    // // for every column - defined as (#r, #c)
    {std::make_pair(0,0), std::make_pair(1,0), std::make_pair(2,0)},
    {std::make_pair(0,1), std::make_pair(1,1), std::make_pair(2,1)},
    {std::make_pair(0,1), std::make_pair(1,2), std::make_pair(2,2)},

    // // for every diagonal
    {std::make_pair(0,0), std::make_pair(1,1), std::make_pair(2,2)},
    {std::make_pair(2,0), std::make_pair(1,1), std::make_pair(0,2)},
};

// print the current baord state
void print_board(char board[3][3])
{
    cout << endl;
    cout << board[0][0] << "|" << board[0][1] << "|" << board[0][2] << endl;
    cout << "---------" << endl;
    cout << board[1][0] << "|" << board[1][1] << "|" << board[1][2] << endl;
    cout << "---------" << endl;
    cout << board[2][0] << "|" << board[2][1] << "|" << board[2][2] << endl << endl;
}

