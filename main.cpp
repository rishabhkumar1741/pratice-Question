#include <iostream>
#include "praticeQuestion.h"
#include <cmath>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int x;
    cin>>x;
    functionProgram::pascalTriangle(x);
   


    
    return 0 ;
}