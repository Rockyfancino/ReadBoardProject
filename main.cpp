#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
//#include "Player.h"
using namespace std;
//using std::getline;


/*int sumArray(inptValues[])
{
	int sum = 0;
	for(int i = 0; i < inptValues.size(); i++)
	{
		sum += inptValues[i];
	}
	return sum;
}*/

//  I'm trying to write a function that continues to
//  write 1,2 ,3 to infinity and box it in an empty vector

/*vector<int> Increment()
{
	vector<int> emptyList{};
	int a = 0;

	while (a) {
		++a;
		emptyList.push_back(a);
		emptyList.push_back(, );
	}
	return emptyList;
}*/

/*void displayArray(int array[], int size)
{
	cout << "{";
	for (int i = 0; i < size; i++)
	{
		// you'll see this pattern a lot for nicely formatting
		// lists--check if we're past the first element, and
		// if so, append a comma
		if (i != 0)
		{
			cout << ", ";
		}
		cout << array[i];
	}
	cout << "}";
}*/

/*class Player {
	//attributes
	string name;
	int health;
	int xp;

	//methods
	void talk(string);
	bool is_dead();
};*/

/*class Player {
private:
	std::string name;
	int health;
	int xp;

public:
	std::string get_name() {
		return name;
	}
	int get_health() {
		return health;
	}
	int get_xp() {
		return xp;
	}

	Player(std::string name_val = "None", int health = 0, int xp = 0);
	// Copy constructor
	Player(const Player &source);
	// Destructor
	~Player() {
		cout << "Destructor called for: " << name << endl;
	}
};

Player::Player(std::string name_val, int health_val, int xp_val)
	: name(name_val), health(health_val), xp(xp_val) {
	cout << "3 args constructor called" + name << endl;
}

Player::Player(const Player &source)
	: name(source.name), health(source.health), xp(source.xp) {
	cout << "Copy constructor - made copy of: " << source.name << endl;
}

void display_player(Player p) {
	cout << "Name: " << p.get_name() << endl;
	cout << "Health: " << p.get_health() << endl;
	cout << "XP: " << p.get_health() << endl;
}*/

int main()
{
    char test = 'k';
    char *ptr = &test;

    cout << ptr << endl;
    cout << *ptr << endl;

	/*Player empty;

	display_player(empty);

	Player frank("Frank");
	Player hero("Hero", 100);
	Player villain("Villain", 100, 55);*/

	//{
	//	Player slayer;
	//	slayer.set_name("Slayer");
	//}

	//{
	//	Player frank;
	//	frank.set_name("Frank");
	//	Player hero("Hero");
	//	hero.set_name("Hero");
	//	Player villian("Villian", 100, 12);
	//	villian.set_name("Villian");
	//}


	/*Player frank;
	Player hero;

	Player *enemy = nullptr;
	enemy = new Player;*/

	/*int i, n;
	float arr[100];

	cout << "Enter total number of elements(1 to 100): ";
	cin >> n;
	cout << endl;

	// Store number entered by the user
	for (i = 0; i < n; ++i)
	{
		cout << "Enter Number " << i + 1 << " : ";
		cin >> arr[i];
	}

	// Loop to store largest number to arr[0]
	for (i = 1; i < n; ++i)
	{
		// Change < to > if you want to find the smallest element
		if (arr[0] < arr[i])
			arr[0] = arr[i];
	}
	cout << "Largest element = " << arr[0];*/

	cin.get();
}
