#include<bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> at;
    at.push(1);
    at.push(2);
    at.push(3);

    while(at.size())
    {
        cout<<at.top();
        at.pop();
    }
    
    return 0;
}