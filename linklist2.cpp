//practice link list
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
class linklist{
	public: 
	node * head;

	//constuctor
	linklist(){
		head = NULL;
	}
// insert function
void insert(int val){
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
void del(){
	if ( head == NULL){}
	else{
	node * current = head;
	head = current->next;
	delete current;
	}
}
int count(){
	node * current = head;
	int count = 0;
	while ( current != NULL){
	current = current->next;
	count++;
	}
 return count;
}
void insertat(int val, int pos){
	//if insert at first pos
	if ( pos == 1){
	insert( val);
	}
	else {
	node * t = new node;
	t->val = val;

	node * current = head;
	int i(1);	
	while ( i != (pos-1) ){
		current = current->next;
		i++;
		}
	t->next = current->next;
	current->next = t;
	}
}
void deleteat(int pos){
	if( pos == 1){
	del();
	}
	else{
	node * current = head;
	int i(1);
	while( i != pos-1){
		current = current->next;
		i++;
		}
	node * t;
	t = current->next;
	current->next = current->next->next;
	delete t;
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


bool compare(node * a, node * b){
	//if both list are empty
	if (a == NULL && b == NULL){
		return true;
	}
	//if both lists are not empty, then data of the curerrent node must match
	//and same should be true for rest of the node
	 else if ( a == NULL || b == NULL){
		return false;
	}

	if (a->val == b->val){
		return compare( a->next , b->next);
	}
	else{ 
		return false;
	}
}



int main(){
	linklist l1;
	
	for (int i = 5 ; i > 0; i--){
		l1.insert(i);
	}
	linklist l2;
	
	for(int i = 4 ; i > 0; i--){
		l2.insert(i);
	}
	if( compare (l1.head, l2.head) == true ){
		cout << "identical"<<endl;	
	}
	else { 
		cout << "not identical"<<endl;  
	 }
	l1.display();
	l1.del();
	l1.display();

	cout << "The number of node in the linklist is "<<l1.count();
	cout<<"."<<endl;
	l1.insertat(1,1);
	l1.insertat(0,4);
	l1.insertat(6,7);
	l1.display();
	l1.deleteat(1);
	l1.display();
	l1.deleteat(3);
	l1.display();
	


}






