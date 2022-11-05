#include<iostream>
using namespace std;

bool isSort(int arr[],int n){

  //base case
  if(n==0||n==1)
  return true;

  if(arr[0]>arr[1])
  return false;
  else
  return isSort(arr+1,n-1);
}
int main(){
    int n,i;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in array"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
 bool sort=isSort(arr,n);
 if(sort)
  cout<<"Array is Sorted";
  else
  cout<<"Array is not Sorted";
}