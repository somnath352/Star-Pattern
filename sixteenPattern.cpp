// \*****/
// *\***/*
// **\*/**
// ***/***
// **/*\**
// */***\*
// /*****\



#include<bits/stdc++.h>
using namespace std;

int main() {
    
    
    int rows, cols, k = 0, num;
    cin >> rows;
    cols = rows;
    
    for(int i = 1;i<=rows;i++) {
        
        for(int j = 1;j<=cols;j++) {
            if(j == i || j == (rows+1) - i) {
                if(i == (rows+1) - j) cout << "/";
                else cout << "\\";
                
            }
            else
                cout << "*";
            
        }
        cout << endl;
    }
    return 0;
}
