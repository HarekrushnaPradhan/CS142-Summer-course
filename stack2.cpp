#include<iostream>
using namespace std;

class node{
	public:
	node * next;
	int val;

	//constuctor
	node(){
		next = NULL;
	}
};

class stack{
	public:
	node * top;
	node * head;
	//constructor
	stack(){
		top = head = NULL;
	}	

void push (int val){
	//when there is no node to begin with
	if ( head == NULL){
	node * t = new node();
	t->val = val;
	head = t;
	}
	//if there is node
	else{
	node * t = new node();
	t->val = val;
	t->next = head;
	head = t;
	}
}
void pop (){
	if ( head == NULL){
	cout << "There is nothing in the stack to remove."<<endl;	
	}
	else{
	node * current = head;
	head = current->next;
	delete current;
	}
}

void display(){
	node * current = head;
	while ( current != NULL){
		cout << current->val << "->";
		current = current->next;
	}
	cout<< "NULL"<<endl;
}
};

int main(){
	stack s1;
	
	for( int i =1; i < 6; i++){
	s1.push(i);
	}
	/*s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.push(4);
	s1.push(5);*/
	s1.display();
	s1.pop();
	s1.display();
	s1.pop();
	s1.display();
	s1.pop();
	s1.display();
	s1.pop();
	s1.display();
	s1.pop();
	s1.display();
	s1.pop();
	s1.display();
}





