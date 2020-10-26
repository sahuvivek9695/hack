#include <iostream>
using namespace std;

struct Node{
	int data;
	struct Node *next;
};

struct Node *head;

struct Node *addNode(int x){
	if(head==NULL){
		head=new struct Node;
		head->data=x;
		head->next=NULL;
		return head;
	}
	struct Node *temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=new struct Node;
	temp->next->data=x;
	temp->next->next=NULL;
	return temp->next;
}

void print(){
	struct Node *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"->"<<endl;
		temp=temp->next;
	}
}

int main(){
	addNode(1);
	addNode(2);
	addNode(3);
	struct Node *first=addNode(4);
	addNode(5);
	addNode(6);
	addNode(7);
	struct Node *second=addNode(8);
	second->next=first;
	
	struct Node *slow=head;
	struct Node *fast=head;
	bool loopExist=false;
	while( fast->next && slow && fast ){
		slow=slow->next;
		fast=fast->next->next;
		
		if(slow==fast){
			loopExist=true;
			break;
		}
	}
	
	cout<<"Loop Exist : "<<loopExist<<endl;
	
	//print();
	return 0;
}