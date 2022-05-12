/**
 *Definition for singly-linked list.
 *struct ListNode {
 *    int val;
 *    ListNode * next;
 *    ListNode() : val(0), next(nullptr) {}
 *    ListNode(int x) : val(x), next(nullptr) {}
 *    ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:

        ListNode* create_node(int data)
        {
            ListNode *node = new ListNode(data);

            return node;
        }

    ListNode* add(ListNode *head1, ListNode *head2, int carry)
    {
        if (head1 == NULL && head2 == NULL)
        {
            if (carry)
            {
                return create_node(carry);
            }
            else
                return NULL;
        }
        else if (head1 == NULL)
        {
            int digit = (carry + head2->val) % 10;

            carry = (carry + head2->val) / 10;

            ListNode *head = create_node(digit);

            ListNode *smalloutput = add(head1, head2->next, carry);

            head->next = smalloutput;

            return head;
        }
        else if (head2 == NULL)
        {

            int digit = (carry + head1->val) % 10;

            carry = (carry + head1->val) / 10;

            ListNode *head = create_node(digit);

            ListNode *smalloutput = add(head1->next, head2, carry);

            head->next = smalloutput;

            return head;
        }
        else
        {

            int digit = (carry + head1->val + head2->val) % 10;

            carry = (carry + head1->val + head2->val) / 10;

            ListNode *head = create_node(digit);

            ListNode *smalloutput = add(head1->next, head2->next, carry);

            head->next = smalloutput;

            return head;
        }
    }
    ListNode* addTwoNumbers(ListNode *l1, ListNode *l2)
    {

        return add(l1, l2, 0);
    }
};