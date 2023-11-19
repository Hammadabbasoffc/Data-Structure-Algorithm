/*
https://leetcode.com/problems/count-primes/
*/


class Solution {
public:
    int countPrimes(int n) {
        int count = 0;
        vector<bool> prime(n+1 , true);
        prime[0] = prime[1] = false;

        for(int i = 0; i < n; i++){
            if(prime[i]){
                count++;

                for(int j = i*2; j<n; j= j+i){
                    prime[j] = 0;
                }
            }
        }

        return count;
    }
};