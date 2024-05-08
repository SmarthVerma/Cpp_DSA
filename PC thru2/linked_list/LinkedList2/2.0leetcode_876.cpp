#include <iostream>

  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };


class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        // finding size of linked list

            ListNode*temp=head;
                int size=0;
                while(temp){
                    temp=temp->next;
                    size++;
                }
        // special case
            if(size==1){
                return head;
            }
        // getting middle index;
        
        int idx;
            if(size%2==0){ //even
                   idx=(size/2);
            
                int i=0;
                temp=head;
                    while(i<idx-1){
                        temp=temp->next;
                        i++;
                    }
                    return temp->next;
            }
            else{  //odd
             idx=size/2;
                int i=0;
                temp=head;
                    while (i<idx-1)
                    {
                        temp=temp->next;
                        i++;
                    }
                    return temp->next;
                    
            }
    }
};