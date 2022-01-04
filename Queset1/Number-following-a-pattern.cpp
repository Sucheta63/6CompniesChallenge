//problem statement:Given a pattern containing only I's and D's. I for increasing and D for decreasing.Devise an algorithm to print the minimum number following that pattern.
//Digits from 1-9 and digits can't repeat.

#include<bits/stdc++.h>
using namsespace std;
class Solution{   
public:
    string printMinNumberForPattern(string str){
        // code here 
         string ans = "1";
       
      int n=str.length(), count=2;
       for(int i=0 ; i<n ; i++)
       {
           ans.push_back(count+48);
           count++;
       }
       
       int i=0, j=1, k=0;
       while(k<n)
       {
           if(str[k]=='I')
           {
               reverse(ans.begin()+i, ans.begin()+j);
               i=j;
           }
           j++;
           k++;
       }
       
       if(str.back()=='D')
           reverse(ans.begin()+i, ans.begin()+j);
           
       return ans;
    }
};
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string S;
    cin>>S;
    Solution ob;
    cout<<printMinNumberForPattern(S)<<endl;
  }
  return 0;
}
    
 
