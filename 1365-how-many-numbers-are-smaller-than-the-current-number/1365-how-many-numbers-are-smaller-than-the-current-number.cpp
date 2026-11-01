class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>&nums){
        int n=nums.size();
        int a[n];
       for(int i=0;i<nums.size();i++){
        int count=0;
        for(int j=0;j<nums.size();j++){
            if(nums[i]>nums[j])count++;
        }
        a[i]=count;
       }
      return vector<int>(a,a+n);
    }
};