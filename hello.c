// hello.c
#include <stdio.h>

int main(void)
{
    printf("hello world\n");
    return 0;
}



ListNode *oddStart = NULL; 
ListNode *oddEnd = NULL;

while (cur != NULL) {
        if (cur->item % 2 == 0) {
            // Even item
            prev = cur;
            cur = cur->next;
        } else {
            // Odd item
            if (oddStart == NULL) {
                // First odd item encountered
                oddStart = cur;
                oddEnd = cur;
            } else {
                // Append odd item to the end
                oddEnd->next = cur;
                oddEnd = cur;
            }

            // Adjust pointers to skip the current odd item
            if (prev != NULL) {
                prev->next = cur->next;
            } else {
                ll->head = cur->next;
            }
            ListNode *temp = cur;
            cur = cur->next;
            temp->next = NULL; // Ensure proper termination
        }
    }

    // Append the odd-numbered items to the end of the list
    if (oddStart != NULL) {
        if (prev != NULL) {
            prev->next = oddStart;
        } else {
            ll->head = oddStart;
        }
        oddEnd->next = NULL; // Ensure proper termination
    }


