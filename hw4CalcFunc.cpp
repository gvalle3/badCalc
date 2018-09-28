/*
W15664768 CS110B Calculator Functions;
menu shown, input math operator,
input requests appropriate function
asks to continue

Errors: fix if statements and && statements to
limit int requests
*/
# include <iostream>
# include <cmath>

using namespace std;

void AddSubtract(int);
void MultDivide(int);
void PowRoot(int);
// 3 total functions, simple, exponential product
int main()
{
    //add while loop
    int choice, cue;
    cout << "*****************************************" << endl;
    cout << "\nWelcome to Lupe's Calculator! \n";
    cout << "These are your available math operators: " << endl;
    cout << "\n1. to add" << "      " << "2. to subtract" << endl;
    cout << "3. to multiply" << " " << "4. to divide" << endl;
    cout << "5. to square" << "   " << "6. to square root" << endl;
    cout << "7. to cube" << "     " << "8. to cube root" << endl;
    cout << "9. to power " << "  " << endl;
    cin >> choice;
    if (choice <= 2 ){
        AddSubtract(choice);}
    if (choice > 2 || choice <= 4){
        MultDivide(choice);}
    if (choice > 4 || choice <= 9){
        PowRoot(choice);}
    cout << "Continue? (y/n): ";
    cin >> cue;
    return 0;
}

void AddSubtract(int choice)
{
    float num1, num2, answer;
    cout << "Input 2 numbers to calculate: ";
    cin >> num1;
    cin >> num2;
    if (choice == 1)
    {
        answer = num1 + num2;
        cout << num1 << " + " << num2 << " = " << answer << endl;
    }
    if (choice == 2)
    {
        answer = num1 - num2;
        cout << num1 << " - " << num2 << " = " << answer << endl;
    }
}
void MultDivide(int choice)
{
    float num1, num2, answer;
    cout << "Input 2 numbers to calculate: ";
    cin >> num1;
    cin >> num2;
    if (choice == 3)
    {
        answer = num1 * num2;
        cout << num1 << " * " << num2 << " = " << answer << endl;
    }
    if (choice == 4)
    {
        answer = num1 / num2;
        cout << num1 << " / " << num2 << " = " << answer << endl;
    }
}
void PowRoot(int choice)
{
    float num1, num2, answer;
    if (choice < 9 || choice > 5)
    {
        cout << "Input number to calculate: ";
        cin >> num1;
        if (choice == 5)
        {
            answer = num1 * num1;
            cout << num1 <<" ^2 = " << answer << endl;
        }
        if (choice == 6)
        {
            answer = sqrt(num1);
            cout << num1 << " ^1/2 = " << answer << endl;
        }
        if (choice == 7)
        {
            answer = num1 * num1 * num1;
            cout << num1 << " ^3 = " << answer << endl;
        }
        if (choice == 8)
        {
            answer = cbrt(num1);
            cout << num1 << "^1/3 = " << answer << endl;
        }
    }
    if (choice == 9)
    {
        cout << "Input base and exponent: ";
        cin >> num1;
        cin >> num2;
        answer = pow(num1,num2);
        cout << num1 << " ^" << num2 << " = " << answer << endl;
    }
}