class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;

        // finding middle
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Reversiing second half
        ListNode *prev = nullptr;
        while (slow)
        {
            ListNode *nextNode = slow->next;
            slow->next = prev;
            prev = slow;
            slow = nextNode;
        }

        // Comparison
        ListNode *first = head;
        ListNode *second = prev;

        while (second)
        {
            if (first->val != second->val)
            {
                return false;
            }
            first = first->next;
            second = second->next;
        }

        return true;
    }
};