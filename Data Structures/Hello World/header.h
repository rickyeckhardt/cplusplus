
class List {

private:

    struct node {
        int data;
        node* next;
    };

    typedef struct node* nodePtr;

    nodePtr head;
    nodePtr current;
    nodePtr temp;

public: // Where functions go

    List();
    void AddNode(int addData);
    void DelNode(int delData);
    void PrintList();
};
