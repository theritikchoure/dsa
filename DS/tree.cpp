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
        cout << "4. Print BST Values" << endl;
        cout << "5. Clear screen" << endl;
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
                break;

            case 3:
                cout << "Delete" << endl;
                break;

            case 4:
                cout << "Print" << endl;
                break;

            case 5:
                system("cls");
                break;  

        }
    } while (option != 0);

    return 0;
}