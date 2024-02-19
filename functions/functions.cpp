#include<iostream>
using namespace std;

void pyramid (int input, int i, int j){

    cout<<"Number : ";
    cin>>input;

    for(int i=0; i<input; i++){
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
}

void introduction (string name, int age, string city){
cout<<"Name : ";
cin>>name;
cout<<"Age : ";
cin>>age;
cout<<"City : ";
cin>>city;

cout<<"Your name is "<<name<<". You are "<<age<<" years old. You live in "<<city;
}

int main(){
    int input, i, j, age;
    string name, city;

    pyramid(input, i, j);
    introduction(name, age, city);
    return 0;
}