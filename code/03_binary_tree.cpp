#include <iostream>

void buildTestTree(int* tree, int n) {
    if (n < 5) {
    return;
    }
    for(int i = 0;i < n;i++ ) {
    tree[i] = -1;
    }
    tree[0] = 1;
    tree[1] = 2;
    tree[2] = 3;
    tree[3] = 4;
    tree[4] = 5;

    return;
}

// 前序遍历：先输出当前节点，再依次遍历左子树、右子树。
void preorderTraversal(const int *tree,int n,int i) {
    if (i >= n||tree[i] == -1) {
    return;
    }

    std::cout << tree[i] << " ";
    preorderTraversal(tree,n,2*i+1);
    preorderTraversal(tree,n,2*i+2);

    return;
}

void inorderTraversal(int *tree,int n,int i) {
    if (i >= n||tree[i] == -1) {
    return;
    }

    inorderTraversal(tree,n,2*i+1);
    std::cout << tree[i] << " ";
    inorderTraversal(tree,n,2*i+2);

    return;
}


int main() {
    int tree[7];

    buildTestTree(tree,7);

    std::cout << "Preorder: ";
    preorderTraversal(tree,7,0);
    std::cout << "\n";

    std::cout << "Inorder: ";
    inorderTraversal(tree,7,0);
    std::cout << "\n";

    return 0;
}
