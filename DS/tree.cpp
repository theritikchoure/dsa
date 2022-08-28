#include <iostream>

using namespace std;

class TreeNode {
    public:
        int value;
        TreeNode* left;
        TreeNode* right;

    TreeNode() {
        value = 0;
        left = NULL;
        right = NULL;
    }

    TreeNode(int v) {
        value = v;
        left = NULL;
        right = NULL;
    }
};

class BST {
    public: 
        TreeNode *root;
        BST() {
            root = NULL;
        }
    
    bool isEmpty() {
        if(root == NULL) return true;
        return false;
    }

    void insert(TreeNode *new_node) {
        if(root == NULL) {
            root = new_node;
            cout << "Value inserted as root" <<endl;
            return;
        } else {
            TreeNode *temp = root;
            while(temp != NULL) {
                if(new_node->value == temp->value) {
                    cout << "No duplicate value allowed" <<endl;
                    return;
                } else if(new_node->value < temp->value && temp->left == NULL) {
                    temp->left = new_node;
                    cout << "Value inserted" <<endl;
                    return;
                } else if(new_node->value < temp->value) {
                    temp = temp->left;
                } else if(new_node->value > temp->value && temp->right == NULL) {
                    temp->right = new_node;
                    cout << "Value inserted" <<endl;
                    return;
                } else {
                    temp = temp->right;
                }
            }
        }
    }

    void printPreorder(TreeNode *r) {
        if(r == NULL) {
            return;
        } else {
            cout << r->value << " ";
            printPreorder(r->left);
            printPreorder(r->right);
        }
    }

    void printInorder(TreeNode *r) {
        if(r == NULL) {
            return;
        } else {
            printInorder(r->left);
            cout << r->value << " ";
            printInorder(r->right);
        }
    }
    
    void printPostorder(TreeNode *r) {
        if(r == NULL) {
            return;
        } else {
            printPostorder(r->left);
            printPostorder(r->right);
            cout << r->value << " ";
        }
    }

    void searchValue(int val) {
        if(root == NULL) {
            return;
        } else {
            TreeNode *temp = root;
            while(temp != NULL) {
                if(val == temp->value) {
                    cout << "Found" << endl;
                    return;
                } else if(val > temp->value) {
                    temp = temp->right;
                } else {
                    temp = temp->left;
                }
            }
        }
    }

    int height(TreeNode *node) {
        if(node == NULL) {
            return -1;
        } else {
            int leftHeight = height(node->left);
            int rightHeight = height(node->right);

            if(leftHeight > rightHeight) {
                return leftHeight + 1;
            } else {
                return rightHeight + 1;
            }
        }
    }

    void printBFSOrder(TreeNode *r) {
        int h = height(r);
        for(int i = 0; i <= h; i++) {
            printGivenLevel(r, h);
        }
    }

    void printGivenLevel(TreeNode *r, int level) {
        if(r == NULL) {
            return;
        } else if(level == 0) {
            cout << r->value << " ";
        } else {
            printGivenLevel(r->left, level-1);
            printGivenLevel(r->right, level-1);
        }
    }

    TreeNode* minValueNode(TreeNode* r) {
        TreeNode* current = root;
        while(current != NULL) {
            current = current->left;
        }

        return current;
    }

    TreeNode* deleteNode(TreeNode* r, int val) {
        if(r == NULL) {
            return;
        } else if(val > r->value) {
            r->right = deleteNode(r->right, val);
        } else if(val < r->value) {
            r->left = deleteNode(r->left, val);
        } else {
            if(r->left == NULL) {
                TreeNode* temp = r->right;
                delete r;
                return temp;
            } else if(r->right == NULL) {
                TreeNode* temp = r->left;
                delete r;
                return temp;
            } else {
                TreeNode* temp = minValueNode(r->right);
                r->value = temp->value;
                r->right = deleteNode(r->right, temp->value);
            }
        }
    }
};


int main() {
    int option, val;

    BST tree;

    do {
        cout << "What operation do you want to perform?" << endl;
        cout << "Select option number or enter 0 to exit." << endl;

        cout << "1. Insert Node" << endl;
        cout << "2. Search Node" << endl;
        cout << "3. Delete Node" << endl;
        cout << "4. Print Pre Order Values" << endl;
        cout << "5. Print In order Values" << endl;
        cout << "6. Print Post order Values" << endl;
        cout << "7. Print BFS Order of Tree" << endl;
        cout << "8. Print Height of Tree" << endl;
        cout << "9. Clear screen" << endl;
        cout << "0. Exit" << endl;

        cin >> option;

        TreeNode *new_node = new TreeNode();

        switch (option)
        {
            case 0:
                break;
            
            case 1:
                cout << "Insert" << endl;
                cin >> val;
                new_node->value = val;
                tree.insert(new_node);
                cout << endl;
                break;

            case 2:
                cout << "Search" << endl;
                cin >> val;
                tree.searchValue(val);
                break;

            case 3:
                cout << "Delete" << endl;
                break;

            case 4:
                cout << "Print" << endl;
                tree.printPreorder(tree.root);
                break;
            
            case 5:
                cout << "Print" << endl;
                tree.printInorder(tree.root);
                break;
            
            case 6:
                cout << "Print" << endl;
                tree.printPostorder(tree.root);
                break;
           
            case 7:
                cout << "Print" << endl;
                tree.printBFSOrder(tree.root);
                break;

            case 8: 
                cout << "Height " << tree.height(tree.root) << endl;
                break;

            case 9:
                system("cls");
                break;  

        }
    } while (option != 0);

    return 0;
}