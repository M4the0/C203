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

treenodeptr search(treenodeptr p, int x){

    if(p == NULL || x == p->info){
        return NULL;
    }else if(x>p->info){
        return search(p->right,x);
    }
}

int main(){

    treenodeptr tree = NULL; //tree root pontier
    treenodeptr p = NULL; //aux pointer
    int x; //data entrering aux

    //cin>>x;

    //while(x != 0){
    //    tinsert(tree,x);//inserting elements on tree
    //    cin>>x;
    //}

    tinsert(tree,14);
    tinsert(tree,4);
    tinsert(tree,15);
    tinsert(tree,3);
    tinsert(tree,9);
    tinsert(tree,14);
    tinsert(tree,20);

    p=tree;
    //cout<<"Root: "<<p->info<<endl;

    p = p->left;

  //  cout<< p->info<<endl;

    cin>>x;
    if(search(p,x) == NULL){
        cout<<"Encontrado!";
    }else{
        cout<<"Não encontrado!";
    }





    return 0;
}


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

treenodeptr search(treenodeptr p, int x){

    if(p == NULL || x == p->info){
        return NULL;
    }else if(x>p->info){
        return search(p->left,x);
    }
}

int main(){

    treenodeptr tree = NULL; //tree root pontier
    treenodeptr p = NULL; //aux pointer
    int x; //data entrering aux

    //cin>>x;

    //while(x != 0){
    //    tinsert(tree,x);//inserting elements on tree
    //    cin>>x;
    //}

    tinsert(tree,14);
    tinsert(tree,4);
    tinsert(tree,15);
    tinsert(tree,3);
    tinsert(tree,9);
    tinsert(tree,14);
    tinsert(tree,20);

    p=tree;
    //cout<<"Root: "<<p->info<<endl;

    p = p->left;

  //  cout<< p->info<<endl;

    cin>>x;
    cout<<search(p,x);





    return 0;
}

