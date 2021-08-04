#include <iostream>
#include "praticeQuestion.h"
#include <bits/stdc++.h>
#include <cmath>
#include <string>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int x;
    cin >> x;

    conversion::decimalToBinary(x);

    return 0;
}