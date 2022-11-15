#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void output(double otvet){
    cout<<otvet;
}

void solution(double summa, double first_pay, double crok){

    double otvet = (summa - first_pay) / (11 + (crok - 1) * 12);

    output(otvet);
}

void input(){

    double summa,first_pay, crok;
    cin>>summa>>first_pay>>crok;
    if(first_pay < summa * 0.2){
        return;
    }
    solution(summa,first_pay, crok);
}

int main(){
    input();
    return 0;
}
