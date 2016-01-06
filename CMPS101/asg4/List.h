//------------------------------------------------------------------------------------------
// Name: Sean McGrath
// ID: ssmcgrat
// Assignment: CMPS101 Programming Assignment 2
//
// List.h
// Header file for List ADT
//------------------------------------------------------------------------------------------

#ifndef _LIST_H_INCLUDE_
#define _LIST_H_INCLUDE_

// Exported type----------------------------------------------------------------------------
typedef struct ListObj* List;

// Constructors-Deconstructors ------------------------------------------------

List newList(void);

void freeList(List* pL);

// Access functions ----------------------------------------------------------

int isEmpty(List L);

int length(List L);

int getIndex(List L);

int front(List L);

int back(List L);

int getElement(List L);

int equals(List A, List B);

// Manipulation procedures -----------------------------------------------------

void clear(List L);

void moveTo(List L, int i);

void movePrev(List L);

void moveNext(List L);

void prepend(List L, int data);

void append(List L, int data);

void insertBefore(List L, int data);

void insertAfter(List L, int data);

void deleteFront(List L);

void deleteBack(List L);

void delete(List L);

// Other operations ----------------------------------------------------------

void printList(FILE* out, List L);

List copyList(List L);

#endif
