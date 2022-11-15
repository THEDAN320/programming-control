#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void output(int otvet){
    cout<<otvet;
}

void solution(ifstream &file){

    string s;
    int x = 0;
    while(getline(file,s,'\n')){
        x++;
    }

    output(x);
}

void input(){

    ifstream file("text.txt");
    solution(file);
    file.close();
}

int main(){
    input();
    return 0;
}
