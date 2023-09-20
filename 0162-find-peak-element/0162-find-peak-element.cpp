class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int n=arr.size();
        if(n==1){
            return 0;
        }
        //check for first index; before 0 index it is assume it is greater so only after index 0 we have to check;
        if(arr[0]>arr[1]){
            return 0;
        }
        //check before n-1 because its asuumed that after n-1 it is surely be greater - infinity
        if(arr[n-1]>arr[n-2]){
            return n-1;
        }
        int low=1,high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            //compare both side of mid as usual;
            if((arr[mid] >arr[mid-1]) && (arr[mid]>arr[mid+1])){
                return mid;
            }
            //check we are in which curve increasing or decreasing if we are in increasing cure then or peak should be rightside else on left side so we trim our array; 
            else if(arr[mid] >arr[mid-1])//increasing curve conditon
             {
              low=mid+1;
            
            }
            //()decreasing curve condition) and may more than one peak is there so ifit  is not in right it should be in left surely
            else{
                high=mid-1;
            }
        }
        return -1;
    }
};