#include<iostream>

int main() {
    //in 2D array, you are not required to set a row size.
    //syntax : dataType name [rows][columns] = {{item1, item2,..}, {item1, item2...}};.

    std::string games[][3] = {{"Skyrim", "Fallout", "Starfield"},
                             {"GTA 4", "GTA 5", "GTA 6"},
                             {"Dark Souls", "Elden Ring", "Sekiro"}};

    int rows = sizeof(games)/sizeof(games[0]);
    int columns = sizeof(games[0])/sizeof(games[0][0]);
    
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            std::cout<<games[i][j]<<" ";
        }
        std::cout<<'\n';
    }      
    
    return 0;
}