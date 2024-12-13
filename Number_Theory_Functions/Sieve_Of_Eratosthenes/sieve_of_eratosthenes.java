package CodeStock.Number_Theory_Functions.Sieve_Of_Eratosthenes;
import java.util.ArrayList;

public class sieve_of_eratosthenes{
    public static ArrayList<Integer> return_primes(Integer n){
        //creating a list with all indexes marked as 1 to implement the algorithm till the nth number
        boolean list[] = new boolean[n+1];
        for(int i=2; i<=n ; i++){
            list[i] = true;
        }
        for(int i=2 ;(i*i)<=n;i++){
            for(int j =(i*i); j<=n; j+=i){
                list[j] = false; //marking multiples of prime no.s as non primes
            }
        }
        ArrayList<Integer> ans = new ArrayList<>();
        for(int k=2 ; k<=n; k++){
            if (list[k]){
                ans.add(k);
            }
        }
        return ans;  
    }
    public static void main(String args[]){
        ArrayList<Integer> a = new ArrayList<>();
        a = return_primes(30); //sample input : n=10

        System.out.println(a);
    }
}