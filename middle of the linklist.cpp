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
        ListNode * middleNode(ListNode* head)
    {
        ListNode* slower = head;
        ListNode* faster = head;
        while (slower && faster && faster->next)
        {
            slower = slower->next;
            faster = faster->next->next;
        }

        return slower;
    }
};