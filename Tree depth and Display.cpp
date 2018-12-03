// Traversing and finding depth of tree and display
#include<iostream>
using namespace std;
struct node{
	struct node *left;
	struct node *right;
	int info;
}  *root=NULL;

node *getnode(){
	node *root;
	root=new node;
	return root;
}

node *insert(node *root,int digit)
{
	
	if(root==NULL)
{
	root= getnode();
	root->left=root->right=NULL;
	root->info=digit;
	}

else
{
	if(root->info>=digit){
	root->left=insert(root->left,digit);
	
	}
	else
{
		root->right=insert(root->right,digit);
}
return(root);
}}
void preorder(struct node* root){
	if(root==NULL)
	return;
	cout<<root->info<<" ";
	preorder(root->left);
	preorder(root->right);
	
}
void inorder(struct node* root){
	if(root==NULL)
	return;
	inorder(root->left);
	cout<<root->info<<" ";
	inorder(root->right);
	
}

void postorder(struct node* root){
	if(root==NULL)
	return;
	postorder(root->left);
	postorder(root->right);
	cout<<root->info<<" ";
}

void display(node *root,int space){
	if(root==NULL){
		return;
	}
	space +=3;
	display(root->right,space);
	cout<<"\n"; 
	for(int i=0; i<space; i++){
		cout<<"   ";
	}
	cout<<root->info;
	cout << endl;
	display(root->left,space);
	
}

int depth(node* root){
	if(root==NULL)
	return 0;
	else{
		
	int ldepth=depth(root->left);
	int rdepth=depth(root->right);
    return max(ldepth, rdepth)+1;
		
	}

}
int main(){
    root=insert(root,78);
     insert(root,52);
     insert(root,123);
     insert(root,137);
     insert(root,60);
     insert(root,63);
     insert(root,56);
    cout<<"preorder traversal is: ";
	preorder(root);
	cout<<"\ninorder traversal is: ";
	inorder(root);
	cout<<"\npostorder traversal is: ";
	postorder(root);
	display(root,0);
    cout<<"depth of tree is: "<<depth(root);
    return 0;
}
