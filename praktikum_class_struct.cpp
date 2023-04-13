#include <iostream> // Include the input/output library for C++
using namespace std; // Use the standard namespace

class PersegiPanjang{ // Define a new class called "PersegiPanjang"
    private: // Make these variables private so they can only be accessed within the class
        int panjang; // Declare a variable called "panjang" of type integer
        int lebar; // Declare a variable called "lebar" of type integer
    
    public: // Make these functions public so they can be accessed from outside the class
        PersegiPanjang(int panjang, int lebar){ // Constructor function with parameters "panjang" and "lebar"
            this->panjang = panjang; // Set the value of "panjang" to the value passed in as the "panjang" parameter
            this->lebar = lebar; // Set the value of "lebar" to the value passed in as the "lebar" parameter
        }

        void setPanjang(int panjang){ // Function to set the value of "panjang"
            this->panjang = panjang; // Set the value of "panjang" to the value passed in as the "panjang" parameter
        }

        void setLebar(int lebar){ // Function to set the value of "lebar"
            this->lebar = lebar; // Set the value of "lebar" to the value passed in as the "lebar" parameter
        }

        int getPanjang(){ // Function to get the value of "panjang"
            return panjang; // Return the value of "panjang"
        }

        int getLebar(){ // Function to get the value of "lebar"
            return lebar; // Return the value of "lebar"
        }

        int Luas(){ // Function to calculate the area of the rectangle
            return panjang * lebar; // Return the product of "panjang" and "lebar"
        }
};

int main(){ // Main function where the program starts
    PersegiPanjang psg(10,10); // Create a new instance of the "PersegiPanjang" class with dimensions of 10x10
    cout<<"Panjang: " << psg.getPanjang() << endl; // Print the value of "panjang" using the "getPanjang()" function
    cout<<"Lebar: " << psg.getLebar() << endl; // Print the value of "lebar" using the "getLebar()" function
    cout<<"Luas: " << psg.Luas(); // Print the area of the rectangle using the "Luas()" function

}
