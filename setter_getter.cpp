#include <iostream>

using namespace std;

class Car {
private:
    string model;

public:
    Car(string model) { // Constructor that takes a string argument called model
        this->model = model; // Initialize the private member variable model with the value of the argument
    }

    void setModel(string model) { // Setter method that takes a string argument called model
        this->model = model; // Set the private member variable model to the value of the argument
    }

    string getModel() { // Getter method that returns the value of the private member variable model
        return model;
    }
};

int main() {
    Car myCar("Ford Mustang"); // Create a new Car object called myCar with a model of "Ford Mustang"
    cout << "Model: " << myCar.getModel() << endl; // Print the current model of myCar using the getModel() method
    myCar.setModel("Chevrolet Camaro"); // Set the model of myCar to "Chevrolet Camaro" using the setModel() method
    cout << "New model: " << myCar.getModel() << endl; // Print the new model of myCar using the getModel() method
    return 0;
}
