 struct compare {
    bool operator()(
        struct Node* a, struct Node* b)
    {
        return a->data > b->data;
    }
};
    //Function to merge K sorted linked list.
    Node * mergeKLists(Node *arr[], int K)
    {
        priority_queue<Node*,vector<Node*>,compare>pq;
        Node *head = NULL, *last;
        for(int i=0;i<K;i++){
            if(arr[i]!=NULL){
                pq.push(arr[i]);
            }
        }
        while (!pq.empty()) {

        // get the top element of 'pq'
        Node* top = pq.top();
        pq.pop();

        // check if there is a node
        // next to the 'top' node
        // in the list of which 'top'
        // node is a member
        if (top->next != NULL)
            // push the next node in 'pq'
            pq.push(top->next);

        // if final merged list is empty
        if (head == NULL) {
            head = top;

            // points to the last node so far of
            // the final merged list
            last = top;
        }

        else {
            // insert 'top' at the end
            // of the merged list so far
            last->next = top;

            // update the 'last' pointer
            last = top;
        }
    }

    // head node of the required merged list
    return head;
    }
