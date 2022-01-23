#include<iostream>
using namespace std;

void reversed(int arr[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        swap(arr[s++],arr[e--]);
    }
}
int main(){
    int arr[]={0,1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    reversed(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
