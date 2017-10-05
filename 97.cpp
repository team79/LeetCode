/*************************************************************************
    > File Name: 97.cpp
    > Author: team79
    > Mail: huzihao79@163.com
    > Created Time: 2017年10月05日 星期四 20时49分31秒
 ************************************************************************/

#include <iostream>
#include <iostream>
#include <string>
#include <cstdio>
#include <map>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

bool dp[1000][1000];

bool isInterleave(string s1, string s2, string s3) {
    if(s1.size() + s2.size() != s3.size())  return false;
    memset(dp, false, sizeof(dp));
    dp[0][0] = true;
    for( int i = 0; i <= s1.size(); i++ ){
        for( int j = 0; j <= s2.size(); j++ ){
            if( i > 0 && s1[i-1] == s3[i+j-1] && dp[i-1][j] ){
                dp[i][j] = true;
            }
            if( j > 0 && s2[j-1] == s3[i+j-1] && dp[i][j-1] ){
                dp[i][j] = true;
            }
        }
    }
    return dp[s1.size()][s2.size()];
}

int main(){

    return 0;
}


