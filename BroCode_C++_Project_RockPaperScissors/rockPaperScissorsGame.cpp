#include<iostream>
#include<ctime>

//note: i have made modifications in this code.

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main() {
    char player;
    char computer;

    std::string repeat;

    do{
        player=getUserChoice();
        std::cout<<"Your choice       : ";
        showChoice(player);

        computer=getComputerChoice();
        std::cout<<"Computer's Choice : ";
        showChoice(computer);
        
        chooseWinner(player, computer);

        do{
            std::cout<<"Play Again? (y/n) : ";
            std::cin>>repeat;
        }while(repeat!="y"&&repeat!="n");

        std::cin.ignore();
    }while(repeat=="y");

    std::cout<<"\nThank you for playing!";
    

    return 0;
}

char getUserChoice(){
    char player;
    std::string playerString;
    std::cout<<"\nRock-Paper-Scissors Game!\n";

    do{
        std::cout<<"*****************************\n";
        std::cout<<"R - Rock\n";
        std::cout<<"P - Paper\n";
        std::cout<<"S - Scissors\n";
        std::cout<<"Go! : ";
        getline(std::cin, playerString);

        if(playerString=="r"||playerString=="R"){
            player='r';
        } 
        else if(playerString=="p"||playerString=="P"){
            player='p';
        } 
        else if(playerString=="s"||playerString=="S"){
            player='s';
        }
        else if(playerString=="toggle_godmode"){
            player='g';
        }
        else {
            std::cout<<"Invalid Choice!\n";
        }
    }while(player!='r' && player!='p' && player!='s' && player!='g');

    return player;
}
char getComputerChoice(){
    srand(time(0));
    int num=rand()%3+1;

    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
    return 0;
}
void showChoice(char choice){
    switch(choice){
        case 'r': std::cout<<"Rock\n";
                break;
        case 'p': std::cout<<"Paper\n";
                break;
        case 's': std::cout<<"Scissors\n";
                break;
        case 'g': std::cout<<"God\n";
                break;
    }
}
void chooseWinner(char player, char computer){
    switch(player){
        case 'r':
            if(computer=='r'){
                std::cout<<"It's a tie!\n";
            } 
            else if(computer=='p'){
                std::cout<<"Computer wins!\n";
            } 
            else{
                std::cout<<"You win!\n";
            }
            break;
        case 'p':
            if(computer=='r'){
                std::cout<<"You win!\n";
            }
            else if(computer=='p'){
                std::cout<<"It's a tie!\n";
            }
            else{
                std::cout<<"Computer wins!\n";
            }
            break;
        case 's' :
            if(computer=='r'){
                std::cout<<"Computer wins!\n";
            }
            else if(computer=='p'){
                std::cout<<"You win!\n";
            }
            else{
                std::cout<<"It's a tie!\n";
            }
            break;
        case 'g' :
            if(computer=='r'){
                std::cout<<"You win!\n";
            }
            else if(computer=='p'){
                std::cout<<"You win!\n";
            }
            else{
                std::cout<<"You win!\n";
            }
            break;    
    }
}