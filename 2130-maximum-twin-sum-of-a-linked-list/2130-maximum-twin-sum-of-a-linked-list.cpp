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
    int pairSum(ListNode* head) {
        ListNode* rev = nullptr;
        ListNode* temp = head;
        while(temp){
            ListNode* node = new ListNode(temp->val);
            node->next = rev;
            rev = node;
            temp = temp->next;
        }
        ListNode* t1 = head;
        ListNode* t2 = rev;
        int sum = 0;
        int ans = 0;
        while(t1 && t2){
            sum = t1->val+t2->val;
            ans = max(ans,sum);
            t1 = t1->next;
            t2 = t2->next;
        }
        return ans;
    }
};