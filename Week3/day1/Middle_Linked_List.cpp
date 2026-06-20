class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        // we will do this question again with hare and turtle algo

        ListNode *slow = head;
        ListNode *fast = head;

        // when hare reaches end turtle reaches mid element

        while (fast && fast->next)
        {
            slow = slow->next;       // turtle
            fast = fast->next->next; // hare
        }

        return slow;
    }
};