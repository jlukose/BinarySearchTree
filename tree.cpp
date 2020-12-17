#include <iostream>
#include "tree.h"

tree::tree(int setData){
    data = setData;
    right = NULL;
    left = NULL;
    parent = NULL;
    root = NULL;
}

void tree::setRight(tree* inRight){
    right = inRight;
}

tree* tree::getRight(){
    return right;
}

void tree::setLeft(tree* inLeft){
    left = inLeft;
}

tree* tree::getLeft(){
    return left;
}

void tree::setRoot(tree* inRoot){
    root = inRoot;
}

tree* tree::getRoot(){
    return root;
}

void tree::setParent(tree* inParent){
    parent = inParent;
}

tree* tree::getParent(){
    return parent;
}

void tree::setData(int inData){
    data = inData;
}

int tree::getData(){
    return data;
}
