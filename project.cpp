//This is the intial project file 
//all work will be done on this
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
        void display(node *, int);
        BST()
        {
            root = NULL;
        }
};
