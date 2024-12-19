# include <iostream>
# include <vector>
using namespace std;

void print_mat(vector<vector<int>> mat){
    for(int i =0; i<mat.size(); i++){ // traversing the rows
        for(int j=0; j<mat[0].size(); j++){ // traversing the columns
            cout<< mat[i][j] <<" "; // printing elements
        }
        cout<<endl;
    }
}

int main(){
    vector<vector<int>> v={{1,2,3},{4,5,6},{7,8,9}}; // sample input of a 2D matrix
    print_mat(v);
    return 0;
}