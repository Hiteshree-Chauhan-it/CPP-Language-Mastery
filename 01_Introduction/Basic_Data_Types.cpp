/*
Problem Name: Basic Data Types
Platform: HackerRank
Domain: C++ (Introduction)
Concept Used: 
- Basic Data Types (int, long, char, float, double)
- Input and Output using cin and cout
- Output formatting using iomanip (fixed, setprecision)
Difficulty: Easy
*/

#include <iostream>
#include <cstdio>
#include<iomanip>
using namespace std;

int main() {
    int a;
    long b;
    char c;
    float d;
    double e;
    
    cin>>a>>b>>c>>d>>e;
    cout<<a<<endl<<b<<endl<<c<<endl;
    cout<<fixed<<setprecision(2)<<d<<endl;
    cout<<fixed<<setprecision(5)<<e<<endl;
    return 0;
}
