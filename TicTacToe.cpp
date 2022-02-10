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
    for(int i = 0; i < board.size(); i++) {
        for(int j = 0; j < board[i].size(); j++) {
            std::cout << board[i][j] << " ";
        }
        std::cout << std::endl;
    }
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