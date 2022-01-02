//problem statement :Given a string, Your task is to  complete the function encode that returns the run length encoded string for the given string.
//encode function takes one argument string and returns encoded string
string encode(string src)
{     
   
  int c=1,n=src.size();
    string ans="";
    ans+=src[0];
    for(int i=1;i<n;i++){
        if(src[i]==src[i-1])
            c++;
        else{
          //by adding 0 it will convert int to char: ans+=c+'0', also we can use default function to_string(c) to convert int to char
            ans+=to_string(c);         
            ans+=src[i];
            c=1;
        }
    }
    ans+=to_string(c);        
    return ans;
}     
