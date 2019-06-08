//queue by linklist
#include<iostream>
#include"llsample.cpp"

using namespace std;

class queue{
	public:
	node * font;
	node * end;
	linklist l1; 
	
	//constructor
	queue(){
		font = l1.head;
		end = l1.getpos();
	}
void enqueue(int val){
	l1.insert(val);
	font = l1.head;
}
int count(){
	return l1.count();
}
void dequeue(){
	l1.deleteat(count());
	end = l1.getpos();
}
void Display(){
	l1.display();
}

};
int main(){
	queue q1;
	
	for( int i = 1; i < 6; i++){
	q1.enqueue(i);
	}
	q1.Display();
	q1.dequeue();
	q1.Display();
	q1.enqueue(6);
	q1.Display();
	q1.dequeue();
	q1.Display();
}































