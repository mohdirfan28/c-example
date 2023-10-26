#include<iostream>
using namespace std;
int main(){
    int arr[]={1,4,2,5,3,6,23,45,12,19};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
    }

}