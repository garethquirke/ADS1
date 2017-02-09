#include "ListOfDoubles.h"
#include "DoubleListNode.h"
#include <iostream>
using namespace std;

ListOfDoubles::ListOfDoubles(){
    head = NULL;
}

ListOfDoubles::~ListOfDoubles(){
    
    cout << "Deconstructor called implicitly" << endl;
    
    DblnodePtr temp = head;
    while(temp!=NULL){
       deleteMostRecent(); 
       temp = temp->next;
    }
}
ostream& operator<<(ostream &output, const ListOfDoubles & l){
    l.display();
    return output;
}

ListOfDoubles::ListOfDoubles(const ListOfDoubles& l){
    head = NULL;
    *this = l;
}
const ListOfDoubles &ListOfDoubles::operator =(const ListOfDoubles& l){
    if(this!=&l){
        if(head !=NULL){
            while(head)
                deleteMostRecent();
        }
        DblnodePtr copy = NULL;
        DblnodePtr original = l.head;
        
        while(original!=NULL){
            if(head == NULL){
                head = copy = new DoubleListNode(original->data);
            } else{
                copy->next = new DoubleListNode(original->data);
                copy = copy->next;
            }
            original = original->next;
        }
    }
    return *this;
}

void ListOfDoubles::insert(double data){
    DoubleListNode *nNode = new DoubleListNode(data);
    
    nNode->next = head;
    head = nNode;
    nNode->data;

}

void ListOfDoubles::display(){
    
    DblnodePtr temp = head;
    while(temp!=NULL){
        cout << temp->data << "\n";
        temp = temp->next;
    }
}

void ListOfDoubles::deleteMostRecent(){
    DblnodePtr temp = head;
    head = head->next;
    delete temp;
}

double ListOfDoubles::topValue() const{
    
    DblnodePtr temp = head;
    double data = head->data;
    
    return data;
    //return top->data;
}

/*method should traverse the list to reach the position,
  return the value it finds and delete it*/

double ListOfDoubles::deleteDouble(int pos){
    DblnodePtr lead = head;
    DblnodePtr trail = NULL;
    
    //if head matches the position passed in
    
    if(pos == 1){
        head = head->next;
        delete lead;
    } else {
        pos--;
        //because it has already checked one
        
        while(pos){
            /* Search through the list until lead 
             * points to the correct position
             */
            trail = lead;
            lead = lead->next;
            pos--;
            
        }
        
    }
    if(lead == NULL){
        cout << "Did not find the position in list";
        return 0;
    }
    
    else{
        trail->next = lead->next;
        return lead->data;
        delete lead;   
    }    
}