#include <iostream>
#include<list>
#include<iterator>
#include<math.h>
using namespace std;

class Node{
    public:
    int data; 
    Node* next = NULL;
};

Node* newnode(int key){
    Node* temp = new Node();
    temp->data = key;
    temp->next = NULL;
    return temp; 
}

void push(Node** root, int key){
    Node* temp = newnode(key);
    if((*root) == NULL){
        *root = temp;
        return;
    } 
    Node* head = *root;
    Node* prev = NULL;
    
    if(head->data > key){
    	temp->next = head;
    	*root = temp;
    	return;
	}
    if(head->data < key){
    	if(head->next == NULL){
    		head->next = temp;
		}
		else{
			while(head->data < key and head->next != NULL) {
				prev = head;
				head = head->next;
			}
			if(head->next == NULL and head->data < key){
				head->next = temp;
				return;
			}
			temp->next = head;
			prev->next = temp;
		}
	}
}

void getMedian(Node* root, int i){
    if(!root) return;
    if(i%2 == 0){
        Node* slow = root, *fast = root;
        while(fast!= NULL and fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        cout<<slow->data<<endl;
    }
    else{
        Node* slow = root, *fast = root, *prev = NULL;
        while(fast!=NULL and fast->next!=NULL){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        float t= ((slow->data + prev->data)/2);
        cout<<floor(t)<<endl;
    }
}

void print(Node* root){
	while(root){
		cout<<root->data<<" ";
		root = root->next;
	}
}

void findMedian(int arr[], int n){
    Node* root = NULL;
    for(int i = 0; i<n; i++){
        push(&root, arr[i]);
        getMedian(root, i);
    }
    delete root;
}

int main() {
	int n; cin>>n;
	int arr[n];
	for(int i = 0; i<n; i++) cin>>arr[i];
	findMedian(arr, n);
	return 0;
}
