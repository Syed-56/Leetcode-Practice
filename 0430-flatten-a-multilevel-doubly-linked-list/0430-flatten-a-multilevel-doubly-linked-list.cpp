/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        if(!head)   return NULL;    //for empty list
        Node* curr = head;

        while(curr != NULL) {
            if(curr->child != NULL) {
                Node* nextNode = curr->next;
                Node* flattenedChild = flatten(curr->child);
                curr->next = flattenedChild;
                flattenedChild->prev = curr;
                curr->child = NULL;

                Node* temp = flattenedChild;
                while(temp->next != NULL) {
                    temp = temp->next;  
                }
                if(nextNode != NULL) {
                    temp->next = nextNode;
                    nextNode->prev = temp;
                }
            } else {
                curr = curr->next;
            }
        }
        return head;
    }
};