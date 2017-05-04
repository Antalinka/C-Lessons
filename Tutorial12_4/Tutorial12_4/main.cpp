//
//  main.cpp
//  Tutorial12_4
//
//  Created by Eugene Tretiakova on 2/22/16.
//  Copyright © 2016 Eugenya. All rights reserved.
//

#include <iostream>

enum {kIsSmaller, kIsLarger, kIsSame};

class Data
{
public:
    Data(int val):myValue(val){};
    ~Data(){};
    int Compare(const Data &);
    void Show(){std::cout << myValue << std::endl;};
    
private:
    int myValue;
};

int Data::Compare(const Data &theOtherData)
{
    if (myValue < theOtherData.myValue)
    {
        return kIsSmaller;
    }
    else if (myValue > theOtherData.myValue)
    {
        return kIsLarger;
    }
    else
    {
        return kIsSame;
    }
}

class Node;
class HeadNode;
class TailNode;
class InternalNode;

class Node
{
public:
    Node(){};
    virtual ~Node(){};
    virtual Node * Insert(Data * theData) = 0;
    virtual void Show() = 0;
};

class InternalNode: public Node
{
public:
//    InternalNode(Data * theData);
    InternalNode(Data * theData, Node * next);
    ~InternalNode(){delete myNext, delete myData;};
    virtual Node * Insert(Data * theData);
    virtual void Show(){ myData->Show(); myNext->Show();};
    
private:
    Data* myData;
    Node* myNext;
};

InternalNode::InternalNode(Data * theData, Node * next) :
myData(theData), myNext(next)
{
}

Node * InternalNode::Insert(Data * theData)
{
    int result = myData->Compare(*theData);
    

   switch (result)
    {
        case kIsSame:
            break;
            
        case kIsLarger:
        {
            InternalNode * dataNode = new InternalNode(theData, this);
            return  dataNode;
        }
            break;
        case kIsSmaller :
        {
            myNext->Insert(theData);
            return this;
        }
            
        default:
            break;
    }
    return this;
}

class TailNode: public Node
{
public:
    TailNode(){};
    ~TailNode(){};
    virtual Node * Insert(Data * theData);
    virtual void Show(){};
    
private:
    
};

class HeadNode : public Node
{
public :
    HeadNode();
    ~HeadNode(){delete myNext;};
    virtual Node * Insert(Data * theData);
    virtual void Show() {myNext->Show();}

private:
    Node * myNext;
};

HeadNode::HeadNode()
{
    myNext = new TailNode;
}

Node * TailNode::Insert(Data * theData)
{
    InternalNode * dataNode = new InternalNode(theData, this);
    return  dataNode;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
