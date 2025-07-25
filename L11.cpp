#include<vector>
#include<iostream>
using namespace std;


  /*
                                            //FINDING PEAK INDEX IN MOUNTAIN ARRAY

    int find_pivot(vector<int> v) {
	int s = 0, e = v.size() - 1;
	int mid=(s + e) / 2;
	while (s < e)
	{
		if(v[mid] < v[mid+1])
     			s=mid+1;
    		else
      			e = mid;
    
		mid = (s + e) / 2;
	}
	return s;
    }
    int peakIndexInMountainArray(vector<int>& arr) {
        return find_pivot(arr);
    }*/
    


/*
                                        //FINDING FIRST AND LAST OCCURENCE OF AN 
                                        ELEMENT IN A SORTED ARRAY USING BINARY SEARCH.
    #include<vector>
using namespace std;
int firstOcc(vector<int>& arr, int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc(vector<int>& arr, int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int> p;
    p.first = firstOcc(arr, n, k);
    p.second = lastOcc(arr, n, k);
    
    return p;
}*/


    int main(){

                    //FINDING PIVOT INDEX(SUM OF ALL THE ELEMENTS TO THE RIGHT IS EQUAL TO 
                   // THE SUM OF ALL THE ELEMENTS TO THE LEFT OF THAT INDEX)
                  // IN AN ARRAY. 

        int pi=0;
        int arr[6] = {1,5,4,1,2,3};

        while(pi<6){
            int sum1=0,sum2=0;
            for(int i=0;i<pi;i++){
                sum1 += arr[i];
            }
            for(int i = pi+1 ; i<6; i++){
                sum2 += arr[i];
            }
            if(sum1==sum2){
                cout<<"The pivot index is "<<pi<<endl;
                return pi;
            }
            pi++;

        }
        return -1;
    }