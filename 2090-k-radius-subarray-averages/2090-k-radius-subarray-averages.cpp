class Solution{
public:
    vector<int>getAverages(vector<int>&nums,int k){
        int n=nums.size();
        int w=2*k+1;
        vector<int>ans(n,-1);
        if(n<w)return ans;
        long long sum=0;
        for(int i=0;i<w;i++){
            sum+=nums[i];
        }
        ans[k]=sum/w;
        for(int i=w;i<n;i++){
            sum=sum-nums[i-w]+nums[i];
            ans[i-k]=sum/w;
        }
        return ans;
    }
};