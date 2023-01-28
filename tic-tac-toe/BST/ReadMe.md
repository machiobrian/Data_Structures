### Search Ops Pseudocode
~~~~
if root == NULL
    return NULL;
if number == root->data
    return root->data
if number < root->data
    return search(root->left)
if number > root->data
    return search(root->right)
~~~~