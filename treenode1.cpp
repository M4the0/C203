#include<iomanip>
#include<iostream>

using namespace std;

struct treenode{
    int info;
    treenode *left;
    treenode *right;
};

typedef treenode* treenodeptr;

void tinsert(treenodeptr &p, int x){
    if(p == NULL){
        p = new treenode;
        p->info = x;
        p->left = NULL;
        p->right = NULL;
    }else if(x < p->info){

        tinsert(p->left, x);
        
    }else{
        tinsert(p->right, x);
    }
}

int main(){

    treenodeptr tree = NULL; //tree root pontier
    treenodeptr p = NULL; //aux pointer
    int x; //data entrering aux

    cin>>x;

    while(x != 0){
        tinsert(tree,x);//inserting elements on tree
        cin>>x;
    }

    p=tree;
    cout<<"Root: "<<p->info<<endl;

    p = p->left;

    cout<< p->info<<endl;





    return 0;
}
