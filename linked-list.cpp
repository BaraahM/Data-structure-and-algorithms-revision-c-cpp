#include <iostream>

Struct Node{
    int data; // 4bytes for data
    node* next; // 4 bytes for address 6add->5add->2add"0"
};

class LinkedList{
    private:
    Node* head; // Pointer to the first node in the list

public:
    LinkedList() : head(nullptr) {} // Constructor: initialize head to nullptr (empty list)
     // Function to insert a new node at the beginning of the list
    void insert(int newData) {
        Node* newNode = new Node; // Create a new node
        newNode->data = newData; // Set its data
        newNode->next = head; // Point it to the current head
        head = newNode; // Update head to point to the new node
    }

    // Function to display the linked list
    void display() {
        Node* current = head; // Start from the head of the list
        while (current != nullptr) { // Loop until the end of the list
            std::cout << current->data << " "; // Output the data of the current node
            current = current->next; // Move to the next node
        }
        std::cout << std::endl; // Output a newline after printing all elements
    }

    // Destructor to deallocate memory
    ~LinkedList() {
        Node* current = head; // Start from the head of the list
        while (current != nullptr) { // Loop until the end of the list
            Node* temp = current; // Store the current node in a temporary variable
            current = current->next; // Move to the next node
            delete temp; // Delete the current node
        }
    }
};

int main() { // Main function where the program execution starts
    LinkedList list; // Create an instance of the LinkedList class
    list.insert(2); // Insert elements into the list
    list.insert(5);
    list.insert(6);
    list.display(); // Display the contents of the list
    return 0; // Indicate successful program termination
}
