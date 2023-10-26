#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter n:";
    cin >> n;
    if(n%5==0 && n%3==0){
        cout << "Divisle by 3 and 5";
    }
    else 
    {
        cout << " NOT Divisle by 3 and 5";
    }
}