class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* temp = node->next; // Save the next node temporarily
        node->val = temp->val; // Copy the value of the next node
        node->next = temp->next; // Adjust the pointers to skip the next node
        delete temp; // Free the memory of the next node
    }
};