struct node *reverse (struct node *head, int k)
{ 
 node *start=NULL;
 node *currentNode=head;
 node *last=NULL;
 node *actualNode=NULL;

 while(currentNode!=NULL)
 {
 node *prev=NULL;
  node *nextNode=NULL;
     actualNode=currentNode;
     int count=1;
     while(currentNode !=NULL && count<=k)
     {
         nextNode=currentNode->next;
         currentNode->next=prev;
         prev=currentNode;
         currentNode=nextNode;
         count++;
     }
     if(start==NULL)
     {
         start=prev;
     }
     if(last != NULL)
     {
         last->next=prev;
     }
     last=actualNode;
 }
 return start;
}