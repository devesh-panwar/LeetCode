/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    int gcd(int a,int b){
        if(b==0) return a;

        return gcd(b,a%b);
    }
    public ListNode insertGreatestCommonDivisors(ListNode head) {
        
         if((head.next==null)) return head;

        ListNode temp= head;

        while( temp!=null && temp.next!=null){
            ListNode nx=temp.next;
            int gc=gcd(temp.val,nx.val);
            ListNode nw= new ListNode(gc,nx);
            temp.next=nw;
            temp=nx;
        }

        return head;
    }
}