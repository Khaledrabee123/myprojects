class Solution {
public:
\tListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
\t\tListNode *temp;
\t\twhile(headA != NULL){
\t\t\ttemp = headB;
\t\t\twhile(temp != NULL){
\t\t\t\tif(headA == temp){
\t\t\t\t\treturn headA;
\t\t\t\t}
\t\t\t\ttemp = temp -> next;
\t\t\t}
\t\t\theadA = headA -> next;
\t\t}
\t\treturn NULL;
\t}
};