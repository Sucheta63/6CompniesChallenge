//problem statement :Given an unsorted array Arr of size N of positive integers. One number 'A' from set {1, 2, …N} is missing and one number 'B' occurs twice in array. 
//Find these two numbers.
#include<bits/stdc++.h>
using namsespace std;
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
 //finding repeating number and missing number
       sort(arr, arr+n);
      int *array=new int[2];
       
       for(int i=1; i<=n; i++)
      {
          if(arr[i-1]==arr[i])
          {
              array[0]=arr[i-1];
              break;
          }
      }
      int count=0;
      for(int i=1; i<=n; i++)
      {    
          
          if(array[0]==i)
          {
              count++;
          }
          if(arr[i-1+count]!=i)
          {
             array[1]=i;
             break;
          }
      }
         return array;
    }
};
int main() {
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
      cin>>a[i];
    }
    Solution ob;
    auto ans= ob.findTwoElement(a,n);
    cout<<ans[0]<<" "<<ans[1]<<"\n";
  }
  return 0;
}
