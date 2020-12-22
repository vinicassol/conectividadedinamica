//
//  QuickFind.cpp
//  Conectividade Dinamica
//
//  Created by Vini Cassol on 22/12/20.
//  Copyright © 2020 Vini Cassol. All rights reserved.
//

#include "QuickFind.hpp"

QuickFind::QuickFind(int n)
{
    id = new int[n];
    qtdElements = n;
    
    for(int i=0; i<n; i++)
        id[i] = i;
}
bool QuickFind::FindConnection(int p, int q)
{
    if(id[p] == id[q])
        return true;
    else
        return false;
}
void QuickFind::Union(int p, int q)
{
    int pid = id[p];
    int qid = id[q];
    for(int i=0; i<qtdElements; i++)
    {
        if (id[i] == pid)
            id[i] = qid;
    }
}
