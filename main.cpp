#include <iostream>
#include <string>
using namespace std;

int main() {

    int items = 50;
    float cost_per_item = 9.99;
    double total_cost = items * cost_per_item;
    string currency = 'Egp';

    // Print variables
    cout << "Number of items: " << items << "\n";
    cout << "Cost per item: " << cost_per_item << currency << "\n";
    cout << "Total cost = " << total_cost << currency << "\n";

}
