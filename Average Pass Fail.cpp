#include <iostream>
using namespace std;

// Define an enum to represent pass or fail statuses
enum enpassfail { pass = 1, fail = 2 };

// Function to read three marks from the user
void readnumber(int& mark1, int& mark2, int& mark3) {
    cout << "Enter your marks:\n";
    cout << "Mark 1: "; // Prompt for the first mark
    cin >> mark1;
    cout << "Mark 2: "; // Prompt for the second mark
    cin >> mark2;
    cout << "Mark 3: "; // Prompt for the third mark
    cin >> mark3;
}

// Function to calculate the sum of three marks
int sum3marks(int mark1, int mark2, int mark3) {
    return mark1 + mark2 + mark3; // Return the sum of marks
}

// Function to calculate the average of three marks
float calculateaverage(int mark1, int mark2, int mark3) {
    return static_cast<float>(sum3marks(mark1, mark2, mark3)) / 3; // Convert sum to float for precise division
}

// Function to determine if the average is a pass or fail
enpassfail checkaverage(float average) {
    if (average >= 50) // Pass if the average is greater than or equal to 50
        return enpassfail::pass;
    else // Otherwise, it's a fail
        return enpassfail::fail;
}

// Function to print the average and pass/fail result
void printmark(float average) {
    cout << "Your average is: " << average << endl; // Print the average
    if (checkaverage(average) == enpassfail::pass) // Check if it's a pass
        cout << "You pass." << endl;
    else // Otherwise, it's a fail
        cout << "You fail." << endl;
}

// Main function of the program
int main() {
    int mark1, mark2, mark3; // Declare variables for the marks
    readnumber(mark1, mark2, mark3); // Call the function to read the marks
    printmark(calculateaverage(mark1, mark2, mark3)); // Calculate the average and print the result
    return 0; // Exit the program
}

