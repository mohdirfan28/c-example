#include<iostream>
using namespace std;
//power(a,b)=a*pow(a,b-1);
//apowb=a*apowb-1;
int power(int a,int b){
    if(b==0)return 1;
    return a*power(a,b-1);
}

int main(){
    int a;
    cout<<"Enter base :";
    cin>>a;
    int b;
    cout<<"Enter power :";
    cin>>b;
    cout<<power(a,b);
}