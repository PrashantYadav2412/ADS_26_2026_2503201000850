#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;

    Node(int value) {
        data = value;
        next = NULL;
        prev = NULL;
    }
};

class Deque {
private:
    Node* front;
    Node* rear;

public:
    Deque() {
        front = NULL;
        rear = NULL;
    }

    
    void insertFront(int value) {
        Node* newNode = new Node(value);

        if (front == NULL) {
            front = rear = newNode;
        } else {
            newNode->next = front;
            front->prev = newNode;
            front = newNode;
        }
    }

    
    void insertRear(int value) {
        Node* newNode = new Node(value);

        if (rear == NULL) {
            front = rear = newNode;
        } else {
            newNode->prev = rear;
            rear->next = newNode;
            rear = newNode;
        }
    }

   
    void deleteFront() {
        if (front == NULL) {
            cout << "Deque is Empty\n";
            return;
        }

        Node* temp = front;
        front = front->next;

        if (front == NULL)
            rear = NULL;
        else
            front->prev = NULL;

        delete temp;
    }

   
    void deleteRear() {
        if (rear == NULL) {
            cout << "Deque is Empty\n";
            return;
        }

        Node* temp = rear;
        rear = rear->prev;

        if (rear == NULL)
            front = NULL;
        else
            rear->next = NULL;

        delete temp;
    }

   
    void display() {
        if (front == NULL) {
            cout << "Deque is Empty\n";
            return;
        }

        Node* temp = front;

        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main() {
    Deque dq;

    dq.insertFront(10);
    dq.insertFront(20);
    dq.insertRear(30);
    dq.insertRear(40);

    cout << "Deque: ";
    dq.display();

    dq.deleteFront();

    cout << "After deleting front: ";
    dq.display();

    dq.deleteRear();

    cout << "After deleting rear: ";
    dq.display();

    return 0;
}