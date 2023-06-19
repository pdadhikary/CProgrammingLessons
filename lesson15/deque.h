struct CircularNode {
    struct CircularNode *next;
    struct CircularNode *prev;
    int value;
};

void push(struct CircularNode **head, int value);
int pop(struct CircularNode **head);
void pushLeft(struct CircularNode **head, int value);
int popLeft(struct CircularNode **head);