/*
    Let's create an array list data structure.
    Recall from java an array list just like a 

    insert(x) :- inserts x into the set if it not in the set
    delete(x) :- list_removes x from the set if it in the setArrayList
    search(x) :- return true iff the x is in the set 
*/

#include <stdio.h>
#include <stdlib.h>

struct ArrayList
{
    int length;
    int *array;
    int capacity;
};

#define CAPACITY 3

struct ArrayList * construct_arraylist();
void list_add(struct ArrayList *, int);
int list_get(struct ArrayList *, int);
void list_remove(struct ArrayList *, int);
int size(struct ArrayList *);

int main() {
    struct ArrayList * list = construct_arraylist(); // ArraList<Integer> list = new ArrayList();
    
    list_add(list, 5); // [5]
    list_add(list, 10); // [5, 10]
    list_add(list, 2); // [5, 10, 2]
    list_add(list, 3); // [5, 10, 2, 3]
    printf("Size of list: %d\n", size(list));

    list_remove(list, 1); // [5, 2, 3]
    printf("Size of list: %d\n", size(list));
    printf("Item at index 1: %d\n", list_get(list, 1));

    list_add(list, 49); // [5, 2, 3, 49]
    printf("Last item in the list: %d\n", list_get(list, size(list) - 1));

    // list_add(list, 5);
    // list_add(list, 6);
    // list_add(list, 7);
    // list_add(list, 8);
    // list_add(list, 9);

    printf("[");
    for(int i = 0; i < size(list); i++) {
        printf("%d, ", list_get(list, i));
    }
    printf("]\n");
    return 0;
}

struct ArrayList * construct_arraylist() {
    struct ArrayList *list = malloc(sizeof(struct ArrayList));

    list->length = 0;
    list->array = calloc(sizeof(int), CAPACITY);
    list->capacity = CAPACITY;

    return list;
}

void list_add(struct ArrayList *list, int item) {
    if (list->length < list->capacity) {
        // List is not at capacity
        list->array[list->length] = item;
    } else {
        // List is at full capacity
        int *bigger_array = calloc(sizeof(int), list->capacity * 2);
        list->capacity = list->capacity * 2;

        for(int i = 0; i < list->length; i++) {
            // copy all the items from the previous array
            bigger_array[i] = list->array[i];
        }

        bigger_array[list->length] = item;

        free(list->array);
        list->array = bigger_array;
    }

    list->length++;
}

int list_get(struct ArrayList *list, int index) {
    if (index >= 0 && index < list->length) {
        return list->array[index];
    } else {
        exit(1); // throw an error
    }
}

void list_remove(struct ArrayList *list, int index) {
    if (index >= 0 && index < list->length) {
        for (int i = index; i < list->length-1; i++) {
            // shift all values in the array to the left
            list->array[i] = list->array[i+1];
        }
        list->length--;
    } else {
        exit(1); // throw an error
    }
}

int size(struct ArrayList *list) {
    return list->length;
}
