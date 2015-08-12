#include <iostream>
#include "SimpleLinkedList.h"

using namespace std;

SimpleLinkedList sll(1);

void testNewObject() {
	sll.add(13);
	sll.add(1313);
	sll.addLast(1234);

	cout << "Original List:" << endl;
	cout << sll << endl;
	cout << "Original Size: " << sll.getSize() << endl;
}

void testCopiedByCopyConstructor() {
	SimpleLinkedList copied(sll);
	copied.add(2999);
	cout << "Copied via Copy Constructor" << endl;
	cout << copied << endl;
	cout << "Copied Size: " << copied.getSize() << endl;
}

void testCopiedByAssignmentOperator() {
	SimpleLinkedList assignment;
	assignment = sll;
	assignment.add(5000);
	cout << "Copied via Assignment Operator:" << endl;
	cout << assignment << endl;
	cout << "Assignment Size: " << assignment.getSize() << endl;
}

void testAssignmentOfEmptyObjectToNewObject() {
	SimpleLinkedList empty = SimpleLinkedList();
	SimpleLinkedList emptyCopy1 = SimpleLinkedList(empty);
	SimpleLinkedList emptyCopy3 = empty;
	SimpleLinkedList emptyCopy17 = SimpleLinkedList(empty);
	empty.addLast(3);
	cout << empty << endl;
	cout << emptyCopy1 << endl;
	cout << emptyCopy3 << endl;
	emptyCopy17 = emptyCopy3;
	empty = empty; //self assignment test
	cout << empty << endl;
}

/////////////////////////////////////////////////////////////////////////
/// PROGRAM ENTRY POINT                                   ///////////////
/////////////////////////////////////////////////////////////////////////

int main() {

	testNewObject();
	testCopiedByCopyConstructor();
	testCopiedByAssignmentOperator();
	testAssignmentOfEmptyObjectToNewObject();

	return 0;
}