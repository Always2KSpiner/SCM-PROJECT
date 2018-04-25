//This is the intial project file 
//all work will be done on this

//i am darsh. i have cloned the repository

# include <iostream>
# include <cstdlib>
using namespace std;
/*
 * Node Declaration
 */


struct node
{
    int info;
    struct node *left;
    struct node *right;
}*root;
class BST
{
    public:
        void inorder(node *);
                void preorder(node *);  //darsh;
        void display(node *, int);
        BST()
        {
            root = NULL;
        }
};

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
 
int main()

{
int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
 
    heapSort(arr, n);
 
    cout << "Sorted array is \n";
    printArray(arr, n);
    int choice, num;

    BST bst;

    node *temp;

    while (1)

    {

        cout<<"Operations on BST"<<endl;
        cout<<".................."<<endl;
        cout<<"1.Preorder Traversal"<<endl;
        cout<<"2.Display"<<endl;
        cout<<"3.Quit"<<endl;
        cout<<"Enter your choice : ";

        cin>>choice;

        switch(choice)
        {
        case 1:

            cout<<"Preorder Traversal of BST:"<<endl;
            bst.preorder(root);
            cout<<endl;
            break;

        case 2:

            cout<<"Display BST:"<<endl;
            bst.display(root,1);
            cout<<endl;
            break;     
	    case 4:

            exit(1);

        default:

            cout<<"Wrong choice"<<endl;
        }
    }
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
}
//display tree structure

 void BST::display(node *ptr, int level)
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
            for (i = 0;i < level; i++)
                cout<<"       ";
    }
        cout<<ptr->info;
       display(ptr->left, level+1);
    }

}
