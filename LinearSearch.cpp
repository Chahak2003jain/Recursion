#include<iostream>
using namespace std;

bool isFound(int arr[],int key,int n)
{
    if(n==0&&key!=arr[n])
    return false;

    if(key==arr[0])
    return true;

    return isFound(arr+1,key,n-1);
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
    bool found=isFound(arr,key,n-1);
    if(found)
    cout<<"Element found";
    else
    cout<<"Element Not found";
    return 0;

}