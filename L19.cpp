// Rotated string.

/*
#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool rotateString(string s, string goal){
        if(s.length()!=goal.length()) return false;
        for(int i=0;i<s.size();i++){
            s.push_back(s[0]);
            s.erase(s.begin());

            bool x=true;
            for(int j=0;j<s.length();j++){
                if(s[j]!=goal[j]){
                    x=false;
                    break;
                }

            }
            if(x==true) return true;
        }
        return false;

*/




/*The idea of Kadane's algorithm is to traverse over the array 
from left to right and for each element, find the maximum sum 
among all subarrays ending at that element. 
The result will be the maximum of all these values.*/

/*
int maxSubarraySum(vector<int> &arr) {
    // Stores the result (maximum sum found so far)
    int res = arr[0];           
    int maxending = arr[0];     

    for (int i = 1; i < arr.size(); i++) {
        // Either extend the previous subarray or start 
        // new from current element
        maxEnding = max(arr[i], maxEnding + arr[i]);
        // Update result if the new subarray sum is larger
        res = max(res,maxEnding);
    }
    return res;
}*/