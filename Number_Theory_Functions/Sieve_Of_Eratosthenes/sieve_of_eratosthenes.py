def return_primes(n):
    #creating a list with all indexes marked as 1 to implement the algorithm till the nth number
    l=[]
    for i in range(n+1):
        l.append(1)
    for i in range(2,int(n**(1/2))+1):
        if l[i] == 1:
            for j in range(i**2,n+1,i):
                l[j]=0 #marking multiples of prime no.s as non primes
    ans=[]
    for i in range(2,n+1): 
        if l[i]==1:
            ans.append(i)
            
    return ans

if __name__ == "__main__":
    print(return_primes(10)) #sample input 1: n=10
    print(return_primes(27)) #sample input 2: n=27
