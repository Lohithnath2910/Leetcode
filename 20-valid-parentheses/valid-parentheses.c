typedef struct stack {
    char* arr;
    int top;
    int max_size;
}stc;

stc* init(int x) {
    stc* q;
    q = (stc*)malloc(sizeof(stc));
    if(q == NULL)
    {
        return NULL;
    }
    q->arr = (char*)malloc(sizeof(char) * x);
    if(q->arr == NULL)
    {
        free(q);
        return NULL;
    }
    q->top = -1;
    q->max_size = x;
    return q;
}


void push(stc* q, char x) 
{
    if (q->top == q->max_size - 1) 
    {
        return;
    }
    q->top += 1;
    q->arr[q->top] = x;
}

char pop(stc* q) 
{
    char temp;
    if (q->top == -1) 
    {
        return '\0';
    } 
    else 
    {
        temp = q->arr[q->top];
        q->top -= 1;
    }
    return temp;
}




bool isValid(char* s) 
{
    stc* stack = init(10000);
    int i = 0;
    bool flag = true;
    while (s[i] != '\0') 
    {
        if ((s[i] == '(') || (s[i] == '[') || (s[i] == '{')) 
        {
            push(stack, s[i]);
        }

        else if ((s[i] == ')') || (s[i] == ']') || (s[i] == '}')) 
        {
            char last = pop(stack);
            if ((s[i] == ')' && last != '(') || (s[i] == '}' && last != '{') ||
                (s[i] == ']' && last != '['))
            {
                flag = false;
                break;
            }
        }
        i++;
    }
    if(stack->top != -1)
    {
        flag = false;
    }
    return flag;
}