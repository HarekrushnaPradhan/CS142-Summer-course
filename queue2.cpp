//queue from scratch
#include<iostream>
using namespace std;

class node{
	public:
	int val;
	node * next;

	node(){
	next = NULL;
	}
};

class queue{
	public:
	node * front;
	node * end;

	queue(){
	front = NULL;
	end = NULL;
	}

void enqueue(int val){
	if ( front == NULL){
	node * t = new node();
	t->val = val;
	front = t;
	}
	else{
	node * t = new node();
	t->val = val;
	t->next = front;
	front = t;
	}
	
	node * current = front;
	while( current->next != NULL){
	current = current->next;
	end = current;
	}
}

void dequeue(){
	node * temp = end;
	node * current = front;
	while( current->next != end ){
	     current = current->next;
	}
	current->next = NULL;
	end = current;
	delete temp;

}

void display(){
	node * current = front;
	while ( current != NULL){
		cout << current->val << "->";
		current = current->next;
	}
	cout << "NULL" <<endl;
}







};
int main(){
	queue q1;
	q1.enqueue(1);
	q1.enqueue(2);
	q1.enqueue(3);
	q1.display();
	q1.dequeue();
	q1.display();
	q1.dequeue();
	q1.display();


return 0;
}











