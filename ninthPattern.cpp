// ABCDCBA
// ABC CBA
// AB   BA
// A     A


#include<bits/stdc++.h>
using namespace std;

int main() {

	int n = 4, m = 7;
	char ch;

	for(int i = 1;i<=n;i++) {
        ch = 'A';
	    for(int j = 1;j<=m;j++) {
            if(j <= ((n+1)-i) || j >= ((n-1)+i)) {
                cout << ch;
                j<4 ? ch++ : ch--;
                
                
            }
            else {
                cout << " ";
                if(j == 4) ch--;
        
            }
                
	    }
	    cout << endl;
	}
}
