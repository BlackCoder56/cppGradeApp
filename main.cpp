#include <iostream> // Include input/output stream library

using namespace std; // Use the standard namespace to avoid using 'std::' repeatedly

int main() // Main function - entry point of the program
{
    // grade app
    int score = 91; // Declare and initialize an integer variable 'score' with the value 91

    // Check if the score is greater than or equal to 90
    if(score >= 90)
    {
        // If the score is 90 or above, output "Grade: A"
        cout << "Grade: A";
    }
    // If score is less than 90 but greater than or equal to 80
    else if(score >= 80)
    {
        // Output "Grade: B"
        cout << "Grade: B";
    }
    // If score is less than 80 but greater than or equal to 70
    else if(score >= 70)
    {
        // Output "Grade: C"
        cout << "Grade: C";
    }
    // If score is below 70
    else
    {
        // Output "Grade: F"
        cout << "Grade: F";
    }

    return 0; // Indicate that the program ended successfully
}
