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
int main()

{

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

 
