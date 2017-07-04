/* geeksforgeeks data-structure */
/*
 *Stack is a linear data structure which follows a particular order in which
 *the operations are performed. The order may be LIFO(Last In First Out) or
 *FILO(First In Last Out).
 *Mainly the following three basic operations are performed in the stack:
 *Push: Adds an item in the stack. If the stack is full, then it is said to
 *be an Overflow condition.
 *Pop: Removes an item from the stack. The items are popped in the reversed
 *order in which they are pushed. If the stack is empty, then it is said to
 *be an Underflow condition.
 *Peek: Get the topmost item.
 *How to understand a stack practically?
 *There are many real life examples of stack. Consider the simple example
 *of plates stacked over one another in canteen. The plate which is at the top
 *is the first one to be removed, i.e. the plate which has been placed at the
 *bottommost position remains in the stack for the longest period of time. So,
 *it can be simply seen to follow LIFO/FILO order.
 *Implementation:
 *There are two ways to implement a stack:
 *Using array
 */

#include<stdio.h>
#include<stdlib.h>

struct _Stack;
typedef struct _Stack Stack;
Stack *createStack(unsigned);
int push(Stack *, int);
int checkOverFlow(Stack *);
int pop(Stack *, int *);
int checkUnderFlow(Stack *);

struct _Stack {
    int top;
    int limit;
    int *array;
};

int checkUnderFlow(Stack *st){
    return (st->top < 0);
}

int pop(Stack *st, int *data){
    if(checkUnderFlow(st)){
        printf("Stack is UnderFlow");
        return 1;
    }
    *data = st->array[st->top--];
    return 0;
}

int checkOverFlow(Stack *st){
    return(st->top > st->limit-1);
}

int push(Stack* st, int data){
    if(checkOverFlow(st)){
        printf("stack is OverFlow\n");
        return 1;
    }
    st->array[++st->top]=data;
    return 0;
}

Stack *createStack(unsigned l){
    Stack *st = (Stack *)malloc(sizeof(Stack));
    st->top = -1;
    st->limit = l;
    st->array = (int *)malloc(l * sizeof(int));
    return st;
}

int main(){
    int limit = 0;
    unsigned char choice;
    int data;
    printf("Enter the Stack Size\n");
    scanf("%d",&limit);
    Stack *stack = createStack(limit);
    while(1){
        printf("choice: function of choice\n");
        printf("1     : To push an element into stack\n");
        printf("2     : To pop an element outof stack\n");
        printf("3     : To find the peek of stack\n");
        printf("4     : To come out from the program\n");
        printf("please enter your choice\n");
        scanf(" %c",&choice);
        switch(choice){
            case '1':
                printf("enter element's data\n");
                scanf("%d",&data);
                push(stack,data)? \
                    printf("%d is not added\n", data): \
                    printf("%d is added\n", data);
                break;
            case '2':
            case '3':
                pop(stack,&data)? \
                   printf("No more elements in stack\n"): \
                   printf("%d is poped\n",data);
                break;
            case '4':
            default:
                printf("Program terminated\n");
                free(stack->array);
                free(stack);
                return 0;
        }
    }
    return 0;
}
