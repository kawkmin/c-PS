﻿#include<iostream>
#include <string>
#include <vector>
using namespace std;

long long S, K, tmp1,tmp2,ans = 1;

int main()
{
    cin >> S >> K;
    tmp1 = S / K;
    tmp2 = S % K;

    for (int i = 0; i < K; i++)
    {
        if (tmp2 > 0)
        {
            ans *= (tmp1 + 1);
            tmp2--;
        }
        else 
            ans *= tmp1;
    }
    cout << ans;
}