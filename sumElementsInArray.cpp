#include<iostream>
using namespace std;


int Sum(int arr[],int n){

    //base case
    if(n==0)
    return arr[n];

    if(n==-1)
    return 0;
    
    return arr[0]+Sum(arr+1,n-1);
    

}


int main()
{
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int s=Sum(arr,n-1);
    cout<<"Sum of array elements: "<<s<<endl;
    return 0;

}