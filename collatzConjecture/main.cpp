//
//  main.cpp
//  collatzConjecture
//
//  Created by Gabriela Avila on 9/10/25.
//

#include <iostream>
#include <vector>

using namespace std;

void collatz(int n)
{
   
    
    if (n == 1)
    {
        cout << n ;
        return;
    }else{
        cout << n << "-> " ;
    }
   if(n % 2 == 0)
   {
       collatz(n/2);
   }else{
       collatz((3 * n) + 1);
   }
    
    //return myVector;
}

int main() {
    // insert code here...
    int num;
    bool go = true;
    //bool goo = true;
    char yorn;
    cout << "What number do you want to try first ? \n";
    cin >> num;
    collatz(num);
    while (go)
    {
        cout << "\nDo you want to try again (y/n)? ";
        cin >> yorn;
        if (yorn == 'y' || yorn == 'Y')
        {
            cout << "What number do you want to try next ? \n";
            cin >> num;
            collatz(num);
        }else {
            go = false;
        }
    }
    
    return 0;
}
