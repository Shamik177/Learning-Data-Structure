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
            cout << "Student not found." << endl;
            return NULL;
        }

        if (root->id == id)
        {
            cout << root->name << " (ID : " << root->id << ") obtained CGPA " << root->cgpa << endl << endl;
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
};

int main()
{
    int totalStudent;
    cout << "Total Students : ";
    cin >> totalStudent;
    cout << endl;
    cin.ignore();

    BST bst;
    Student *root = NULL;

    cout<<"Enter Student details --------->>>> "<<endl<<endl;
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

        Student *newStudent = new Student(id , name , cgpa);
        root = bst.insertion(root , newStudent);
    }
    cout << endl;

    cout << "Enter the ID of the Student to get details : ";
    string id;
    cin>>id;

    bst.searching(root , id);

    return 0;
}
