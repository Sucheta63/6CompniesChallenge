//problem statement : Given a positive integer, return its corresponding column title as appear in an Excel sheet.
//column 1 is named as “A”, column 2 as “B”, column 27 as “AA” and so on
class Solution{
    public:
    string colName (long long int n)
    {
        // your code here
        string s = "";
        while(n != 0) {
            n--;
            int r = n % 26;
            s = string(1, r + 'A') + s;
            n = n / 26;
        }
        return s;
    }
};
