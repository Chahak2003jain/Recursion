//Program to write each digit of a number in words 
#include<iostream>
using namespace std;

void digit(int n , string arr[]){

    //base case
    if(n==0)
    return;
    
    int l=n%10;
    n=n/10;

    //recursive case
    digit(n,arr);

    //processing
    cout<<arr[l]<<" "<<endl;
}

int main(){
  int n;
  cin>>n;
  string word[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
  digit(n,word);
}