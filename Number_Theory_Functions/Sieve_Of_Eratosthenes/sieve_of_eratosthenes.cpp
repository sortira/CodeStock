# include <iostream>
# include <vector>
# include <math.h>
using namespace std;

vector<int> return_primes(int n){
    //creating a list with all indexes marked as 1 to implement the algorithm till the nth number
    vector<bool> l(n+1,1);
    for(int i=2; i*i<=n; i++){
        if (l[i]==1){
            for(int j=i*i;j<=n;j+=i){
                l[j]=0; //marking multiples of prime no.s as non primes
            }
        }
    }
    vector<int> ans;
    for(int k=2;k<=n;k++){
        if(l[k]==1) ans.push_back(k);
    }
    return ans;
}

int main(){
    int n =10;  //sample input 1
    vector<int> a =return_primes(n);
    return 0;
}