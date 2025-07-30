#include<vector>
#include<iostream>
using namespace std;

void insertionSort(int n, int arr[]){
    
    for(int i = 1; i<n; i++) {
        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j--) {
            
            if(arr[j] > temp) {
                //shift
                arr[j+1] = arr[j];
            }
            else { // ruk jao
                break;
            }
            
        }
        //copy karlo temp ki value
        arr[j+1] = temp;  
    } 
}

int main(){
     int arr[10];
    cout<<"Enter elements of array: ";

    for (int i = 0; i < 10; i++)
    {
        cin>> arr[i];
    }
    
    insertionSort(10,arr);

    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}