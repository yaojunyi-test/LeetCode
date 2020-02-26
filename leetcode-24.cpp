/*************************************************************************
	> File Name: leetcode-24.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月26日 星期三 10时11分46秒
 ************************************************************************/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
     struct ListNode ret, *p, *q;
    ret.next = head;
    p = q = &ret;
    while(n--) {
        q = q->next;
    }
    q = q->next;
    while(q) {
        p = p->next;
        q = q->next;
}
q = p->next;
p->next = q->next;
free(q);
return ret.next;
}