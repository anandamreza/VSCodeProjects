#include<iostream>

void space(){
    std::cout<<'\n';
}

int main() {
    std::string name, BeforeClear;
    std::cout<<"Enter your name : ";
    std::getline(std::cin, name);

    //the length method give you length of a string.
    if(name.length()>12) { 
        std::cout<<"Your name can't be over 12 characters!";
    } 
    else {
        std::cout<<"Welcome "<<name;
    }

    space();

    //the empty method returns boolean value whether or not the string is empty.
    if(name.empty()) {
        std::cout<<"You didn't enter your name!";
    }
    else {
        std::cout<<"Hello "<<name;
    }

    space();
    BeforeClear=name;

    //the clear method clears a string value.
    name.clear();
    std::cout<<"Hello "<<name;

    space();
    name=BeforeClear;

    //the append method appends a string to a string value.
    name.append("@gmail.com");
    std::cout<<"Your username is now "<<name;

    space();
    name=BeforeClear;

    //the at method returns a character of a string.
    std::cout<<name.at(0);

    space();

    //the insert method inserts a string at a given position.
    name.insert(0, "@");
    std::cout<<name;

    space();
    name=BeforeClear;
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
    //the find method finds a character in a string.
    std::cout<<name.find(' '); //it will returns the index of ' '.

    space();
    name=BeforeClear;

    //the erase method erases portion of a string.
    name.erase(0, 3);
    std::cout<<name;
    
    return 0;
}