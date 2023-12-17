
// https://www.codingninjas.com/studio/problems/binary-search_972?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_11&leftPanelTabValue=SUBMISSION



int binarySearch(vector<int> &nums , int start , int end , int key){
    if (start > end)
    {
        return -1;
    }

    int mid = start + (end - start)/2;
    if (nums[mid] == key)
    {
        return mid;
    }
    

    if (nums[mid] < key)
    {
         binarySearch(nums , mid+1 , end , key);
    }else{
         binarySearch(nums , start , mid-1 , key);
    }
    
    
}


int search(vector<int> &nums, int target) {
    int ans = binarySearch(nums ,0 , nums.size()-1 , target );
    return ans;
}
