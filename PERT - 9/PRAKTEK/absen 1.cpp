#include<iostream>
using namespace std;

struct node{
    char data;
    node *kiri;
    node *kanan;
};

node *akar=NULL;

void addNode(node **akar, char isi) {
    if((*akar)==NULL){
        node *baru = new node;
        baru->data = isi;
        baru->kiri = NULL;
        baru->kanan = NULL;
        (*akar)=baru;
    }
}

void preOrder(node *akar) {
    if(akar !=NULL) {
        cout << akar->data << " ";
        preOrder(akar->kiri);
        preOrder(akar->kanan);
    }
}

void inOrder(node *akar) {
    if(akar !=NULL) {
        inOrder(akar->kanan);
        cout << akar->data << " ";
        inOrder(akar->kiri);
    }
}

void postOrder(node *akar) {
    if(akar !=NULL) {
        postOrder(akar->kiri);
        postOrder(akar->kanan);
        cout << akar->data << " ";
    }
}

int main(){
    char abjad;
    cout << "\n\n\tPosisi Awal Tree:\n\n";
    cout << "\t       R\n\t      / \\\n\t     A   E\n\t    /\n\t   S\n\t  / \\\n\t I   T\n\n";
    addNode(&akar,abjad='R');
    addNode(&akar->kiri,abjad='A');
    addNode(&akar->kanan,abjad='T');
    addNode(&akar->kiri->kiri,abjad='E');
    addNode(&akar->kiri->kiri->kiri,abjad='I');
    addNode(&akar->kiri->kiri->kanan,abjad='S');
    
    cout << "Tampilan PreOrder  : ";
    preOrder(akar);
    cout << "\nTampilan InOrder   : ";
    inOrder(akar);
    cout << "\nTampilan PostOrder : ";
    postOrder(akar);
    return 0;
}
