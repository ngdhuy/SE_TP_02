//
//  main.cpp
//  Bai001
//
//  Created by Huy Nguyen on 1/5/20.
//  Copyright © 2020 Huy Nguyen. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    
    cout << "Nhap n = ";
    cin >> n;
    
    int s = 0;
    for(int i = 1; i <= n; i++)
    {
        s += i * i;
    }
    
    cout << "S(n) = " << s << endl;
    return 0;
}
