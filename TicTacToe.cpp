#include <vector>
#include <iostream>

std::vector<std::vector<char>> CreateBoard() {
    std::vector<std::vector<char>> output = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}};
    return (output);
}


void DisplayBoard(std::vector<std::vector<char>> board) {
    std::cout<<"-------------"<<std::endl;
    for(int i = 0; i < board.size(); i++) {
        std::cout << "| ";
        for(int j = 0; j < board[i].size(); j++) {
            std::cout << board[i][j] << " | ";
        }
        std::cout << std::endl;
        std::cout<<"-------------"<<std::endl;
        
    }
}


void PlaceMarker(std::vector<int> location, std::vector<std::vector<char>> & board, bool isX) {
    char XorO = isX ? 'X' : 'O';
    board[location[0]][location[1]] = XorO;
}

std::vector<int> GetPlayerChoice(){
    int index1;
    int index2;
    std::cout << "Enter first value: " << std::endl;
    std::cin >> index1;
    std::cout << "Enter second value: " << std::endl;
    std::cin >> index2;
    std::vector<int> choice;
    choice.push_back(index1);
    choice.push_back(index2);
    return choice;
}

int main() {
    std::vector<std::vector<char>> board = CreateBoard();
    for (int i = 0; i < 4; i++){
        DisplayBoard(board);
        std::vector<int> location = GetPlayerChoice();
        PlaceMarker(location, board, true);
        DisplayBoard(board);
        std::vector<int> location2 = GetPlayerChoice();
        PlaceMarker(location2, board, false);
        DisplayBoard(board);
    }
    std::vector<int> location = GetPlayerChoice();
    PlaceMarker(location, board, true);
    DisplayBoard(board);
    std::cout << "Good game!" << std::endl;
    return 0;
}