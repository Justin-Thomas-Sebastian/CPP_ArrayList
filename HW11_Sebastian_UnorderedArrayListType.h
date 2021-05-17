// Justin Thomas T. Sebastian
// Park University
// CS225
// Build a queue class via inheritance
// queue inherits unorderedArrayListType
// unorderedArrayListType inherits arrayListType

// unorderedArrayListTypt interface file

#ifndef UnorderedArrayListType_H
#define UnorderedArrayListType_H

#include "HW11_Sebastian_ArrayListType.h"

class unorderedArrayListType : public arrayListType
{
public:
    void insertAt(int location, int insertItem);
    void insertEnd(int insertItem);
    void replaceAt(int location, int repItem);
    int seqSearch(int searchItem) const;
    void remove(int removeItem);

    unorderedArrayListType(int size = 100); //Constructor
};

#endif