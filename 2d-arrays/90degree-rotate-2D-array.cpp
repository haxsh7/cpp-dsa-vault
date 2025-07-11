#include<iostream>
#include <bits/stdc++.h>

using namespace std;

void transpose(vector<vector<int>>& v,int row,int col){
    for(int i=0; i<row; i++) {
    
    for(int j=i; j<col; j++) {
      
      swap(v[i][j], v[j][i]);
      
    }
  }
}


int main() {
    vector<vector<int>> v = {{1, 2, 3},
                             {4, 5, 6},
                             {7, 8, 9}};

    int row = v.size();
    int col =3;
  
  	// Loop through rows
    for (int i = 0; i < v.size(); i++) {
      
      	// Loop through columns
        for (int j = 0; j < v[i].size(); j++)
            cout << v[i][j] << " ";
        cout << endl;
    }
    transpose(v,row,col);
    cout << "tHIS IS TRANSPOSE "<< endl;
    for (int i = 0; i < v.size(); i++) {
      
      	// Loop through columns
        for (int j = 0; j < v[i].size(); j++)
            cout << v[i][j] << " ";
        cout << endl;
    }

    for(int i =0 ; i<col; i++){
        reverse(v[i].begin(),v[i].end());
    }
    cout << "tHIS IS 90 degree "<< endl;
    for (int i = 0; i < v.size(); i++) {
      
      	// Loop through columns
        for (int j = 0; j < v[i].size(); j++)
            cout << v[i][j] << " ";
        cout << endl;
    }
    return 0;
}