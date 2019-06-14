#include <iostream>

template<typename T>
struct BSTNode{
    T key;

    BSTNode<T> *left, *right, *p;
};

template<typename T>
struct BST{
    BSTNode<T> *root = nullptr;
};

template<typename T>
void inorder_tree_walk(BSTNode<T> *node){
    if(node != nullptr){
        inorder_tree_walk(node->left);
        std::cout << node->key << " ";
        inorder_tree_walk(node->right);
    }
}

template<typename T>
BSTNode<T>* tree_search(BSTNode<T> *node, T key){
    if(node == nullptr || key == node->key){
        return node;
    }

    if(key < node->key){
        return tree_search(node->left, key);
    }else{
        return tree_search(node->right, key);
    }
}

template<typename T>
BSTNode<T>* iterative_tree_search(BSTNode<T> *node, T key){
    while(node != nullptr && key != node->key){
        if(key < node->key){
            node = node->left;
        }else{
            node = node->right;
        }
    }

    return node;
}

template<typename T>
BSTNode<T>* tree_minimum(BSTNode<T> *node){
    while(node->left != nullptr){
        node = node->left;
    }

    return node;
}

template<typename T>
BSTNode<T>* tree_maximum(BSTNode<T> *node){
    while(node->right != nullptr){
        node = node->right;
    }

    return node;
}

template<typename T>
BSTNode<T>* tree_successor(BSTNode<T> *node){
    if(node->right != nullptr){
        return tree_minimum(node->right);
    }

    BSTNode<T>* y = node->p;
    while(y != nullptr && node == y->right){
        node = y;
        y = y->p;
    }

    return y;
}

template<typename T>
BSTNode<T>* tree_predecessor(BSTNode<T> *node){
    if(node->left != nullptr){
        return tree_maximum(node->left);
    }

    BSTNode<T>* y = node->p;
    while(y != nullptr && node == y->left){
        node = y;
        y = y->p;
    }

    return y;
}

template<typename T>
void transplant(BST<T> *tree, BSTNode<T> *u, BSTNode<T> *v){
    if(u->p == nullptr){
        tree->root = v;
    }else if(u == u->p->left){
        u->p->left = v;
    }else{
        u->p->right = v;
    }

    if(v != nullptr){
        v->p = u->p;
    }
}

template<typename T>
void tree_delete(BST<T> *tree, BSTNode<T> *node){
    if(node->left == nullptr){
        transplant(tree, node, node->right);
    }else if(node->right == nullptr){
        transplant(tree, node, node->left);
    }else{
        BSTNode<T> *y = tree_minimum(node->right);
        if(y->p != node){
            transplant(tree, y, y->right);
            y->right = node->right;
            y->right->p = y;
        }
        transplant(tree, node, y);
        y->left = node->left;
        y->left->p = y;
    }
}

template<typename T>
void tree_insert(BST<T> *tree, BSTNode<T> *node){
    BSTNode<T> *y = nullptr;
    BSTNode<T> *x = tree->root;

    while(x != nullptr){
        y = x;
        if(node->key < x->key){
            x = x->left;
        }else{
            x = x->right;
        }
    }

    node->p = y;

    if(y == nullptr){
        tree->root = node;
    }else if(node->key < y->key){
        y->left = node;
    }else{
        y->right = node;
    }
}
