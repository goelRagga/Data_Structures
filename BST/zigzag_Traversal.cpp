#include <iostream>
#include <stack>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *insert_BST(Node *root, int val)
{
    if (root == NULL)
    {
        return new Node(val);
    }

    if (val < root->data)
    {
        root->left = insert_BST(root->left, val);
    }
    else
    {
        root->right = insert_BST(root->right, val);
    }
    return root;
}

void zigzagTraversal(Node *root)
{

    if (root == NULL)
        return;

    stack<Node *> currLevel;
    stack<Node *> nextLevel;

    bool lefttoRight = true;

    currLevel.push(root);

    while (!currLevel.empty())
    {
        Node *temp = currLevel.top();
        currLevel.pop();

        if (temp)
        {
            cout << temp->data << " ";

            if (lefttoRight)
            {
                {
                    if (temp->left)
                    {
                        nextLevel.push(temp->left);
                    }
                    if (temp->right)
                    {
                        nextLevel.push(temp->right);
                    }
                }
            }

            else
            {
                if (temp->right)
                {
                    nextLevel.push(temp->right);
                }
                if (temp->left)
                {
                    nextLevel.push(temp->left);
                }
            }
        }
        if (currLevel.empty())
        {
            lefttoRight = !lefttoRight;
            swap(currLevel, nextLevel);
        }
    }
}

void pre_order(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    pre_order(root->left);
    pre_order(root->right);
}

int main()
{
    int n;
    cout << "Enter the Number of Nodes :" << endl;
    cin >> n;
    int arr[n];
    Node *root = NULL;
    cout << "Enter the Node Values: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        root = insert_BST(root, arr[i]);
    }

    zigzagTraversal(root);
}