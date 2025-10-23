#include<iostream>
using namespace std;

void swap(int* a, int* b){
    int* temp = a;
    a = b;
    b = temp;
}

void sort(int* arr,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j+1],arr[j]);
            }
        }
    }
}

int linearSearch(int* arr,int n,int target){
    for (int i = 0; i < n; i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}


int main(){
    int arr[] = {34,56,76,44,21,88};
    int n = sizeof(arr)/sizeof(arr[0]);

    int target = 76;

    sort(arr,n);
    int ans = linearSearch(arr,n,target);

    ans<0 ?
    cout << "Element not found " << endl:
    cout << "Element found at index: "<< ans << endl;


    return 0;
}