N = 10000001
prime = [0] * N
prm = [2]
def sieve():
    prime[0] = 1;
    prime[1] = 1;
    for i in range (4, N, 2):
        prime[i] = 1
    for i in range (3, N, 2):
        if(prime[i]==0):
            prm.append(i)
            for j in range (i*i, N, i):
                prime[j] = 1
                
                
sieve()

while True:
    n, k = input().split()
    n, k = [int(n), int(k)]
    if n==0:
        if k==0:
            break
    
    good = 1
    ans = 0
    for p in prm:
        if p>=k:
            break
        
        if n%p == 0:
            good = 0
            ans = p
            break
            
    if good==1:
        print("GOOD")
    else:
        print("BAD "+str(ans))
        
    