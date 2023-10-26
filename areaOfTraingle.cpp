#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<" enter the 1st side :";
    cin >> a;
    cout<<" enter the Second side :";
    cin >> b;
    cout<<" enter the Third side :";
    cin >> c;
    if((a+b)>c && (b+c)>a && (c+a)>b){
        cout<<"valid traingle";

    }
    else{
        cout << "Invalid traingle";
    }
}