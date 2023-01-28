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
    cout << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
    cout << "---------" << endl;
    cout << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
    cout << "---------" << endl;
    cout << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl << endl;
}

// Get all legal available moves - legal moves == spaces not occupied
std::vector<std::pair<int, int>> get_legal_moves(char board[3][3])
{
    std::vector<std::pair<int, int>> legal_moves;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] != ai_marker && board[i][j] != player_marker)
            {
                legal_moves.push_back(std::make_pair(i,j));
            }
            
        }
        
    }
    return legal_moves;
}


// check if position is occupied
bool position_occupied(char board[3][3], std::pair<int, int> pos)
{
    std::vector<std::pair<int, int>> legal_moves = get_legal_moves(board);

    for (int i = 0; i < legal_moves.size(); i++)
    {
        if (pos.first == legal_moves[i].first && pos.second == legal_moves[i].second)
        {
            return false;
        }
    }
    return true;
}

// get all positions occupied by the given marker 
std::vector<std::pair<int, int>> get_occupied_positions(char board[3][3], char marker)
{
    std::vector<std::pair<int, int>> occupied_positions;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (marker == board[i][j])
            {
                occupied_positions.push_back(std::make_pair(1,j));
                //push_back; insert/remove elements/data at the end of a vector 
            }
        }
    }
    return occupied_positions;
}

// check if the board is full
bool board_is_full(char board[3][3])
{
    std::vector<std::pair<int, int>> legal_moves = get_legal_moves(board);
    if (0 == legal_moves.size())
    {
        return true;
    }
    else{
        return false;
    }
}

// check if the game has been won
bool is_game_won(std::vector<std::pair<int, int>> occupied_positions)
{
    bool game_won;

    for (int i = 0; i < winning_states.size(); i++)
    {
        game_won = true;
        std::vector<std::pair<int, int>> current_win_state = winning_states[i];
        for (int j = 0; j < 3; j++)
        {
            if (!(std::find(std::begin(occupied_positions), std::end(occupied_positions), current_win_state[j]) != std::end(occupied_positions)))
            {
                game_won = false;
                break;
            }
            
        }
        if (game_won)
        {
            break;
        }   
    }
    return game_won;
}

// get the marker of the opponent
char get_opponent_marker(char marker)
{
    char opponent_marker;
    if (marker == player_marker)
    {
        opponent_marker = ai_marker;
    }
    else{
        opponent_marker = player_marker;
    }
    return opponent_marker;
}

// check if someone has won or lost
int get_board_state(char board[3][3], char marker)
{
    char opponent_marker = get_opponent_marker(marker);
    std::vector<std::pair<int, int>> occupied_positions = get_occupied_positions(board, marker);

    bool is_won = is_game_won(occupied_positions);
    if (is_won)
    {
        return win;
    }

    occupied_positions = get_occupied_positions(board, opponent_marker);

    bool is_lost = is_game_won(occupied_positions);
    if (is_lost)
    {
        return loss;
    }

    bool is_full = board_is_full(board);
    if (is_full)
    {
        return draw;
    }
    return draw;    
}

// Apply the minimax game optimization algorithm

int main()
{
    char board[3][3] = {empty_space};

    print_board(board);
}