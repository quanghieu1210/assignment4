#include <iostream>
#include <string>
using namespace std;

class RetailItem
{
private:
    string description;
    int unitsOnHand;
    double price;

public:
    // Constructor
    RetailItem(string d = "", int u = 0, double p = 0.0)
    {
        description = d;
        unitsOnHand = u;
        price = p;
    }

    // Mutator functions
    void setDescription(string d)
    {
        description = d;
    }

    void setUnitsOnHand(int u)
    {
        unitsOnHand = u;
    }

    void setPrice(double p)
    {
        price = p;
    }

    // Accessor functions
    string getDescription() const
    {
        return description;
    }

    int getUnitsOnHand() const
    {
        return unitsOnHand;
    }

    double getPrice() const
    {
        return price;
    }
};

int main()
{
    // Create three RetailItem objects
    RetailItem item1("Jacket", 12, 59.95);
    RetailItem item2("Designer Jeans", 40, 34.95);
    RetailItem item3("Shirt", 20, 24.95);

    // Display the data for each item
    cout << "Item #1:\n";
    cout << "Description: " << item1.getDescription() << endl;
    cout << "Units on hand: " << item1.getUnitsOnHand() << endl;
    cout << "Price: $" << item1.getPrice() << endl << endl;

    cout << "Item #2:\n";
    cout << "Description: " << item2.getDescription() << endl;
    cout << "Units on hand: " << item2.getUnitsOnHand() << endl;
    cout << "Price: $" << item2.getPrice() << endl << endl;

    cout << "Item #3:\n";
    cout << "Description: " << item3.getDescription() << endl;
    cout << "Units on hand: " << item3.getUnitsOnHand() << endl;
    cout << "Price: $" << item3.getPrice() << endl << endl;

    return 0;
}
