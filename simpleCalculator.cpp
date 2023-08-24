#include <iostream>
using namespace std;
  
int main() {
    char op;
    float num1, num2;
      
    cout << "Enter an arithemetic operator(+ - * /)\n";
    cin >> op;
    cout << "Enter two numbers as operands\n";
    cin >> num1;
    cin >> num2;
   
    switch(op) {
        case '+': 
                cout << num1 << " + " << num2 << " = " << num1+num2;
                break;
        case '-':
                cout << num1 << " - " << num2 << " = " << num1+num2;
                break;
        case '*':
                cout << num1 << " * " << num2 << " = " << num1*num2;
                break;
        case '/':
                cout << num1 << " / " << num2 << " = " << num1/num2;
                break;
        default: 
                printf("ERROR: Unsupported Operation");
          }
      
    return 0;
}