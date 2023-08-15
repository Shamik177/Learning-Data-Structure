#include <iostream>
using namespace std;

struct Student
{
    string id;
    string name;
    float cgpa;
    Student *left;
    Student *right;

    Student(string id, string name, float cgpa)
    {
        this->id = id;
        this->name = name;
        this->cgpa = cgpa;
        left = NULL;
        right = NULL;
    }
};

class BST
{
public:
    Student *insertion(Student *root, Student *newStudent)
    {
        if (root == NULL)
        {
            root = newStudent;
        }
        else
        {
            Student *current = root;
            while (current != NULL)
            {
                if (newStudent->id < current->id)
                {
                    if (current->left != NULL)
                    {
                        current = current->left;
                    }

                    else
                    {
                        current->left = newStudent;
                        break;
                    }
                }

                else if (newStudent->id > current->id)
                {
                    if (current->right != NULL)
                    {
                        current = current->right;
                    }

                    else
                    {
                        current->right = newStudent;
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

    Student *searching(Student *root, string id)
    {
        if (root == NULL)
        {
            cout << "Student is not found." << endl;
            return NULL;
        }

        if (root->id == id)
        {
            cout << root->name << " (ID : " << root->id << ") obtained CGPA " << root->cgpa << endl;
            return root;
        }

        if (id < root->id)
        {
            return searching(root->left, id);
        }

        if(id > root->id)
        {
            return searching(root->right, id);
        }
    }

    Student *LeastValueOfId(Student *root)
    {
        while (root->left != NULL)
        {
            root = root->left;
        }
        return root;
    }

    Student *deleteLeafNode(Student *root, string id)
    {
        if (root == NULL)
        {
            return root;
        }

        if (id < root->id)
        {
            root->left = deleteLeafNode(root->left, id);
        }

        else if (id > root->id)
        {
            root->right = deleteLeafNode(root->right, id);
        }

        else
        {
            if (root->left == NULL && root->right == NULL)
            {
                delete root;
                return NULL;
            }
        }
        return root;
    }

    Student *deleteNodeWithOneChild(Student *root, string id)
    {
        if (root == NULL)
        {
            return root;
        }

        if (id < root->id)
        {
            root->left = deleteNodeWithOneChild(root->left, id);
        }

        else if (id > root->id)
        {
            root->right = deleteNodeWithOneChild(root->right, id);
        }

        else
        {
            if (root->left == NULL)
            {
                Student *temp = root->right;
                delete root;
                return temp;
            }

            else if (root->right == NULL)
            {
                Student *temp = root->left;
                delete root;
                return temp;
            }
        }
        return root;
    }

    Student *deleteNodeWithBothChildren(Student *root, string id)
    {
        if (root == NULL)
        {
            return root;
        }

        if (id < root->id)
        {
            root->left = deleteNodeWithBothChildren(root->left, id);
        }

        else if (id > root->id)
        {
            root->right = deleteNodeWithBothChildren(root->right, id);
        }

        else
        {
            if (root->left == NULL)
            {
                Student *temp = root->right;
                delete root;
                return temp;
            }

            else if (root->right == NULL)
            {
                Student *temp = root->left;
                delete root;
                return temp;
            }

            Student *temp = LeastValueOfId(root->right);
            root->id = temp->id;
            root->name = temp->name;
            root->cgpa = temp->cgpa;
            root->right = deleteNodeWithBothChildren(root->right, temp->id);
        }
        return root;
    }
};

int main()
{
    int totalStudent;
    cout << "Total number of Students : ";
    cin >> totalStudent;
    cout << endl;
    cin.ignore();

    BST bst;
    Student *root = NULL;

    cout<<"Enter Student Details --------->>>> "<<endl<<endl;
    for (int i = 0; i < totalStudent; i++)
    {
        string id , name;
        float cgpa;

        cout << "Student ID : ";
        cin >> id;

        cout << "Name : ";
        cin.ignore();
        cin >> name;

        cout << "CGPA : ";
        cin >> cgpa;
        cout << "\n-----------------" << endl << endl;

        Student *newStudent = new Student(id , name , cgpa);
        root = bst.insertion(root , newStudent);
    }

    cout << "Enter the ID of a Student to get details : ";
    string id;
    cin>>id;

    bst.searching(root , id);

    string choice;
    cout << "\nDo you want to delete this student's details? : ";
    cin >> choice;

    if (choice == "yes" || choice == "Yes")
    {
        Student *found = bst.searching(root, id);
        if (found)
        {
            cout << "These details are successfully deleted" << endl;

            if (found->left == NULL && found->right == NULL)
            {
                root = bst.deleteLeafNode(root, id);
                cout << "Case 1 implemented : Deletion of the Node with zero child (Leaf node)" << endl;
            }

            else if (found->left == NULL || found->right == NULL)
            {
                root = bst.deleteNodeWithOneChild(root, id);
                cout << "Case 2 implemented : Deletion of the Node with one child" << endl;
            }

            else
            {
                root = bst.deleteNodeWithBothChildren(root, id);
                cout << "Case 3 implemented : Deletion of the Node with both children" << endl;
            }
        }
    }

    else
    {
        cout << "Student's details are not deleted" << endl;
    }

    return 0;
}
