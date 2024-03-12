#include<iostream>
using namespace std;

void print(int arr[], int n){
  for (int i = 0; i<n; i++){
    cout<<arr[i]<<" ";
  }cout<<endl;
}

void swapAlternate(int arr[], int size){
  for(int i=0;i<size;i+=2){
    if(i+1<size){
      swap(arr[i], arr[i+1]);
    }
  }
}

int main(){
  int even[8]=  {28,9,13,2,19,10,46,5}; // Array of eight integers with.
  int odd[5]=   {7,11,15,24,8}; 

  swapAlternate(even, 8);
  print(even, 8);

  cout<<endl;

  swapAlternate(odd, 5);
  print(odd, 5);


}