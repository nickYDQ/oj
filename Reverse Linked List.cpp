//·´×ªÁ´±í
ListNode* reverseList(ListNode* head) {
        
   
    	ListNode* p = head;
    
    	if(p==NULL||p->next==NULL)
    	{
    		return p;
    	}
    	ListNode* q = p->next;
    	p->next = NULL;
    	ListNode* r = q->next;
    	while(r!=NULL)
    	{
    		q->next = p;
    		p = q;
    		q = r;
    		r = r->next;
    	}
    	q->next = p;
    	return q;
    }