#pragma once
#include"Node.h"
 class Lista
{
public:
	Node* start;
	Node* end;
	int count;

	Lista();
	void InsertAtStart(int value);
	void InsertAtEnd(int value);
	void InsertAtPosition(int value, int position);
	Node* ExtractAtStart();
	Node* ExtractAtEnd();
	Node* ExtractAtPosition(int position);
	Node* GetNode(int value);
	int GetValue(int position);
	bool isEmpty();
	~Lista() {};

};


