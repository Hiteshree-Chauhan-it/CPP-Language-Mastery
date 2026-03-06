/*
Author: Hiteshree Chauhan
Problem Name: For Loop
Platform: HackerRank
Domain: C++ (Introduction)

Concept Used:
- For Loop for iterating through a range of numbers
- Conditional Statements (if, else if, else)
- Modulus Operator (%) to check even or odd
- Basic Input and Output using cin and cout

Difficulty: Easy
Time Complexity: O(n)  // where n = (b - a + 1)
*/

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;   // two integers as input

    for (int n = a; n <= b; n++) {
        if (n >= 1 && n <= 9) {
            if (n == 1) cout << "one" << endl;
            else if (n == 2) cout << "two" << endl;
            else if (n == 3) cout << "three" << endl;
            else if (n == 4) cout << "four" << endl;
            else if (n == 5) cout << "five" << endl;
            else if (n == 6) cout << "six" << endl;
            else if (n == 7) cout << "seven" << endl;
            else if (n == 8) cout << "eight" << endl;
            else if (n == 9) cout << "nine" << endl;
        }
        else {
            if (n % 2 == 0)
                cout << "even" << endl;
            else
                cout << "odd" << endl;
        }
    }
    return 0;
}
