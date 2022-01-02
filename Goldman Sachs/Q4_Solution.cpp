#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;



string encode(string src)
{     
  
  string ans="";
  
  int i=0,j=0;
  while(j<src.length())
  {
    while(src[i]==src[j])
        j++;
  
  ans+=src[i] + to_string(j-i);
  i=j;
  }
  
  return ans;
}     
 

