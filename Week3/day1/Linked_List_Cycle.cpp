class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        // using tortoise and hare algo

        // algo states that if we take two pointers and one pointer moves one step and another 2 steps then they eventually meet at same index if cycle exists.

        ListNode *slow = head;
        ListNode *fast = head;

        while (fast && fast->next)
        {
            slow = slow->next;       // one step
            fast = fast->next->next; // two step

            if (slow == fast)
            { // if they meet at same index return true
                return true;
            }
        }

        return false;
    }
};