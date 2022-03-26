void  Nixu(SListNode** pplist)//pplist 指向存放链表地址的地址
{
    SListNode* p1,*p2,*p3;
    p1=*pplist;
    if(p1->next==NULL)//若p1的大小为1
    {
        return;
    }
    else if(p1->next!=NULL&&p1->next->next!=NULL)
    {
        p2=p1->next;
        p3=p2->next;
        p2->next=p1;
        p1=p3;
        while(1)
        {
            if(p1->next!=NULL)
            {
                p3=p1->next;
                p1->next=p2;
                p2=p1;
                p1=p3;

            }
            else
            {
                p1->next=p2;

                (*pplist)->next=NULL;
                (*pplist)=p1;
                return;
            }
        }
    }
    else
    {
        p2=p1->next;
        p2->next=p1;
        p1->next=NULL;
        *pplist=p2;
}
}
} 
