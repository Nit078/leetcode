class Solution {
public:
    int findMin(vector<int>& arr) {
       int n=arr.size() ;
    int low = 0, high = n- 1;
    int ans = INT_MAX;
    if(n==1 )return arr[0];
    while (low <= high) {
        int mid = (low + high) / 2;
        //search space is already sorted
        //then arr[low] will always be
        //the minimum in that search space:

        if(arr[low]==arr[mid] && arr[mid]==arr[high]){
            ans=min(ans,arr[low]);
                low=low+1;
                high=high-1;
                continue;
            }
      
          

        //if left part is sorted:
        if (arr[low] <= arr[mid]) {
            // keep the minimum:
            ans = min(ans, arr[low]);

            // Eliminate left half:
            low = mid + 1;
        }
        else { //if right part is sorted:

            // keep the minimum:
            ans = min(ans, arr[mid]);

            // Eliminate right half:
            high = mid - 1;
        }
    }
    return ans;
}
};
//   class Solution {
// public:
   
//     int findMin(vector<int>& nums) {        
//         int len = nums.size();
//         for(int i=0; i<len-1; i++){
//             if(nums[i]>nums[i+1]) return nums[i+1];            
//         }
//         return nums[0];
//     }
// };