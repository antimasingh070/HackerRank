#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 10000


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a[MAX], N,i;
    cin>>N;
    for(i=1;i<=N;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<N;i++)
    {
        cout<<a[N-i]<<" ";
    } 
    return 0;
}
