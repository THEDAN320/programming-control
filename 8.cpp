#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void output(string otvet){
    cout<<otvet;
}

void solution(string number){
    string s;
    if(number[0] == '8' && number[1] == '9'){
        s += "+79";
        for(int i = 2; i < number.size(); i++){
            s += number[i];
        }
        output(s);
    }
    
}

void input(){

    string number;
    cin>>number;
    if(number.size() == 10){
        solution(number);
    }
}

int main(){
    input();
    return 0;
}
