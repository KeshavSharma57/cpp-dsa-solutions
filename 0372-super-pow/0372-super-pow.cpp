class Solution{
    int modPow(long long base, int exp){
        long long res=1;
        base%=1337;
        for(int i=0;i<exp;i++){
            res=(res*base)%1337;
        }
        return res;
    }
public:
    long long superPow(int a,vector<int>&b){
        long long n=b.size();long long ans=1;
        for (int i=0;i<n;i++) {
            ans=(modPow(ans,10)*modPow(a,b[i]))%1337;
        }
        long long rem; 
        long long near;
        if(ans>1337){
            rem=ans/1337;near=rem*1337;ans-=near;
        }
        return ans;
    }
};