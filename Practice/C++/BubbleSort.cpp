#include <iostream>
using namespace std;

int main(){
    int arr[100];
    int n, temp;
    cout<<"Enter the number of elements in the array";
    cin>>n;
    for(int i = 0; i<n; i++)
    cin>>arr[i];
    for(int i = 0; i<n-1; i++){
        for (int j=0; j<n-1; j++){
        if(arr[j]<arr[j+1]){
            temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    }
    cout<<"sorted array : ";
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
}