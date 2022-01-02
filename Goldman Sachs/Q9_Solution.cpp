
#include<bits/stdc++.h> 
using namespace std; 


class Solution{   
public:
    string printMinNumberForPattern(string S){
        // code here 
        
        stack<int> st;
        string res = "";
        for(int i=0; i<=S.length(); i++)
        {
            st.push(i+1);
            
            if(S.length() == i || S[i] == 'I')
            {
                while(!st.empty()){
                    res+=to_string(st.top());
                    st.pop();

                }
            }
        }
        
        return res;
        
        
    }
    
};



int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 
