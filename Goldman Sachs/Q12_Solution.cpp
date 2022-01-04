#include <bits/stdc++.h>
using namespace std;



class Solution {
    public:
    static long long squaresInChessBoard(long long N) {
       // code here
       long long res =0;
       while(N>=1){
           res = res + (N*N);
           N--;
        }
      return res;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;

        cin>>N;

        Solution ob;
        cout << ob.squaresInChessBoard(N) << endl;
    }
    return 0;
}
