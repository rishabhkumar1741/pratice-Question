#include <iostream>
#include "praticeQuestion.h"
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    pattern::floydsTiangle();

    
    return 0 ;
}