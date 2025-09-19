/* Created by Alex Keeling
 Chapter 4 Homework */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    // Setting the values of the products the movie theater provides per instructions
    int adult_ticket = 12.00;
    int child_ticket = 7.00;
    float small_popcorn = 4.50;
    int large_popcorn = 6.00;
    int soft_drink = 3.00;
    // Setting the tax rate so it can not change
    float TAX_RATE = 1.08;
    // Setting the decimal too 2 spaces for the remainder of the code
    cout << setprecision(2) << fixed;
    
    // Displaying the menu
    cout << "Adult Movie Ticket: $12.00" << endl;
    cout << "Child Movie Ticket: $7.00" << endl;
    cout << "Small Popcorn: $4.50" << endl;
    cout << "Large Popcorn: $6.00" << endl;
    cout << "Soft Drink: $3.00" << endl;
    
    // Beginning to ask the user to enter the number of tickets they would like
    int a_tickets, c_tickets, s_pop, l_pop, sodas;
    string user_soda;
    
    cout << "How many adult tickets would you like to purchase?" << endl;
    cin >> a_tickets;
    cout << "How many child tickets would you like to purchase?" << endl;
    cin >> c_tickets;
    cout << "How many small popcorns would you like to purchase?" << endl;
    cin >> s_pop;
    cout << "How many large popcorns would you like to purchase?" << endl;
    cin >> l_pop;
    cout << "Would you like to purchase any soft drinks? (using no capital letters provide an answer yes or no)" << endl;
    cin >> user_soda;
    // Creating a dicision structure for the user
    if (user_soda == "yes") {
        cout << "How many soft drinks would you like?" << endl;
        cin >> sodas;
    } else if (user_soda == "no") {
        cout << "You have chosen to not purchase a soft drink" << endl;
        sodas = 0;
    } else {
        cout << "Invalid input. Setting sodas to 0." << endl;
        sodas = 0;
    }
    
    // Beginning to add the total for the users selections
    float tot_ticket, tot_pop, tot_soda, preTax_tot, total;
    tot_ticket = adult_ticket * a_tickets + child_ticket * c_tickets;
    tot_pop = small_popcorn * s_pop + large_popcorn * l_pop;
    tot_soda = soft_drink * sodas;
    preTax_tot = tot_ticket + tot_pop + tot_soda;
    total = preTax_tot * TAX_RATE;
    
    //Displaying the total
    cout << "The total for your movie tickets and snacks is: $" << total << endl;
    
    
    
    return 0;
}

