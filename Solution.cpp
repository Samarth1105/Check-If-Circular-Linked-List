#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};

class Solution {
  public:
    bool isCircular(Node *head) {
        if(head==NULL){
            return true;
        }
        Node* ptr= head;
        while(ptr->next!=NULL){
            ptr= ptr->next;
            if(ptr==head){
                return true;
            }
        }
        return false;
    }
};
