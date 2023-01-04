#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* TODO: Implement ll_has_cycle */
    node *p = head;
    node *q = head;
    if (!p) return 0;
    while(1) {
        p = p -> next;
        q = q -> next;

        if (q)
            q = q -> next;

        if (p == q) return 1;
        if (!q) return 0;
    }
}
