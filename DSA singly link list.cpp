#include<iostream>
using namespace std;
class Node{
	int data;
	Node *next;
	public:
		Node *first;
		void init(){
			first=NULL;
		}
	void f_insert(int d){
		Node *current= new Node();
		current->data=d;
		current->next=NULL;
		if(first==NULL){
			first=current;
		}
		else{
			current->next=first;
			first=current;
		}
	}	
	int f_delete(){
		if(first==NULL){
			cout<<"empty list"<<endl;
			return 999;
		}
		Node *temp=first;
		int x=first->data;
		first=first->next;
		delete (temp);
		return x;
	}
	void display()
	{
		Node *temp=first;
		while(temp!=NULL)
		{
			cout<<temp->data<<endl;
			temp=temp->next;
		}
	}
};

int main()
{
	Node obj;
	obj.init();
	obj.f_insert(40);
	obj.f_insert(20);
	obj.f_insert(29);
	obj.display();
	cout<<"the deleted element is:"<<
	obj.f_delete()<<endl;
	obj.display();
	return 0;
}
