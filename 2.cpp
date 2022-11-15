#include <iostream>

using namespace std;

void output(string otvet){
    cout<<otvet;
}

void solution(int x, int y){

    string otvet;

    if(x>0 && y>0){
        otvet = "I";
    } if(x<0 && y>0){
        otvet = "II";
    } if(x<0 && y<0){
       otvet = "III"; 
    } if(x>0 && y<0){
        otvet = "IV";
    }

    output(otvet);
}

void input(){
    int x, y;
    cin>>x>>y;

    solution(x, y);
}

int main(){
    input();
    return 0;
}
