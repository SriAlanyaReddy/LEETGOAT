class Solution {
public:
    vector<int> runningSum(vector<int>& a) {
       int n=a.size();
       int s=0;
        for(int i=0;i<n;i++){
      s=s+a[i];
      a[i]=s;
        }
        return a;
        
    }
};