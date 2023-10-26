// #include<iostream>
// using namespace std;
// int main(){
//     int x=12;
//     int *ptr=&x;
//     cout<<x<<endl;
//     x=7;
//     cout<<x<<endl;
//     *ptr =23;
//     cout<<x<<endl;

// }
#include <iostream>
using namespace std;
int maxOfTwo(int a, int b){
 if(a>b) return a;
 else return b;
}
 int main(){
    cout<<maxOfTwo(3,6);
 }