#include <iostream>
#include <cstring>
#include <string>
using namespace std;
// the class will remember all data changes in the main
class House {
	
		public:
				
		string color = "n/a";
		int g_doors = 0;
		int year = 0;
		int doors = 0;
		int windows = 0;
		
		void print () {
			int value = 1000*g_doors + year + 500*doors + 750*windows+ 5000;
			cout << "*************************************************************************************************************************************	" << endl;
			cout << endl;
			cout << "					The value of your " << color << " house is: " << value << " $$$ " << endl;
			cout << "*************************************************************************************************************************************	" << endl;
			cout << endl;
		}
		
		void set_g_doors () {
			
			cout << "Set amount of garage doors in your house : " << endl;
			cin >> g_doors;
			
		}
		void set_doors () {
		
			cout << "Set amount of doors in your house : " << endl;
			cin >> doors;
				
		}
		void set_color () {
			
			cout << "Set color of your house : " << endl;
			cin >> color;
				
		}
		void set_year () {
			
			cout << "Set year of your house : " << endl;
			cin >> year;
				
		}
		
		void set_windows () {
		
			cout << "Set amount of windows in your house : " << endl;
			cin >> windows;
				
		}
};

int main () {
	
	 char c, y, p, g, d, w;
	 // where : c = color,  y = year,  p = print, g = g_doors, d = doors, w = windows; 
	char choice;
	House house;
	
	cout << endl;
	cout << "			  *************************************************" << endl;
	cout << endl;
	cout << "					Welcome to constructor bureau! " << endl;
	cout << endl;
	cout << " " << endl;
	cout << "Set your House's color  "<< endl;
	cout << "Set your House's year  " << endl;
	cout << "Set amount of garage doors in your house  " << endl;
	cout << "Set amount of doors in your house " << endl;
	cout << "Set amount of windows in your house " << endl;
	
	cout << "Print your House's value " << endl;
	cout << endl;
	cout << " " << endl;
	
	house.set_color ();
	house.set_year ();
	house.set_g_doors ();
	house.set_doors ();
	house.set_windows ();
	
	house.print ();
	
	do {
	cout << " " << endl;
	cout << "Select an action: " << endl;
	cout << " " << endl;
	cout << "Set your House's color (c)  "<< endl;
	cout << "Set your House's year (y)  " << endl;
	cout << "Set amount of garage doors in your house (g)  " << endl;
	cout << "Set amount of doors in your house (d) " << endl;
	cout << "Set amount of windows in your house (w) " << endl;
	
	cout << "Print your House's value (p) " << endl;
	cout << endl;
	cout << "		*****		" << endl;
	
	cout << "Your choice is : ";
	cin >> choice;
		switch (choice)
		{
		case 'c' :
		house.set_color ();
		break;
		case 'y' :
		house.set_year ();
		break;
		case 'p' :
		house.print ();
		break;
		case 'g' :
		house.set_g_doors ();
		break;
		case 'd' :
		house.set_doors ();
		break;
		case 'w' :
		house.set_windows ();
		break;
				
		default : 
		cout << "Illegal value.";
		}
	}
	while (1);
		
	return 0;
	}
	