#include <stdio.h>
#include <string.h>

struct string
{
    char *data;
    int size;
};

struct node
{
    struct string *element;
    struct node *next_node;    
};

void char_arr_to_string(char *arr, struct string *s)
{
    s->data = arr;
    s->size = strlen(arr);
}

struct node *string_array_to_list(char **string_arr, int len)
{
    struct node *first = NULL;
    struct node *last = NULL;

    struct node *tmp;

    int i;

    for (i = 0; i < len; i++) {
        tmp = malloc(sizeof(struct node));
        tmp->element = string_arr;
        tmp->next_node = NULL
    }
    
    
}

int main()
{
    char *s1 = "Hello";
    char *s2 = "bob";
    char *s3 = "Alice";
    char *s4 = "John";
    char *s5 = "Terminator";
    char *arr[] = {s1, s2, s3, s4, s5};

    int size = sizeof(arr) / sizeof(*arr);
    
    for (int i = 0; i < size; i++) {
        printf("%d. %s\n", i + 1, arr[i]);
    }

    return 0;
}
