#include <iostream>

using namespace std ;

// define a function to perform arithmetic operations on any given two numbers
float calculate(float operand1, float operand2, char arith_operator) {
      //if-else ladder
      if (arith_operator == '+') // addition
            return operand1 + operand2;
      else if(arith_operator == '-') // subtraction
            return operand1 - operand2;
      else if(arith_operator == '*') // multiplication
            return operand1 * operand2;
      else //division
            return operand1 / operand2;
}


int main() {
   float num1, num2;
   char opr;
   cout<<"Enter first number"<<endl;
   cin>>num1; // standard input
   cout<<"Enter second number"<<endl;
   cin>>num2;
   cout<<"Operation to perform (specify symbol such as +, -, * or /): "<<endl;
   cin>>opr;

   // while loop to get correct operator from the user
   while (opr != '+' && opr != '-' &&  opr != '*' && opr != '/') {
         cout<<"Enter valid operation: "<<endl;
         cin>>opr;
   }
  
   float ResVar = calculate(num1, num2, opr); // call the function
   cout<<"Result is "<<ResVar<<endl;
}