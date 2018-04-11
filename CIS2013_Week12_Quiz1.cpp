#include <iostream>
#include <cstring>
#include <string>
using namespace std;
// the class will remember all data changes in the main
class Car {
	
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
			cout << "					The value of your house is: " << value << " $$$ " << endl;
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
			
			cout << "Set color of your car : " << endl;
			cin >> color;
				
		}
		void set_year () {
			
			cout << "Set year of your car : " << endl;
			cin >> year;
				
		}
		
		void set_windows () {
		
			cout << "Set amount of windows in your house : " << endl;
			cin >> windows;
				
		}