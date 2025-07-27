/*
Questions Solved:
- Book Allocation Problem
- Painter’s Partition Problem
- Aggressive Cows Problem
- ALL PROBLEMS ARE BASED ON FINDING MINIMUM AND MAXIMUM DISTRIBUTION OF THE UNITS PRESENT
  IN THE ARRAY AMONGST ANY "K" PEOPLE, EACH OF WHICH CAN BE DONE USING BINARY SEARCH. 
*/


/*     
 BOOK ALLOCATION PROBLEM -- (32/80) POINTS -- CHECK FOR FLAWS IN THE CODE
#include <bits/stdc++.h> 

bool ispossible(int n, int m, vector<int> time,int mid){
	int day = 1;
	int sumtime = 0;
	for(int i=0; i<m;i++){

          if (sumtime + time[i] <= mid) {
			  sumtime += time[i];
          }
		  else{
			  day++;
			  if(day>n||time[i]>mid){
				  return false;
			  }
			  sumtime = time[i];

		  }
        }
	return true;
}
long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	if(n>m){
		return -1;
	}
	 int s=0;
	 int ans=-1;
	 int sum=0;
	for(int i=0;i<m;i++){
		sum += time[i];
	}
	 int e=sum;
	 int mid = s + (e-s)/2;

	while(e>=s){
		if(ispossible(n,m,time,mid)){
			ans = mid;
			e = mid - 1;
		}
		else{
			s = mid + 1;
		}
		mid = s+ (e-s)/2;
	}
	return ans;
}
*/


/*
                PAINTER'S PARTITION PROBLEM -- (80/80)
bool ispossible(vector<int> &boards, int k, int n, int mid){
	int painter = 1;
	int sumtime = 0;
	for(int i=0; i<n;i++){

          if (sumtime + boards[i] <= mid) {
			  sumtime += boards[i];
          }
		  else{
			  painter++;
			  if(painter>k||boards[i]>mid){
				  return false;
			  }
			  sumtime = boards[i];

		  }
        }
	return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    if(k>boards.size()){
		return -1;
	}
	 int s=0;
	 int ans=-1;
	 int sum=0;
	for(int i=0;i<boards.size();i++){
		sum += boards[i];
	}
	 int e=sum;
	 int mid = s + (e-s)/2;

	while(e>=s){
		if(ispossible(boards,k,boards.size(),mid)){
			ans = mid;
			e = mid - 1;
		}
		else{
			s = mid + 1;
		}
		mid = s+ (e-s)/2;
	}
	return ans;
}
*/

/*
            AGGRESIVE COWS PROBLEM --(80/80) -- A LITTLE DIFFERENT AS WE NEED TO FIND THE 
                                                MAXIMUM OF THE MINIMUM DISTANCE B/W COWS.
bool ispossible(vector<int> &stalls,int k,int n, int mid){
    int cows = 1;
    int lastpos = stalls[0];

    for(int i = 0; i<n; i++){

        if(stalls[i] - lastpos >= mid){
            cows++;

            if(cows == k){
                return true;
            }
            lastpos = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    if(k>stalls.size()){
		return -1;
	}

     sort(stalls.begin() , stalls.end());

	 int s=0;
	 int ans=-1;
	 int maxi=-1;
	for(int i=0;i<stalls.size();i++){
		maxi = max(maxi,stalls[i]);
	}
	 int e=maxi;
	 int mid = s + (e-s)/2;

	while(e>=s){
		if(ispossible(stalls,k,stalls.size(),mid)){
			ans = mid;
			s = mid + 1;
		}
		else{
			e = mid - 1;
		}
		mid = s+ (e-s)/2;
	}
	return ans;
}
*/