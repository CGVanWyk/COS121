#ifndef LISTASDLL_H
#define LISTASDLL_H
#include "container.h"
template <class Type>
class ListAsDLL : public container
{
public:
const ListAsDLL<Type>& operator=
(const ListAsDLL<Type> &);
//Overload the assignment operator.
void initializeList();
//Function to initialize the list to an empty state.
//Postcondition: first = nullptr; last = nullptr; count = 0;
bool isEmptyList() const;
//Function to determine whether the list is empty.
//Postcondition: Returns true if the list is empty,
//otherwise returns false.
void destroy();
//Function to delete all the nodes from the list.
//Postcondition: first = nullptr; last = nullptr; count = 0;
void print() const;
//Function to output the info contained in each node.
void reversePrint() const;
//Function to output the info contained in each node
//in reverse order.
int length() const;
//Function to return the number of nodes in the list.
//Postcondition: The value of count is returned.Type front() const;
//Function to return the first element of the list.
//Precondition: The list must exist and must not be empty.
//Postcondition: If the list is empty, the program
//terminates; otherwise, the first
//element of the list is returned.Type back() const;
//Function to return the last element of the list.
//Precondition: The list must exist and must not be empty.
//Postcondition: If the list is empty, the program
//terminates; otherwise, the last
//element of the list is returned.
bool search(const Type& searchItem) const;
//Function to determine whether searchItem is in the list.
//Postcondition: Returns true if searchItem is found in
//the list, otherwise returns false.
void insert(const Type& insertItem);
//Function to insert insertItem in the list.
//Precondition: If the list is nonempty, it must be in
//order.
//Postcondition: insertItem is inserted at the proper place
//in the list, first points to the first
//node, last points to the last node of the
//new list, and count is incremented by 1.
void deleteNode(const Type& deleteItem);
//Function to delete deleteItem from the list.
//Postcondition: If found, the node containing deleteItem
//is deleted from the list; first points
//to the first node of the new list, last
//points to the last node of the new list,
//and count is decremented by 1; otherwise
//an appropriate message is printed.
ListAsDLL();
//default constructor
//Initializes the list to an empty state.
//Postcondition: first = nullptr; last = nullptr; count = 0;
ListAsDLL(const ListAsDLL<Type>& otherList);
//copy constructor
~ListAsDLL();
//destructor
//Postcondition: The list object is destroyed.
protected:
int count;
container *first; //pointer to the first node
container *last; //pointer to the last node
private:
void copyList(const ListAsDLL<Type>& otherList);
//Function to make a copy of otherList.
//Postcondition: A copy of otherList is created and
//assigned to this list.
Type front() const;
//Function to return the first element of the list.
//Precondition: The list must exist and must not be
//empty.
//Postcondition: If the list is empty, the program
//terminates; otherwise, the first
//element of the list is returned.
Type backtrack() const;
//Function to return the last element of the list.
//Precondition: The list must exist and must not be
//empty.
//Postcondition: If the list is empty, the program
//terminates; otherwise, the last
//element of the list is returned.

};

#endif
