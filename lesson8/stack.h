struct Node {
    struct Node* next;
    int value;
};

void push(struct Node**, int);
int pop(struct Node**);
void printStack(struct Node**);