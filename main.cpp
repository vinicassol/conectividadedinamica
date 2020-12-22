//
//  main.cpp
//  Conectividade Dinamica
//
//  Created by Vini Cassol on 22/12/20.
//  Copyright © 2020 Vini Cassol. All rights reserved.
//

#include <iostream>
#include "QuickFind.hpp"

int main() {
    QuickFind qf(10);
    
    qf.Union(0, 5);
    qf.Union(5, 6);
    qf.Union(1, 2);
    qf.Union(2, 7);
    qf.Union(3, 4);
    qf.Union(3, 8);
    qf.Union(4, 9);
    
    if(qf.FindConnection(6, 1))
        std::cout << "Connected\n";
    else
        std::cout << "not connected\n";
    
    return 0;
}
