#include <iostream>

using namespace std;

void output(string otvet){
    cout<<otvet;
}

void solution(int k, int b){
    string m[100][100];

    for(int y = 0; y < 100;y++){
        for(int x = 0; x < 100;x++){
            m[y][x] = " ";
        }
    }

    for(int x = 0;x < 100;x++){
        m[80][x] = "-";
    }

    for(int y = 0;y < 100;y++){
        m[y][20] = "|";
    }

    for(int x = 0; x < 20; x++){
        int y = x*k + b;
        m[100 - y][x + 10] = "/";
    }

    for(int y = 0; y < 100;y++){
        for(int x = 0; x < 100;x++){
            cout<<m[y][x];
        }
        cout<<endl;
    }
}

void input(){
    int k, b;
    cin>>k>>b;

    solution(k, b);
}

int main(){
    input();
    return 0;
}
