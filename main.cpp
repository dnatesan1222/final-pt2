// COMSC-210 | Final Pt.2 | Diksha Tara Natesan
// IDE used: Vim/Terminal

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct Node{
	string name;
	string drink;
	Node *next;
};

void coffeePrint(Node *);

int main(){
	Node *coffee = nullptr;
	Node *temp = new Node;
	coffee = temp;
	temp->name = "Diksha";
	temp->drink = "Mocha";
	temp->next = nullptr;
	Node *temp1 = new Node;
	temp->name = "Tara";
	temp->drink = "Latte";
	temp->next = nullptr;
	coffee->next = temp1;
	Node *temp2 = new Node;
	temp->name = "Shawn";
	temp->drink = "Iced Coffee";
	temp->next = nullptr;
	coffee->next->next = temp2;

	for (int i = 0; i < 10; i++){



	}

}

void coffeePrint(Node *n){
	cout << n-> 

}

