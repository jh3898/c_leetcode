//*******************************************************************
//  main.cpp
//  LinkedList_Project
//
//  Created by Karlina Beringer on June 12, 2014.
//  This driver implements the LinkedList class.
//*******************************************************************

#include "LinkedList.h"
using namespace std;

int main()
{
	// STEP 1: Create some unlinked song nodes.
	node * A = new node;
	A->song = "We Are";
	A->artist = "Vertical Horizon";

	node * B = new node;
	B->song = "I Stand Alone";
	B->artist = "Godsmack";

	node * C = new node;
	C->song = "Heir Apparent";
	C->artist = "Opeth";

	node * D = new node;
	D->song = "Fear of the Dark";
	D->artist = "Iron Maiden";

	node * E = new node;
	E->song = "Blue Monday";
	E->artist = "New Order";

	node * F = new node;
	F->song = "The Moth";
	F->artist = "Aimee Mann";

	// STEP 2: Build a list of three song nodes by appending to end of list.
	LinkedList myList;
	myList.insertNode(A, 1);
	myList.insertNode(B, 2);
	myList.insertNode(C, 3);
//	myList.insertNode(D, 4);
	//myList.printList();



	return 0;
}