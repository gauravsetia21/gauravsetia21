// following is the preorder traversal of a binary tree
push_stack(ptr);
while(!isempty())
{
    ptr=pop_stack();
    cout<<ptr->info;
    if(ptr->rchild!=NULL)
    push(ptr->rchild);


    if(ptr->lchild!=NULL)
    push(ptr->lchild);
}

//following is the inorder traversal of a binary tree

while(1)
{
    while(ptr->lchild!=NULL)
    {
        push_stack(ptr);
        ptr=ptr->lchild;
    }
    while(ptr->rchild==NULL)
    {
        cout<<ptr->info;
        if(isempty())
            return;
        ptr=pop_stack();
    }
    cout<<ptr->info;
    ptr=ptr->rchild();

}
