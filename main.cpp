//Gabriel A. Sanchez Rivera, GabrielSR23, 801238372
#include <iostream>
#include <iomanip> // Used for setw and setprecision.
#include <string> // Used for variable movie name.
using namespace std;

int main(){

    // Display the purpose of the program.
    cout << "This program the Gross and Net Box Office profit and Distributors profit of a movie in a teather." << endl;

    // Declare variables of the program
    int adult_tickets, child_tickets;
    double gross_profit, net_profit, distributors_profit;
    string movie_name;

    // Ask for user data
    cout << "Enter the name of the movie: ";
    getline(cin, movie_name);

    cout << "Enter the amount of adult tickets sold: ";
    cin >> adult_tickets;

    cout << "Enter the amount of child tickets sold: ";
    cin >> child_tickets;

    // Calculate the Gross profit and Net profit
    gross_profit = (adult_tickets * 10) + (child_tickets * 6);
    net_profit = (gross_profit / 100) * 20; 

    // Calculate the Distributors profit
    distributors_profit = gross_profit - net_profit; //Calculates the difference from the gross profit and the net profit.

    // Set width
    const int width = 10;

    // Display the results of the program.
    cout << setprecision(2) << fixed;
    cout << "Movie name: " << setw(width) << movie_name << endl;
    cout << "Adult Tickets Sold: " << setw(width) << adult_tickets << endl;
    cout << "Child Tickets Sold: " << setw(width) << child_tickets << endl;
    cout << "Gross Box Profit: " << setw(width) << gross_profit << endl;
    cout << "Net Box Profit: " << setw(width) << net_profit << endl;
    cout << "Amount Paid To Distributor: " << setw(width) << distributors_profit << endl;

return 0;
}