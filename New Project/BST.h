class BST
{
private:
    struct node
    {
        int key;
        node* left;
        node* right;
    };
    
    node* root; //refrence the root node
    void AddLeafPrivate(int key, node* ptr);

public:
    BST();
    node* CreateLeaf(int key); //this function should be actually in private because the return type for this function is private
    void AddLeaf(int key);
    

};