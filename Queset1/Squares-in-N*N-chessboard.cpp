//problem statment:Find total number of Squares in a N*N cheesboard.
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    long long squaresInChessBoard(long long n) {
         return (n*(n+1)*((2*n)+1))/6;
    }
};
int main(){
  int t;
  cin>>t;
  while(t--) {
    Long Long n;
    cin>>n;
    Solution ob;
    cout<<ob.squaresInChessBoard(n)<<endl;
  }
  return 0;
}
