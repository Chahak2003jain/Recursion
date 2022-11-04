#include<iostream>
using namespace std;

int binarySearch(int arr[],int s,int e,int key){

    if(s>e)
    return 0;

    int mid=s+(e-s)/2;
    if(arr[mid]==key)
    return mid;
    
    if(arr[mid]<key)
    return binarySearch(arr,mid+1,e,key);
    else 
    return binarySearch(arr,s,mid-1,key);
}
int main(){
    int n,key;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the search element"<<endl;
    cin>>key;
    int b=binarySearch(arr,0,n-1,key);
   
    if(b==0)
    cout<<"Element not found";
    else
    cout<<"Element found at index "<<b<<endl;
    return 0;
}