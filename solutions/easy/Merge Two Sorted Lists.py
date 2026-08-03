// Title: Merge Two Sorted Lists
            // Difficulty: Easy
            // Language: Python
            // Link: https://leetcode.com/problems/merge-two-sorted-lists/

        tail = dummy

        # Traverse both lists while pointers are valid
        while list1 and list2:
            if list1.val < list2.val:
                tail.next = list1
                list1 = list1.next
            else:

                tail.next = list2
                list2 = list2.next
            tail = tail.next
        # Attach whichever list still has remaining elements
        tail.next = list1 if list1 else list2
        dummy = ListNode(0)

        # Return the actual head (skipping the dummy anchor)
        return dummy.next
