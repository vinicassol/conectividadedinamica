//
//  QuickFind.hpp
//  Conectividade Dinamica
//
//  Created by Vini Cassol on 22/12/20.
//  Copyright © 2020 Vini Cassol. All rights reserved.
//

#ifndef QuickFind_hpp
#define QuickFind_hpp

class QuickFind
{
public:
    QuickFind(int n);
    bool FindConnection(int p, int q);
    void Union(int p, int q);
private:
    int *id;
    int qtdElements;
};

#endif /* QuickFind_hpp */
