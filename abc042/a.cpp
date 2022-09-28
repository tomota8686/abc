#include <bits/stdc++.h>

using namespace std;

int a, b, c;
int five = 0;
int seven = 0;
int main(){
    cin >> a >> b >> c;
    if(a==5)five++;
    else seven++;
    if(b==5)five++;
    else seven++;
    if(c==5)five++;
    else seven++;

    if (five==2 && seven==1) cout << "YES" << endl;
    else cout << "NO" << endl;
}