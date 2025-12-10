// COMSC-210 | Final Pt.2 | Diksha Tara Natesan
// IDE used: Vim/Terminal

#include <iostream>
#include <string>
#include <deque>
#include <vector>
using namespace std;

const int MAX_NAMES = 100;
const int MAX_DRINKS = 15;

struct Node{
	string name;
	string drink;
	Node *next;
};

void insert(Node *&, string names[MAX_NAMES], string drinks[MAX_DRINKS]);
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
		"Piper", "Leo", "Maya", "Xavier", "Isla", "Asher", "Ivy", "Diksha", "Niya", "Divya"};
	string drinks[MAX_DRINKS] = {"Espresso", "Americano", "Latte", "Cappuccino", "Flat White", "Mocha", "Macchiato", "Cortado", "Cold Brew", "Iced Latte", "Iced Coffee", "Affogato", "Chai Latte", "Matcha Latte", "Frappuccino"};

	insert(coffee, names, drinks);
	insert(coffee, names, drinks);
	insert(coffee, names, drinks);

	deque<string> muffin;		//assuming all muffins are the same, any customer in queue wants one muffin
	muffin.push_back(names[(rand() % MAX_NAMES)]);
	muffin.push_back(names[(rand() % MAX_NAMES)]);
	muffin.push_back(names[(rand() % MAX_NAMES)]);

	vector<string> bracelet;	//assuming all bracelets are the same, any customer in queue wants one bracelet
	bracelet.push_back(names[(rand() % MAX_NAMES)]);
	bracelet.push_back(names[(rand() % MAX_NAMES)]);
	bracelet.push_back(names[(rand() % MAX_NAMES)]);

	for (int i = 0; i < 10; i++){
		cout << "\n****************************************************************************************" << endl;
		cout << "ROUND " << i+1 << ":" << endl;
		cout << "\nCoffee Booth Queue:" << endl;

		if (coffee != nullptr){
			Node *curr = coffee;
			coffeePrint(curr);
			while (curr->next != nullptr){
				curr = curr->next;
				coffeePrint(curr);
			}
			cout << "\n\t" << coffee->name << " served." << endl;
			coffee = coffee->next;	//customer served
		}else
			cout << "\tEMPTY" << endl;

		int prob = rand() % 2;	//rand num 0-1
		if (prob == 0)
			insert(coffee, names, drinks);

		cout << "\nMuffin Booth Queue:" << endl;
		if (!muffin.empty()){
			for (int i = 0; i < muffin.size(); i++)
				cout << '\t' << muffin[i] << endl;
			cout << "\n\t" << muffin[0] << " served." << endl;
			muffin.pop_front();		//customer served
		}else
			cout << "\tEMPTY" << endl;
		prob = rand() % 2;
		if (prob == 0)
			muffin.push_back(names[(rand() % MAX_NAMES)]);

		cout << "\nBracelet Booth Queue:" << endl;
		if (!bracelet.empty()){
			for (int i = 0; i < bracelet.size(); i++)
				cout << '\t' << bracelet.at(i) << endl;
			cout << "\n\t" << bracelet.front() << " served." << endl;
			vector<string> temp;
			for (int i = 1; i < bracelet.size(); i++)
				temp.push_back(bracelet.at(i));
			bracelet = temp;		//customer served
		}else
			cout << "\tEMPTY" << endl;
		prob = rand() % 2;
		if (prob == 0)
			bracelet.push_back(names[(rand() % MAX_NAMES)]);
	}

}

void insert(Node *&n, string names[MAX_NAMES], string drinks[MAX_DRINKS]){
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
		curr = curr->next;
	curr->next = temp;
}

void coffeePrint(Node *n){
	cout << '\t' << n->name << "\tOrder: " << n->drink << endl;
}