// https://www.codingninjas.com/studio/problems/count-ways-to-reach-nth-stairs_798650?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_10



#include <bits/stdc++.h> 
int countDistinctWays(int nStairs) {
    if(nStairs < 0){
        return 0;
    }else if(nStairs == 0){
        return 1;
    }

    int ans = countDistinctWays(nStairs -1) + countDistinctWays(nStairs-2);
    return ans;
}