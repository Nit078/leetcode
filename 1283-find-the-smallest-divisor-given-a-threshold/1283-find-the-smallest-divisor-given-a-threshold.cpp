


class Solution {    
    
public:
    #include<bits/stdc++.h>
int sumByD(vector <int>& arr,int div){
	int n=arr.size();
	int sum=0;
	for(int i=0;i<n;i++){
		sum =sum+ ceil(double(arr[i])/double(div));
	}
	return sum;
}
 int smallestDivisor(vector<int>& arr, int limit)
{
	 int low=1;
	 int high=*max_element(arr.begin(),arr.end());
         while (low <= high) {
                int mid = (low + high) / 2;

			if((sumByD(arr,mid)<=limit)){
				high=mid-1;
			}
			else{
				low=mid+1;
			}
         }
		 return low;
}
};