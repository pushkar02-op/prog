#include<iostream>
#define SPACE 10
using namespace std;
class TreeNode{
    public:
        int value;
        TreeNode* left;
        TreeNode* right;
        
        TreeNode(){
            value=0;
            left=NULL;
            right=NULL;
        }
        TreeNode(int v){
            value=v;
            left=NULL;
            right=NULL;
        }
};

class BST{
    public:
        TreeNode* root;

        BST(){
            root=NULL;
        }    
        bool isEmpty(){
            if(root==NULL){
                return true;
            }
            else
            {
                return false;
            }
            
        }

        void print2d(TreeNode* r, int space){
            if (r==NULL)
            {
                return;
            }
            space+=SPACE;
            print2d(r->right,space);
            cout<<endl;
            for(int i=SPACE; i<space; i++){
                cout<<" ";
            }
            cout<<r->value<<"\n";
            print2d(r->left,space);
            
        }

        void InsertNode(TreeNode* new_node){
            if(root==NULL){
                root=new_node;
                cout<<"Value inserted as root node\n";
            }
            else
            {
                TreeNode* temp=root;
                while(temp!=NULL){
                    if(new_node->value==temp->value){
                        cout<<"Value Already ecist"
                        <<"Insert another value\n";
                        return ;
                    }
                    else if ((new_node->value<temp->value) && (temp->left==NULL))
                    {
                        temp->left=new_node;
                        cout<<"Value Inserted at left\n";
                        break;
                    }
                    else if (new_node->value<temp->value)
                    {
                        temp= temp->left;
                    }
                    else if ((new_node->value>temp->value) && (temp->right==NULL))
                    {
                        temp->right= new_node;
                        cout<<"Value Inserted at right\n";
                        break;
                    }
                    else
                    {
                        temp=temp->right;
                    } 
                    
                }
            }
            

        }

};

int main(){
int opt,val;
BST q1;

do
{
    cout<<"Enter 1 to insert\n";
    cout<<"Enter 2 to search\n";
    cout<<"Enter 3 to delete\n";
    cout<<"Enter 4 to print\n";
    cout<<"Enter 0 to exit loop\n";
    cin>>opt;
    TreeNode* new_node= new TreeNode();
    switch (opt)
    {
    case 1:
        cout<<"Enter a node to be inserted\n";
        cin>>val;
        new_node->value=val;
        q1.InsertNode(new_node);
        cout<<endl;
        break;
    case 4:
        q1.print2d(q1.root,5);
        break;  
    default:
        break;
    }
} while (opt!=0);

return 0;
}