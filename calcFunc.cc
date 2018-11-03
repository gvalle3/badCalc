/*
W15664768 Lupe Valle
CS110B Calculator Functions;
menu shown, input math operator,
input requests appropriate function
asks to continue
*/
#include <iostream>
#include <cmath>

using namespace std;
int displayMenu();
float addition();
float subtraction();
float multiplication();
float division();
float square();
float squareroot();
float cube();
float cuberoot();
float power();


int main()
{
  bool keepGoing = true;
  char keep;
  while (keepGoing)
  {
    int choice = displayMenu();
    float answer;
    switch (choice)
  {
      case (1): answer = addition();
        break;
      case (2): answer = subtraction();
        break;
      case(3): answer = multiplication();
        break;
      case(4): answer = division();
        break;
      case(5): answer = square();
        break;
      case(6): answer = squareroot();
        break;
      case(7): answer = cube();
        break;
      case(8): answer = cuberoot();
        break;
      case(9): answer = power();
        break;
  }
    cout << "Continue (y/n): ";
    cin >> keep;
    switch (keep)
    {
      case 'y': 
      case 'Y': keepGoing = true;
        break;
      case 'n':
      case 'N': keepGoing = false;
    }
  
  }
  
  return 0;
}

int displayMenu()
{
  int choice;
  cout << "\nMultifunctional Calculator Operators\n";
  cout << "1. Addition" << "        " << "2. Subtraction" << endl;
  cout << "3. Multiplication" << "  " << "4. Division" << endl;
  cout << "5. Square" << "          " << "6. Square Root" << endl;
  cout << "7. Cube" << "            " << "8. Cube Root" << endl;
  cout << "9. Power" << "           " << endl;
  cout << "Input math operator of choice: ";
  cin >> choice;
  if (choice >= 10)
    return 0;
  else
    return choice;
}

float addition()
{
  float num1, num2, answer;
  cout << "Input 2 numbers to add: ";
  cin >> num1;
  cin >> num2;
  answer = num1 + num2;
  cout << num1 << " + " << num2 << " = " << answer << endl;
  return answer;
}

float subtraction()
{
  float num1, num2, answer;
  cout << "Input 2 numbers to subtract: ";
  cin >> num1;
  cin >> num2;
  answer = num1 - num2;
  cout << num1 << " - " << num2 << " = " << answer << endl;
  return answer;
}

float multiplication()
{
  float num1, num2, answer;
  cout << "Input 2 numbers to multiply: ";
  cin >> num1;
  cin >> num2;
  answer = num1 * num2;
  cout << num1 << " * " << num2 << " = " << answer << endl;
  return answer; 
}

float division()
{
  float num1, num2, answer;
  cout << "Input 2 numbers to divide: ";
  cin >> num1;
  cin >> num2;
  answer = num1 / num2;
  cout << num1 << " / " << num2 << " = " << answer << endl;
  return answer;
}

float square()
{
  float num1, answer;
  cout << "Input number to square: ";
  cin >> num1;
  answer = num1 * num1;
  cout << num1 << "^2 " << " = " << answer << endl;
  return answer;
}

float squareroot()
{
  float num1, answer;
  cout << "Input number to square root: ";
  cin >> num1;
  answer = sqrt(num1);
  cout << num1 << "^1/2 " << " = " << answer << endl;
  return answer;
}

float cube()
{
  float num1, answer;
  cout << "Input number to cube: ";
  cin >> num1;
  answer = num1 * num1 * num1;
  cout << num1 << "^3 " << " = " << answer << endl;
  return answer;
}


float cuberoot()
{
  float num1, answer;
  cout << "Input number to cube root: ";
  cin >> num1;
  answer = cbrt(num1);
  cout << num1 << "^1/3 " << " = " << answer << endl;
  return answer;
}

float power()
{
  float num1, num2, answer;
  cout << "Input 2 numbers to power: ";
  cin >> num1;
  cin >> num2;
  answer = pow(num1,num2);
  cout << num1 << "^ " << num2 << " = " << answer << endl;
  return answer; 
}
/*
[gvalle3@hills homeworkCS110B]$ cd calcFunc
[gvalle3@hills calcFunc]$ ls
a.out  calcFunc.cc
[gvalle3@hills calcFunc]$ g++ calcFunc.cc
[gvalle3@hills calcFunc]$ ./a.out

Multifunctional Calculator Operators
1. Addition        2. Subtraction
3. Multiplication  4. Division
5. Square          6. Square Root
7. Cube            8. Cube Root
9. Power
Input math operator of choice: 4
Input 2 numbers to divide: 5 7
5 / 7 = 0.714286
Continue (y/n): y

Multifunctional Calculator Operators
1. Addition        2. Subtraction
3. Multiplication  4. Division
5. Square          6. Square Root
7. Cube            8. Cube Root
9. Power
Input math operator of choice: 9
Input 2 numbers to power: 5 2
5^ 2 = 25
Continue (y/n): y

Multifunctional Calculator Operators
1. Addition        2. Subtraction
3. Multiplication  4. Division
5. Square          6. Square Root
7. Cube            8. Cube Root
9. Power
Input math operator of choice: 7
Input number to cube: 2
2^3  = 8
Continue (y/n): n
[gvalle3@hills calcFunc]$
*/