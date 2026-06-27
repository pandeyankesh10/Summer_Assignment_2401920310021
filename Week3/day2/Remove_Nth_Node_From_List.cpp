class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode temp(0);
        temp.next = head;

        ListNode *fast = &temp;
        ListNode *slow = &temp;

        // Move fast n steps ahead
        for (int i = 0; i < n; i++)
        {
            fast = fast->next;
        }

        // Move both pointers
        while (fast->next != nullptr)
        {
            fast = fast->next;
            slow = slow->next;
        }

        // Remove the nth node from the end
        slow->next = slow->next->next;

        return temp.next;
    }
};