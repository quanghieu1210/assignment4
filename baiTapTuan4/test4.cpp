#include <iostream>
#include <stdexcept>

class Inventory {
private:
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;
public:
    // Default constructor
    Inventory() {
        itemNumber = 0;
        quantity = 0;
        cost = 0.0;
        totalCost = 0.0;
    }
    
    // Constructor #2
    Inventory(int itemNum, double itemCost, int itemQuantity) {
        if (itemNum < 0 || itemCost < 0 || itemQuantity < 0) {
            throw std::invalid_argument("Item number, quantity, and cost cannot be negative");
        }
        itemNumber = itemNum;
        quantity = itemQuantity;
        cost = itemCost;
        setTotalCost();
    }
    
    // Setter functions
    void setItemNumber(int itemNum) {
        if (itemNum < 0) {
            throw std::invalid_argument("Item number cannot be negative");
        }
        itemNumber = itemNum;
    }
    
    void setQuantity(int itemQuantity) {
        if (itemQuantity < 0) {
            throw std::invalid_argument("Quantity cannot be negative");
        }
        quantity = itemQuantity;
        setTotalCost();
    }
    
    void setCost(double itemCost) {
        if (itemCost < 0) {
            throw std::invalid_argument("Cost cannot be negative");
        }
        cost = itemCost;
        setTotalCost();
    }
    
    void setTotalCost() {
        totalCost = quantity * cost;
    }
    
    // Getter functions
    int getItemNumber() const {
        return itemNumber;
    }
    
    int getQuantity() const {
        return quantity;
    }
    
    double getCost() const {
        return cost;
    }
    
    double getTotalCost() const {
        return totalCost;
    }
};

// Driver program
int main() {
    // Testing the Inventory class
    Inventory item1;
    std::cout << "Item number: " << item1.getItemNumber() << std::endl;
    std::cout << "Quantity: " << item1.getQuantity() << std::endl;
    std::cout << "Cost: $" << item1.getCost() << std::endl;
    std::cout << "Total cost: $" << item1.getTotalCost() << std::endl;
    
    Inventory item2(1234, 5.99, 10);
    std::cout << "Item number: " << item2.getItemNumber() << std::endl;
    std::cout << "Quantity: " << item2.getQuantity() << std::endl;
    std::cout << "Cost: $" << item2.getCost() << std::endl;
    std::cout << "Total cost: $" << item2.getTotalCost() << std::endl;
    
    item2.setQuantity(15);
    std::cout << "Updated quantity: " << item2.getQuantity() << std::endl;
    std::cout << "Updated total cost: $" << item2.getTotalCost() << std::endl;
    
    return 0;
}
