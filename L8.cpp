#include<iostream>
using namespace std;

void printArray(int arr[], int n) {
    
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapalt(int arr[],int size){
    for (int i = 0; i < size; i+=2)
    {
        if (i+1 < size)
        {
        swap(arr[i],arr[i+1]);
        }
    }
    
}

int  main(){

int odd[5] = {2,3,4,5,6};
int even[6]= {1,2,3,4,5,6};

swapalt(odd,5);
swapalt(even,6);

printArray(odd,5);
printArray(even,6);



}