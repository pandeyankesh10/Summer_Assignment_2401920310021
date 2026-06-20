class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        // we create a ans linked list where we store are sorted list
        // creation
        ListNode ans(0);
        ListNode *tail = &ans;

        while (list1 && list2)
        {
            if (list1->val <= list2->val)
            { // compare first node of both lists
                tail->next = list1;
                list1 = list1->next;
            }
            else
            { // again comparison
                tail->next = list2;
                list2 = list2->next;
            }

            tail = tail->next; // increase tail of ans
        }

        if (list1)
            tail->next = list1;
        else
            tail->next = list2;

        return ans.next;
    }
};