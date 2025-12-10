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

	string names[100] = {Ava, Liam, Olivia, Noah, Emma, Ethan, Sophia, Mason, Isabella, Logan, Mia, Lucas, Amelia, Elijah, Harper, James, Charlotte, Benjamin, Evelyn, Henry, Abigail, Alexander, Ella, Daniel, Aria, Matthew, Scarlett, Joseph, Grace, David, Chloe, Samuel, Lily, Andrew, Nora, Christopher, Victoria, William, Penelope, Gabriel, Layla, Owen, Riley, Caleb, Zoey, Nathan, Hannah, Isaac, Ellie, Jonathan, Paisley, Julian, Aubrey, Christian, Luna, Joshua, Savannah, Hunter, Brooklyn, Aaron, Stella, Charles, Violet, Dominic, Claire, Evan, Lucy, Gavin, Madison, Wyatt, Camila, Jason, Naomi, Adrian, Hazel, Robert, Aurora, Jordan, Elena, Parker, Alice, Brayden, Sadie, Miles, Ruby, Cole, Julia, Zachary, Brielle, Tyler, Piper, Leo, Maya, Xavier, Isla, Asher, Ivy};
	string drinks[15] = {Espresso, Americano, Latte, Cappuccino, Flat White, Mocha, Macchiato, Cortado, Cold Brew, Iced Latte, Iced Coffee, Affogato, Chai Latte, Matcha Latte, Frappuccino};

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
	Node *newNode = new Node;
	int index = rand() % MAX_NAMES;	//random number 0-99

}

void coffeePrint(Node *n){
	cout << n->name << "\tOrder: " << n->drink << endl;
}

