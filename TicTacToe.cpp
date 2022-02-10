#include <vector>

std::vector<std::vector<char>> CreateBoard() {
    std::vector<std::vector<char>> output = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}};
    return (output);
}

void DisplayBoard(std::vector<std::vector<char>> board){
    for (int i = 0; i < board.size(); i++){
        for (int j = 0; j < board[i].size(); j++){
            std::cout << board[i][j] << std::endl;
        }
    }
}

std::vector<int> GetPlayerChoice(){
    int index1;
    int index2;
    std::cin >> index1;
    std::cin >> index2;
}