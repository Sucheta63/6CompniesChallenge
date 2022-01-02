//program to find Nth ugly numbers
//Ugly numbers are numbers whose only prime factors are 2, 3 or 5. The sequence 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, … shows the first 11 ugly numbers
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    set <long long int> s;
	   s.insert(1);
	   n--;
	   while(n--){
	        auto it = s.begin();
	        long long int x = *it;
	        s.erase(it);
	        s.insert(x*2);
	        s.insert(x*3);
	        s.insert(x*5);
	    } 
        return *s.begin();
	}
};
