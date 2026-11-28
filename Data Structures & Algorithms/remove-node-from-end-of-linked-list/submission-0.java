class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {

        if (head == null || n <= 0) {
            return head;
        }

        // Calculate length
        int length = 0;
        ListNode temp = head;

        while (temp != null) {
            length++;
            temp = temp.next;
        }

        // Invalid n
        if (n > length) {
            return head;
        }

        // Delete head
        if (n == length) {
            return head.next;
        }

        // Reach node before the target
        temp = head;

        for (int i = 1; i < length - n; i++) {
            temp = temp.next;
        }

        // Delete target node
        temp.next = temp.next.next;

        return head;
    }
}