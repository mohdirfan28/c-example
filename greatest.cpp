#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout << "enter the value of: a ";
    cin >> a;
    cout << "enter the value of: b";
    cin >> b;
    cout << "enter the value of: c";
    cin >> c;
    if(a>b && a>c){
        cout <<a<< "the greatest value is a:";

    }
    else if(b>c && b>a){
        cout <<b<< "the greatest value is b:";
    }
    else {
        cout <<c<< "the greatest value is c";
    }
}