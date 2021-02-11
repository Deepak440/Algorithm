// C++ Program to find the middle node in the linked list

#include <iostream>
using namespace std;

class Node{
public:
	int data ;
	Node* next;
};


// Inserting at the beigning
void push( Node **head , int New_data)
{
	Node *temp = new Node();
	temp -> data = New_data;

	temp -> next = *head;

	*head = temp;

}



// Function 1 to find the middle node of the list 
void Middle_node1(Node* head)
{
	Node* temp = head;
	int length = 0;
	while(temp != NULL)
	{
		length ++;
		temp = temp -> next;
	}
    int count = 1;
	while(head != NULL && count <= length/2 )
	{
		count ++;
		head = head -> next;
	}
	cout << head -> data;

} 

// Function 1 to find the middle node of the list 
void Middle_node2(Node* head)
{
    Node* fast = head;
    Node* slow = head;
    if(head != NULL){
    while(fast != NULL && fast-> next != NULL )
    {
        fast = fast -> next -> next;
        slow = slow -> next;
    }}
    cout << slow -> data;
    
}


int main()
{
	Node * Head = NULL;

// 	Inserting element at the beigning
    push(&Head , 6);
	push(&Head , 5);
	push(&Head , 4);
	push(&Head , 3);
	push(&Head , 2);
	push(&Head , 1);

// Middle element in linked list Method 1
	Middle_node1(Head);
// Middle element in linked list Method 2	
    Middle_node2(Head);
    
	return 0;
}