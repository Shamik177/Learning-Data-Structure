#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

class BinarySearchTree
{
public:
    Node *insertion(Node *root, Node *newNode)
    {
        if (root == NULL)
        {
            root = newNode;
        }
        else
        {
            Node *current = root;
            while (current != NULL)
            {
                if (newNode->data < current->data)
                {
                    if (current->left != NULL)
                    {
                        current = current->left;
                    }

                    else
                    {
                        current->left = newNode;
                        break;
                    }
                }

                else if (newNode->data > current->data)
                {
                    if (current->right != NULL)
                    {
                        current = current->right;
                    }

                    else
                    {
                        current->right = newNode;
                        break;
                    }
                }

                else
                {
                    break;
                }
            }
        }
        return root;
    }

    Node *searching(Node *root, int data)
    {
        if (root == NULL || root->data == data)
        {
            return root;
        }

        if (data < root->data)
        {
            return searching(root->left, data);
        }

        if(data > root->data)
        {
            return searching(root->right, data);
        }
    }

    void preOrderTraversal(Node *root)
    {
        if (root != NULL)
        {
            cout << root->data << "  ";
            preOrderTraversal(root->left);
            preOrderTraversal(root->right);
        }
    }

    void inOrderTraversal(Node *root)
    {
        if(root != NULL)
        {
            inOrderTraversal(root->left);
            cout<<root->data<<"  ";
            inOrderTraversal(root->right);
        }
    }

    void postOrderTraversal(Node *root)
    {
        if (root != NULL)
        {
            postOrderTraversal(root->left);
            postOrderTraversal(root->right);
            cout << root->data << "  ";
        }
    }
};

int main()
{
    int total;
    cout << "Enter the number of nodes to insert: ";
    cin >> total;
    cout << endl;

    BinarySearchTree bst;
    Node *root = NULL;

    for (int i = 0; i < total; i++)
    {
        int data;
        cout << "Data for node " << i + 1 << " : ";
        cin >> data;
        Node *newNode = new Node(data);
        root = bst.insertion(root, newNode);
    }
    cout << endl;

    cout << "Pre-order traversal : ";
    bst.preOrderTraversal(root);
    cout << endl;

    cout << "In-order traversal : ";
    bst.inOrderTraversal(root);
    cout << endl;

    cout << "Post-order traversal : ";
    bst.postOrderTraversal(root);
    cout << endl;

    cout << "\nEnter the data to search for : ";
    int data;
    cin >> data;

    Node *found = bst.searching(root, data);
    if (found != NULL)
    {
        cout << data << " is found in the tree" << endl<<endl;
    }

    else
    {
        cout << data << " is not found in the tree" << endl<<endl;
    }

    return 0;
}
