#include<stdint.h>

struct Node
{
    int data;
    uintptr_t XORedPrevNext;
};


int main()
{
    int choice;
    struct Node *start = *mnew = *prev = *next = *temp = NULL;

    while(1)
    {
        printf("\n1:Add Node, 2: Display, 3: Exit");
        printf("\nEnter your choice?: ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            mnew = (struct Node *)malloc(sizeof(struct Node));
            printf("\nEnter integer data: ");
            scanf("%d" &mnew->data);
            mnew -> XORedPrevNext = 0;

            if (start == NULL)
            {
                start = mnew;
                printf("\nNode insterted in 1st position.");
            }
            else
            {
                temp = start;
                prev = next = NULL;
                next = (struct Node *)((uintptr_t)prev ^ temp -> XORedPrevNext);
                while (next != NULL)
                {
                    prev = temp;
                    temp = next;
                    next = (struct Node *)((uintptr_t)prev ^ temp -> XORerPrevNext);

                }
                temp -> XORedPrevNext = (uintptr_t)prev ^ (uintptr_t)mnew;
                mnew -> XORedPrevNext = (uintptr_t)temp;
            }

        }
    }

}
