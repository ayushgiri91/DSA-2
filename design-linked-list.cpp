// https://leetcode.com/problems/design-linked-list/submissions/1341117537

class Node {
public:
    int data;
    Node* next;
    Node(int val, Node* nextNode = nullptr) {
        this->data = val;
        this->next = nextNode;
    }
};

class MyLinkedList {
public:
    Node* head;
    int size;
    
    MyLinkedList() {
        head = nullptr;
        size = 0;
    }

    int get(int index) {
        if (index < 0 || index >= size) return -1;
        Node* current = head;
        for (int i = 0; i < index; ++i) {
            current = current->next;
        }
        return current->data;
    }

    void addAtHead(int val) {
        head = new Node(val, head);
        ++size;
    }

    void addAtTail(int val) {
        if (head == nullptr) {
            addAtHead(val);
            return;
        }
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = new Node(val);
        ++size;
    }

    void addAtIndex(int index, int val) {
        if (index < 0 || index > size) {
            return;
        }
        if (index == 0) {
            addAtHead(val);
            return;
        }
        Node* current = head;
        for (int i = 0; i < index - 1; ++i) {
            current = current->next;
        }
        Node* temp = new Node(val, current->next);
        current->next = temp;
        ++size;
    }

    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) return;
        if (index == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
            --size;
            return;
        }
        Node* current = head;
        for (int i = 0; i < index - 1; ++i) {
            current = current->next;
        }
        Node* temp = current->next;
        current->next = current->next->next;
        delete temp;
        --size;
    }
};
