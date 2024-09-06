//Gabriel A. Sanchez Rivera, GabrielSR23, 801238372
#include <iostream>
#include <iomanip> // Used for setwidth and setprecision.
using namespace std;

int main(){

    // Display the purpose of the program.
    cout << "This program the Gross and Net Box Office profit and Distributors profit of a movie in a teather." << endl;

    // Declare variables of the program
    int adult_tickets, child_tickets;
    double gross_profit, net_profit, distributors_profit;
    char movie_name;

    // Ask for user data
    cout << "Enter the name of the movie: " << endl;
    cin >> movie_name;

    cout << "Enter the amount of adult tickets sold: " << endl;
    cin >> adult_tickets;
    
    cout << "Enter the amount of child tickets sold: " << endl;
    cin >> child_tickets;

    // Calculate the Gross profit and Net profit
    gross_profit = (adult_tickets * 10) + (child_tickets * 6);
    net_profit = (gross_profit / 100) * 20; 

    // Calculate the Distributors profit
    distributors_profit = gross_profit - net_profit; //Calculates the difference from the gross profit and the net profit.

    // Display 
    cout << adult_tickets << endl;
    cout << child_tickets << endl;
    cout << gross_profit << endl;
    cout << net_profit << endl;
    cout << distributors_profit << endl;
return 0;
}

