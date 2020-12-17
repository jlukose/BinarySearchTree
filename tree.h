#ifndef TREE_H
#define TREE_H

using namespace std;

class tree{
public:
    tree(int);
    // setters
    void setRight(tree* inRight);
    void setLeft(tree* inLeft);
    void setParent(tree* inParent);
    void setRoot(tree* inRoot);
    void setData(int inData);
    //getters
    tree* getRight();
    tree* getLeft();
    tree* getParent();
    tree* getRoot();
    int getData();
    // all tree pointers
    tree* parent;
    tree* left;
    tree* right;
    tree* root;
    int data;
};
#endif
