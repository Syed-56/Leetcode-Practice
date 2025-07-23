/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head)   return NULL;
        Node* newHead = new Node(head->val);
        Node* currOld = head->next;
        Node* currNew = newHead;
        unordered_map<Node*, Node*> randomNodes;
        randomNodes[head] = newHead;

        while(currOld != NULL) {
            currNew->next = new Node(currOld->val); 
            randomNodes[currOld] = currNew->next;   
            currOld = currOld->next;
            currNew = currNew->next;
        }
        
        currOld = head;
        currNew = newHead;

        while(currOld != NULL) {
            currNew->random = randomNodes[currOld->random];
            currOld = currOld->next;
            currNew = currNew->next;
        }

        return newHead;
    }
};