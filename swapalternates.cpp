#include<iostream>
using namespace std;

void swapalternates(int arr[], int n){
   for(int i=0;i<n;i+=2){

      if(i+1<n){
        swap(arr[i], arr[i+1]);
        }
   }
   cout<<endl;
}

void print(int arr[], int n) {
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
 }

int main(){

    int arr[5] = {1,2,3,4,5};

    swapalternates(arr,5);
    print(arr, 5);
  

  return 0;
}

