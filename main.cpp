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
	temp1->name = "Tara";
	temp1->drink = "Latte";
	temp1->next = nullptr;
	coffee->next = temp1;
	Node *temp2 = new Node;
	temp2->name = "Shawn";
	temp2->drink = "Iced Coffee";
	temp2->next = nullptr;
	coffee->next->next = temp2;

	string names[100];
	string drinks[15];

	Node *curr = coffee;
	coffeePrint(curr);
	while (curr->next != nullptr){
		curr = curr->next;
		coffeePrint(curr);
	}

	for (int i = 0; i < 10; i++){



	}

}

void coffeePrint(Node *n){
	cout << n->name << "\tOrder: " << n->drink << endl;
}

