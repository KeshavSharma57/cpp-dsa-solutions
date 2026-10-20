class Solution{
public:
    bool judgeSquareSum(int target){
        int n=sqrt(target);
        long long max=n; 
        long long min=0;
        while(min<=max){
            long long M=max*max;
            long long m=min*min;
            if(M+m<target){
                min++;
            }
            else if(M+m>target){
                max--;
            }
            else{
                return true;
            }
        }      
        return false;
    }
};