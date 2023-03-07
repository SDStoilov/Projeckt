#include <iostream>
#include "header.h"
using namespace std;

int main() {
    struct NODE* pStart = new NODE;
    pStart->number = 13;
    pStart->next = NULL;
    struct NODE* pEnd = new NODE;
    pEnd->number = 11;
    pEnd->next = NULL;
    pStart->next = pEnd;
    struct NODE* pNew = new NODE;
    pNew->number = 34;
    pNew->next = NULL;
    pEnd->next = pNew;
    struct NODE* pCurrent = pStart;
    while (pCurrent != NULL) {
        cout << pCurrent->number << " ";
        pCurrent = pCurrent->next;
    }
    cout << endl;
}