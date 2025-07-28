/*
#include<vector>
#include<iostream>
using namespace std;
void selectionSort(vector<int>& array, int n)
{   
    for(int i = 0; i < n-1; i++ ) {
        int minIndex = i;
        for(int j = i+1; j<n; j++) {
            
            if(array[j]<array[minIndex]) 
                minIndex = j;
            
        }
        swap(array[minIndex], array[i]);
    }
}

int main(){
    vector<int> arr={1,4,3,5,2,6,8,7};
    int n = arr.size();
    selectionSort(arr,n);
    cout<<"the sorted array is: " <<endl;

    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";
    }
    
    

}
    */