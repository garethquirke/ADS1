/* 
 * File:   DoubleListNode.h
 * Author: gareth
 *
 * Created on 20 November 2015, 18:28
 */
#pragma once
class DoubleListNode{
    
    friend class ListOfDoubles;
    
private:
    //two attributes: the data and pointer to next node
    double data;
    DoubleListNode *next;
    
public:
    DoubleListNode(double);
    
};
typedef DoubleListNode *DblnodePtr;

