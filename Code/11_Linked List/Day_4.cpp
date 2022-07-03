//question

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    
    int getLength(ListNode* head) {
        int len = 0;
        
        ListNode* temp = head;
        
        while(temp != NULL) {
            len++;
            temp = temp -> next;
        }
        return len;
    } 
    
    ListNode* rotateRight(ListNode* head, int k) {
        
        int n = getLength(head);
        
        
        if(head == NULL || head -> next == NULL || k == 0 || k % n == 0)
            return head;
        
        //update k
        k = k % n;
        
        ListNode* prev = NULL;
        ListNode* curr = head;
        
        int t = n-k;
        
        while(t--) {
            prev = curr;
            curr = curr->next;
        }
        
        //step2
        prev -> next = NULL;
        
            
        //step3: tail -> next = head
        ListNode* tail = curr;
        while(tail ->next != NULL) {
            tail = tail -> next;
        }
            
        tail -> next = head;
        
        //step4: return ans
        return curr;

        
    }
};


//question 2
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* solve( ListNode* &head, bool& anyChange) {
        if(head == NULL)
            return head;
        
         ListNode* temp = head;
        int sum = 0;
        
        while(temp != NULL) {
            sum = sum + temp->val;
            if(sum == 0)
                break;
            temp = temp -> next;
        }
        
        if(sum == 0) {
            anyChange = true;
            return temp -> next;
        }
        
        //agli node ko head mankar check karo, PS zero aaya ya nahi
        head -> next = solve(head -> next, anyChange);
        return head;
        
    }
    
    ListNode* removeZeroSumSublists(ListNode* head) {
        
        while(true) {
             bool anyChange = false;
             head = solve(head, anyChange);
            
             if(head == NULL || anyChange == false)
                 break;
        }
        return head;
    }
};