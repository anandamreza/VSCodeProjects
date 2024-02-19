#include<iostream>

int main() {
    std::string questions[] = {"1. In what year does C++ created? : ",
                               "2. Who invented C++? : ",
                               "3. What is predecessor of C++? : ",
                               "4. Is the Earth flat? : "};
    
    std::string options[][4] = {{"A. 1989", "B. 1973", "C. 1992", "D. 1985"},
                               {"A. Guido van Rossum", "B. James Gosling", "C. Bjarne Stroustrup", "D. Louis Le Prince"},
                               {"A. C", "B. B", "C. B++", "D. C#"},
                               {"A. Yes", "B. No", "C. Sometimes", "D. Fax"}};
    
    char answerKey[] = {'D', 'C', 'A', 'A'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score;

    for(int i=0; i<size; i++){
        std::cout<<"*****************************\n";
        std::cout<<questions[i]<<'\n';
        std::cout<<"*****************************\n";

        for(int j=0; j<sizeof(options[i])/sizeof(options[i][0]); j++){
            std::cout<<options[i][j]<<'\n';
        }

        std::cin>>guess;
        guess = toupper(guess);

        if(guess == answerKey[i]){
            std::cout<<"CORRECT!\n";
            score++;
        } else{
            std::cout<<"FALSE\n";
            std::cout<<"Answer : "<<answerKey[i]<<'\n';
        }
    }
    std::cout<<"*****************************\n";
    std::cout<<"            RESULTS          \n";
    std::cout<<"*****************************\n";
    std::cout<<"CORRECT GUESSES : "<<score<<'\n';
    std::cout<<"# QUESTIONS     : "<<size<<'\n';
    std::cout<<"SCORE : "<<(score/(double)size)*100<<"%\n";

    return 0;
}