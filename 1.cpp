#include <iostream>

using namespace std;

void output(int otvet){
    cout<<otvet;
}

void solution(int number_one, int number_two){

    if(number_one > number_two){
        output(number_one);
    } else{
        output(number_two);
    }
}

void input(){
    int number_one,number_two;
    cin>>number_one>>number_two;

    solution(number_one, number_two);
}

int main(){
    input();
    return 0;
}
