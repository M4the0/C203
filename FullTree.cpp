#include<iomanip>
#include<iostream>
#include<string>

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

void preOrdem(treenodeptr tree){

    if(tree != NULL){
        cout<< tree -> info <<endl;
        preOrdem(tree->left);
         preOrdem(tree->right);

    }
}

void emOrdem(treenodeptr tree){
    if(tree != NULL){
        emOrdem(tree->left);
        cout<< tree->info<<endl;
        emOrdem(tree->right);
    }
}

void posOrdem(treenodeptr tree){
    if(tree != NULL){
        posOrdem(tree->left);
        cout<<tree->left<<endl;
        posOrdem(tree->left);
    }else{
        cout<<"Empty tree!";
    }
}

void somaPosOrdem(treenodeptr tree, int &soma1){
    soma1 = 0;

    if(tree != NULL){
        somaPosOrdem(tree->left,soma1);
        somaPosOrdem(tree->left,soma1);
        soma1 += tree->info;
    }

}


int soma(treenodeptr tree){
    int soma1 = 0;

        somaPosOrdem(tree,soma1);

    return soma1;

}

int main(){

    treenodeptr tree = NULL; //tree root pontier
    treenodeptr p = NULL; //aux pointer
    int x,s; //data entrering aux

    //cin>>x;

    //while(x != 0){
    //    tinsert(tree,x);//inserting elements on tree
    //    cin>>x;
    //}

    tinsert(tree,4);
    tinsert(tree,2);
    tinsert(tree,5);
    tinsert(tree,3);
    tinsert(tree,9);
    tinsert(tree,14);
    tinsert(tree,20);

    p=tree;
    //cout<<"Root: "<<p->info<<endl;

    p = p->left; 

    cout<<"PosOrdem"<<endl;
        posOrdem(tree);
    cout<<"PreOrdem"<<endl;
        preOrdem(tree);
    cout<<"EmOrdem"<<endl;
        emOrdem(tree);
    s = soma(tree);

  //  cout<< p->info<<endl;

    //cin>>x;
    //cout<<search(p,x);





    return 0;
}