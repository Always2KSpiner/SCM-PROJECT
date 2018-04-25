//This is the intial project file 
//all work will be done on this
# include <iostream>
# include <cstdlib>
using namespace std;
/*
 * Node Declaration
 */
// commit done by naman

struct node
{
    int info;
    struct node *left;
    struct node *right;
}*root;
class BST
{
    public:
        void inorder(node *ptr)
{
    if (root == NULL)
    {
        cout<<"Tree is empty"<<endl;
        return;
    }
    if (ptr != NULL)
    {
        inorder(ptr->left);
        cout<<ptr->info<<"  ";
        inorder(ptr->right);
    }
}
         void postorder(node *ptr)
{
    if (root == NULL)
    {
        cout<<"Tree is empty"<<endl;
        return;
    }
    if (ptr != NULL)
    {
        postorder(ptr->left);
        postorder(ptr->right);
        cout<<ptr->info<<"  ";
    }
}
        void display(node *ptr, int level)
{
    int i;
    if (ptr != NULL)
    {
        display(ptr->right, level+1);
        cout<<endl;
        if (ptr == root)
            cout<<"Root->:  ";
        else
        {
            for (i = 0;i < level;i++)
                cout<<"       ";
	}
        cout<<ptr->info;
        display(ptr->left, level+1);
    }
}
        BST()
        {
            root = NULL;
        }
};
void BST::insert(node *tree, node *newnode)
{
	if (root == NULL)
	{
		root = new node;
		root->info = newnode->info;
		root->left = NULL;
		root->right = NULL;
		cout << "Root Node is Added" << endl;
		return;
	}
	if (tree->info == newnode->info)
	{
		cout << "Element already in the tree" << endl;
		return;
	}
	if (tree->info > newnode->info)
	{
		if (tree->left != NULL)
		{
			insert(tree->left, newnode);
		}
		else

