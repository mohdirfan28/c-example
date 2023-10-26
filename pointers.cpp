//int x=2;
//4 bytyes
// #include<iostream>
// using namespace std;
// int main(){
// int x=3; 
// int y=3;
// cout<<&x<<endl;
// cout<<&y<<endl;

// }
#include<iostream>
using namespace std;
int main(){
    int x=3;
    int* p=&x;
    //p=&x;
    cout<<p<<endl;
    cout<<&x<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;



}