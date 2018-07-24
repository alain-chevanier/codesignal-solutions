#define MAX_SQR 45000
#define FORG(i,a,b,c) for(int i=(a); i<(b); i+=(c))
#define FOR(i,n) FORG(i,0,n,1)

int sieve[MAX_SQR];
std::list<int> primes;

int Indicator(int n) {
    if(primes.size() == 0) {
        FOR(i,MAX_SQR) sieve[i] = true;
        sieve[0] = sieve[1] = false;
        FOR(i, MAX_SQR) {
            if(sieve[i]) {
                primes.push_back(i);
                FORG(j,i*i,MAX_SQR,i) sieve[j] = false;
            }
        }
    }

    std::map<int,int> divisors;
    int count, divs = 0;
    for(auto p : primes) {
        if(p*p > n) break;
        count = 0;
        while(n % p == 0) {
            n /= p;
            count++;
        }
        divs += count;
        if(count > 0) divisors[p] = count;
    }
    
    if(n != 1) return n;
    int result = 1, current;
    while(divs > 0) {
        current = ++result;
        for(auto& pair : divisors) { 
            while (current % pair.first == 0 && pair.second > 0) {
                current /= pair.first;
                pair.second--;
                divs--;
            }
        }
    }
    return result;
}