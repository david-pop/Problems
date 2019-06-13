#include <iostream>

using namespace std;

template<typename T>
struct BSTNode{
    T key;
    T pos;

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
    int position = 1;

    while(node != nullptr && key != node->key){
        if(key < node->key){
            node = node->left;
            position = position * 2;
        }else{
            node = node->right;
            position = position * 2 + 1;
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
    cout << node->pos << endl;


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
        cout << y->pos << endl;
        y->pos = node->pos;
        y->left = node->left;
        y->left->p = y;
    }
}

template<typename T>
void tree_insert(BST<T> *tree, BSTNode<T> *node){
    BSTNode<T> *y = nullptr;
    BSTNode<T> *x = tree->root;

    long long position = 1;

    while(x != nullptr){
        y = x;
        if(node->key < x->key){
            x = x->left;
            position = position * 2;
        }else{
            x = x->right;
            position = position * 2 + 1;
        }
    }

    node->p = y;
    node->pos = position;

    if(y == nullptr){
        tree->root = node;
    }else if(node->key < y->key){
        y->left = node;
    }else{
        y->right = node;
    }

    cout << position << endl;
}

int main(){
    long long q{};
    char cmd{};
    long long val{};

    cin >> q;
    BST<long long> *tree = new BST<long long>();

    while(q--){
        cin >> cmd >> val;

        if(cmd == 'i'){
            BSTNode<long long> *newnode = new BSTNode<long long>();
            newnode->key = val;
            tree_insert(tree, newnode);
        }else if(cmd == 'd'){
            BSTNode<long long> *delnode = iterative_tree_search(tree->root, val);

            if(delnode != nullptr){
                tree_delete(tree, delnode);
            }
        }
    }
}
