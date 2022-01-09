//problem statement : There are N stairs, and a person standing at the bottom wants to reach the top. The person can climb either 1 stair or 2 stairs at a time. 
//Count the number of ways, the person can reach the top (order does not matter).
class Solution
{
    public:
    //Function to count number of ways to reach the nth stair 
    //when order does not matter.
    long long countWays(int m)
    {
        long long ans=m/2+1;
        return ans;
    }
};
