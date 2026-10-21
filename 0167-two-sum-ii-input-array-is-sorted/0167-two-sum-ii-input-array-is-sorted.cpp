class Solution {
public:
    vector<int>twoSum(vector<int>&a,int target){
        int n=a.size();
        int i=0,j=n-1;
        while(i<j){
            int min=a[i];
            int max=a[j];
            if(max+min==target){
                return {i+1,j+1};
            }
            else if(max+min>target){
                j--;
            }
            else{
                i++;
            }
        }
        return{};
    }
};