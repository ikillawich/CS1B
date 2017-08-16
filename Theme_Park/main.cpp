#include "myheader.h"

using namespace std;



int main()

{
    const int KIDS = 5;
    float fee = 0;
    int age;
    string name;
    string vege;
    string cheese;
    string ride;
    string food;

    cout << "Welcome to the Theme Park Planner! Please input each kid's information." << endl;


    for(int i = 1; i < KIDS + 1; i++) {


        cout << "" << endl;
        cout << "Kid #" << i << ":" << endl;
        cout << "What is your kid's name? "; cin >> name; cin.ignore(1000, '\n');
        cout << "How old is the kid? "; cin >> age;
        cout << "Vegetarian (Y/N)? "; cin >> vege;
        cout << "Does he/she like cheese (Y/N)? "; cin >> cheese;
        cout << "" << endl;

        if (age < 5) {
                ride = "the Ferris Wheel and will be visiting the Sheep Petting Zoo.";
        }

        else if (age < 13) {
                ride =  "the Tea Cups and will be playing Laser Tag.";
                fee += 15;
        }
        else {
                ride = "the Roller Coaster and the Zip Line.";
                fee += 20;
        }

        if (vege == "Y") {
            if (cheese == "Y") {
                food = "Cheese Pizza";
                fee += 2.50;
            }

            else {
                food = "Happy Garden Meal";
                fee += 1.75;
            }
        }

        else if (vege == "N") {

            if (cheese == "Y") {

                food == "Cheeseburger";
                fee += 3.50;
            }
            else {
                food = "Hamburger";
                fee += 3.25;
            }
        }

        cout << name << " will be going on " << ride << endl;
        cout << "Pack a " << food << " for " << name << "!" << endl;
        cout << endl;

    }
    cout << "The total cost for the day is:      $" << fee << endl;
    cout << "The average cost per kid is:        $" << fee/KIDS <<endl;
    return 0;
}
