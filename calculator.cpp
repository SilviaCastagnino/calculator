#include <iostream>
#include <cmath>
#include <limits>
#include <string>

/**
 * @brief Advanced C++ Calculator
 * Features: Basic arithmetic, Power, Square Root, and a friendly UI.
 */

using namespace std;

// Function to clear the input buffer in case of invalid entry
void clearBuffer()
{
  cin.clear();
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void showMenu()
{
  cout << "\n====================================" << endl;
  cout << "      ✨ STELLAR CALCULATOR ✨      " << endl;
  cout << "====================================" << endl;
  cout << " [1] Addition (+)" << endl;
  cout << " [2] Subtraction (-)" << endl;
  cout << " [3] Multiplication (*)" << endl;
  cout << " [4] Division (/)" << endl;
  cout << " [5] Power (a^b)" << endl;
  cout << " [6] Square Root (√)" << endl;
  cout << " [0] Exit" << endl;
  cout << "------------------------------------" << endl;
  cout << "Choose your mission: ";
}

int main()
{
  int choice;
  double num1, num2, result;
  bool running = true;

  while (running)
  {
    showMenu();

    // Validate choice input
    if (!(cin >> choice))
    {
      cout << "❌ Oops! In our dimension that's not a number. Try again!" << endl;
      clearBuffer();
      continue;
    }

    if (choice == 0)
    {
      cout << "Goodbye! See you in the next dimension. 🚀" << endl;
      break;
    }

    switch (choice)
    {
    case 1: // Addition
      cout << "Enter two numbers: ";
      cin >> num1 >> num2;
      result = num1 + num2;
      cout << "✅ Result: " << num1 << " + " << num2 << " = " << result << endl;
      break;

    case 2: // Subtraction
      cout << "Enter two numbers: ";
      cin >> num1 >> num2;
      result = num1 - num2;
      cout << "✅ Result: " << num1 << " - " << num2 << " = " << result << endl;
      break;

    case 3: // Multiplication
      cout << "Enter two numbers: ";
      cin >> num1 >> num2;
      result = num1 * num2;
      cout << "✅ Result: " << num1 << " * " << num2 << " = " << result << endl;
      break;

    case 4: // Division
      cout << "Enter dividend and divisor: ";
      cin >> num1 >> num2;
      if (num2 == 0)
      {
        cout << "🛑 Error: Division by zero is a cosmic impossibility!" << endl;
      }
      else
      {
        result = num1 / num2;
        cout << "✅ Result: " << num1 << " / " << num2 << " = " << result << endl;
      }
      break;

    case 5: // Power
      cout << "Enter base and exponent: ";
      cin >> num1 >> num2;
      result = pow(num1, num2);
      cout << "✅ Result: " << num1 << " ^ " << num2 << " = " << result << endl;
      break;

    case 6: // Square Root
      cout << "Enter number: ";
      cin >> num1;
      if (num1 < 0)
      {
        cout << "🛑 Error: Negative numbers don't have real square roots!" << endl;
      }
      else
      {
        result = sqrt(num1);
        cout << "✅ Result: √" << num1 << " = " << result << endl;
      }
      break;

    default:
      cout << "🤔 Hmm, that option doesn't exist in this galaxy." << endl;
    }

    clearBuffer(); // Keep things clean for the next loop
  }

  return 0;
}
