#include "llrec.h"

//*********************************************
// Provide your implementation of llpivot below
//*********************************************
void llpivot (Node*& head, Node*& smaller, Node*& larger, int pivot){
  //base case
   if(head == nullptr){
    smaller = nullptr;
    larger = nullptr;
    return;
   }
   Node* temp =  head;
   head = head->next;
   llpivot ( head, smaller, larger, pivot);

   // less than pivot case
   if(temp->val <= pivot){
    temp->next = smaller;
    smaller = temp;
    // 2 3

   } else{
    temp->next = larger;
    larger = temp;
  
   }
   
}
