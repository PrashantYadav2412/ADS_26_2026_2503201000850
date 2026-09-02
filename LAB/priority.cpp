#include <iostream>
using namespace std;

struct Node {
    int data;
    int priority;
    Node* next;

    Node(int d, int p) {
        data = d;
        priority = p;
        next = nullptr;
    }
};

class PriorityQueue {
private:
    Node* front;

public:
    PriorityQueue() {
        front = nullptr;
    }

  
    void enqueue(int data, int priority) {
        Node* newNode = new Node(data, priority);

       
        if (front == nullptr || priority > front->priority) {
            newNode->next = front;
            front = newNode;
        }
        else {
            Node* temp = front;

            
            while (temp->next != nullptr &&
                   temp->next->priority >= priority) {
                temp = temp->next;
            }

            newNode->next = temp->next;
            temp->next = newNode;
        }

        cout << data << " inserted with priority "
             << priority << endl;
    }

   
    void dequeue() {
        if (front == nullptr) {
            cout << "Priority Queue is Empty!" << endl;
            return;
        }

        Node* temp = front;
        cout << "Deleted: " << temp->data
             << " (Priority: " << temp->priority << ")" << endl;

        front = front->next;
        delete temp;
    }

   
    void display() {
        if (front == nullptr) {
            cout << "Priority Queue is Empty!" << endl;
            return;
        }

        Node* temp = front;

        cout << "\nPriority Queue:\n";

        while (temp != nullptr) {
            cout << "Data: " << temp->data
                 << " | Priority: " << temp->priority << endl;
            temp = temp->next;
        }
    }
};

int main() {
    PriorityQueue pq;

    pq.enqueue(10, 2);
    pq.enqueue(20, 5);
    pq.enqueue(30, 1);
    pq.enqueue(40, 4);
    pq.enqueue(50, 3);

    pq.display();

    cout << "\nAfter Deletion:\n";
    pq.dequeue();

    pq.display();

    return 0;
}