#include <iostream>
#include <ctime>

int main() {
    int doorPick;
    int doorSwitch;
    int hostOpen;
    int doorPick2;

    int winCount=0;
    int loseCount=0;

    std::string chooseSwitch;

    srand(time(NULL));

    for(int i=0; i<100; i++){
        int numRand = (rand()%3)+1;
        int doorPick = (rand()%3)+1;

        do{
            hostOpen = (rand()%3)+1;
        }while(hostOpen == numRand || hostOpen == doorPick);

        do{
            doorPick2 = (rand()%3)+1;
        }while(doorPick2 == hostOpen || doorPick2 == doorPick);

        chooseSwitch = "n";

        if(chooseSwitch == "y"){
            do{
                doorSwitch = (rand()%3)+1;
            }while(doorSwitch == hostOpen || doorSwitch == doorPick);

            doorPick = doorSwitch;
        }
        
        if(doorPick == numRand){
            winCount++;
        } else {
            loseCount++;
        }

        doorPick=0;
        doorSwitch=0;
        hostOpen=0;
        doorPick2=0;
    }

    std::cout << "\n WIN = " << winCount << '\n';
    std::cout << "LOSE = " << loseCount << '\n';

    return 0;
}