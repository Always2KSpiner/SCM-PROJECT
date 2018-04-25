//This is the intial project file 
//all work will be done on this
//i am darsh. i have cloned the repository
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
        void preorder(node *);  //darsh;
        void insert(node *,node *)//naman
	void del(int )//naman
         BST()
        {
            root = NULL;
        }
}
// A function to heapify the array.
void heapify(int arr[], int n, int i)
{
    int largest = i;  
    int l = 2*i + 1;  
    int r = 2*i + 2; 
 
    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;
 
    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;
 
    // If largest is not root
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}
// main function to do heap sort
void heapSort(int arr[], int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
 
    // One by one extract an element from heap
    for (int i=n-1; i>=0; i--)
    {
        // Move current root to end
        swap(arr[0], arr[i]);
 
        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}
/* A utility function to print array of size n */
void printArray(int arr[], int n)
{
    for (int i=0; i<n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}
 
// Pre Order Traversal

void BST::preorder(node *ptr)
{
    if (root == NULL)
    {
        cout<<"Tree is empty"<<endl;
        return;
   }
    if (ptr != NULL)
    {
        cout<<ptr->info<<"  ";
        preorder(ptr->left);
       preorder(ptr->right);
    }
=======
//this function is for insertion
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
		{
			tree->left = newnode;
			(tree->left)->left = NULL;
			(tree->left)->right = NULL;
			cout << "Node Added To Left" << endl;
			return;
		}
	}
	else
	{
		if (tree->right != NULL)
		{
			insert(tree->right, newnode);
		}
		else
		{
			tree->right = newnode;
			(tree->right)->left = NULL;
			(tree->right)->right = NULL;
			cout << "Node Added To Right" << endl;
			return;
		}
	}
}
//this function is for deleting
void BST::del(int item)
{
	node *parent, *location;
	if (root == NULL)
	{
		cout << "Tree empty" << endl;
		return;
	}
	find(item, &parent, &location);
	if (location == NULL)
	{
		cout << "Item not present in tree" << endl;
		return;
	}
	if (location->left == NULL && location->right == NULL)
		case_a(parent, location);
	if (location->left != NULL && location->right == NULL)
		case_b(parent, location);
	if (location->left == NULL && location->right != NULL)
		case_b(parent, location);
	if (location->left != NULL && location->right != NULL)
		case_c(parent, location);
	free(location);
}
