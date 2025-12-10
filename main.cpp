// COMSC-210 | Final Pt.2 | Diksha Tara Natesan
// IDE used: Vim/Terminal

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

const int MAX_NAMES = 100;
const int MAX_DRINKS = 15;

struct Node{
	string name;
	string drink;
	Node *next;
};

void insert(Node *);
void coffeePrint(Node *);

int main(){
	srand(time(0));
	Node *coffee = nullptr;
	string names[MAX_NAMES] = {"Ava", "Liam", "Olivia", "Noah", "Emma", "Ethan", "Sophia", "Mason", "Isabella", "Logan",
		"Mia", "Lucas", "Amelia", "Elijah", "Harper", "James", "Charlotte", "Benjamin", "Evelyn", "Henry",
		"Abigail", "Alexander", "Ella", "Daniel", "Aria", "Matthew", "Scarlett", "Joseph", "Grace", "David",
		"Chloe", "Samuel", "Lily", "Andrew", "Nora", "Christopher", "Victoria", "William", "Penelope", "Gabriel",
		"Layla", "Owen", "Riley", "Caleb", "Zoey", "Nathan", "Hannah", "Isaac", "Ellie", "Jonathan",
		"Paisley", "Julian", "Aubrey", "Christian", "Luna", "Joshua", "Savannah", "Hunter", "Brooklyn", "Aaron",
		"Stella", "Charles", "Violet", "Dominic", "Claire", "Evan", "Lucy", "Gavin", "Madison", "Wyatt",
		"Camila", "Jason", "Naomi", "Adrian", "Hazel", "Robert", "Aurora", "Jordan", "Elena", "Parker",
		"Alice", "Brayden", "Sadie", "Miles", "Ruby", "Cole", "Julia", "Zachary", "Brielle", "Tyler",
		"Piper", "Leo", "Maya", "Xavier", "Isla", "Asher", "Ivy"};
	string drinks[MAX_DRINKS] = {"Espresso", "Americano", "Latte", "Cappuccino", "Flat White", "Mocha", "Macchiato", "Cortado", "Cold Brew", "Iced Latte", "Iced Coffee", "Affogato", "Chai Latte", "Matcha Latte", "Frappuccino"};

	insert(coffee, names, drinks);
	insert(coffee, names, drinks);
	insert(coffee, names, drinks);

	Node *curr = coffee;
	coffeePrint(curr);
	while (curr->next != nullptr){
		curr = curr->next;
		coffeePrint(curr);
	}

	for (int i = 0; i < 10; i++){



	}

}

void insert(Node *n, string[] names, string[] drinks){
	Node *temp = new Node;
	int index = rand() % MAX_NAMES;	//random number 0-99
	temp->name = names[index];
	index  = rand() % MAX_DRINKS;	//rand num 0-14
	temp->drink = drinks[index];
	temp->next = nullptr;
	if (!n){
		n = temp;
		return;
	}
	Node *curr = n;
	while (curr->next != nullptr)
		curr = curr.next;
	curr->next = temp;
}

void coffeePrint(Node *n){
	cout << n->name << "\tOrder: " << n->drink << endl;
}

