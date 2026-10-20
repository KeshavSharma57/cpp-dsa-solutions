/*TC=O(n);
SC=O(1);
*/
class Solution {
public:
    double findMaxAverage(vector<int>&a,int k) {
        int max=0;int n=a.size();int nmax=0;
        for(int i=0;i<k;i++){
            max+=a[i];
            nmax=max;
        }
        for(int i=1;i<=n-k;i++){
            max-=a[i-1];max+=a[i+k-1];
            if(nmax<max){
                nmax=max;
            }
        }
        return (double)nmax/k;
    }
};