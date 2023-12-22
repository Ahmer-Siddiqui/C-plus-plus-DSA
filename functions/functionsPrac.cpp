#include<iostream>
using namespace std;

int avergeNumber(int num1,int num2){
    return (num1 + num2)/ 2;
}

int main(){
    cout<<"Enter Amount 1: ";
    int amount1;
    cin>>amount1;

    cout<<"Enter Amount 2: ";
    int amount2;
    cin>>amount2;
    cout<<"Average Amount : "<< avergeNumber(amount1, amount2);
    return 0;
}