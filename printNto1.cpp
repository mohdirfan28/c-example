// #include<iostream>
// using namespace std;

// void print(int n){
//     cout<<n<<endl;
//     if(n==0) return;
//     print(n-1);
// }
//  int main(){
//     print(3);

//  }

#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return;
    cout<<n<<endl;
    print(n-1);
}
int main(){
    int n;
    cout<<"enter n :";
    cin>>n;
    print(n);
}