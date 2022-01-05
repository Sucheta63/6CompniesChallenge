//problem statement :Given an array of integers and a number k, write a function that returns true if given array can be divided into pairs such that sum of every pair is divisible by k.
 #include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool canPair(vector<int> a, int k) {
           map<int,int>m;
       int n=a.size();
       for(int i=0;i<n;i++){
           m[a[i]%k]++;
       }
       for(int i=0;i<n;i++){
           int r=a[i]%k;
           if(r==0){
               if(m[0]&1)return 0;
           }
           else if(m[r]!=m[k-r])return 0;
       }
       return 1;
    }
};
int main(){
  int tc;
  cin>>tc;
  while(tc--) {
    int n,k;
    cin>> n >>k;
    vector<int> a(n);
    for(int i=0;i<a.size();i++) cin>>a[i];
    Solution ob;
    bool ans = ob.canPair(a,  k);
    if(ans)
      cout<<"True\n";
    else
      cout<<"False\n";
  }
  return 0;
}
