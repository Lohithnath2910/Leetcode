class node
{
    public:
        int val;
        node* next;
        node(int data)
        {
            val = data;
            next = NULL;
        }
};

class MyLinkedList {
public:
    node*head;
    MyLinkedList() 
    {
        head = NULL;
    }
    
    int get(int index) 
    {
        if(head == NULL)
        {
            return -1;
        }
        node* temp = head;
        while(temp != NULL && index > 0)
        {
            temp = temp->next;
            index--;
        }
        if(temp == NULL)
        {
            return -1;
        }
        return temp->val;    
    }
    
    void addAtHead(int val) 
    {
        node *temp = new node(val);
        temp->next = head;
        head = temp;
    }
    
    void addAtTail(int val) 
    {
        if(head == NULL)
        {
            addAtHead(val);    
        }
        else
        {
            node *temp1 = head;
            while(temp1->next != NULL)
            {
                temp1 = temp1->next;
            }
            node *temp = new node(val);
            temp1->next = temp; 
        }
    }
    
    void addAtIndex(int index, int val) 
    {
        if(index == 0)
        {
            addAtHead(val);
        }
        else{
        node *temp1 = head;
        node *temp = new node(val);
        while(index - 1 > 0 && temp1 != NULL)
        {
            temp1 = temp1->next;
            index--;
        }
        if(temp1 == NULL) return;
        temp->next = temp1->next;
        temp1->next = temp;    
        }
    }
    
    void deleteAtIndex(int index) 
    {
        if(head == NULL)
        return;
        else if(index == 0)
        {
            node* del = head;
            head = head->next;
            delete del;
        }
        else
        {
            node *temp1 = head;
            while(index - 1 > 0 && temp1->next != NULL)
            {
                temp1 = temp1->next;
                index--;
            }
            if(temp1->next == NULL) return;
            node* del = temp1->next;
            temp1->next = temp1->next->next;
            delete del;
        }   
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */