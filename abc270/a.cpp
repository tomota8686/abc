#include<bits/stdc++.h>

using namespace std;
int a, b, c;
int main() {
    cin >> a >> b;
    vector<bool> re = {false, false, false};
    c = 0;
    if(a==1) re.at(0) = true;
    if(a==2) re.at(1) = true;
    if(a==4) re.at(2) = true;
    if(a==3) {
        re.at(0) = true;
        re.at(1) = true;
    }
    if(a==5) {
        re.at(0) = true;
        re.at(2) = true;
    }
    if(a==6) {
        re.at(1) = true;
        re.at(2) = true;
    }
    if(a==7) {
        re.at(0) = true;
        re.at(1) = true;
        re.at(2) = true;
    }
    if(b==1) re.at(0) = true;
    if(b==2) re.at(1) = true;
    if(b==4) re.at(2) = true;
    if(b==3) {
        re.at(0) = true;
        re.at(1) = true;
    }
    if(b==5) {
        re.at(0) = true;
        re.at(2) = true;
    }
    if(b==6) {
        re.at(1) = true;
        re.at(2) = true;
    }
    if(b==7) {
        re.at(0) = true;
        re.at(1) = true;
        re.at(2) = true;
    }
    if(re.at(0) == true) c += 1;
    if(re.at(1) == true) c += 2;
    if(re.at(2) == true) c += 4;

    cout << c;

}