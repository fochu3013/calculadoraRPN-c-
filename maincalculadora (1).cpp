#include <iostream> 
#include <stack>
#include <string>
#include <sstream>

using namespace std;

bool isOperator(cosnt string& input)
void performOp(const string& input, stack<double>& calcStack)

int main()
{
cout << "CALCULADORA RPN" << endl;
  stack<double calcStack;
  string input;
  while(true)
 {
      cout << ">>";
      
      cin >> input;

      double num;
      if(istringstream(input) >> num)
      {
        calcStack.push(num);
      }
      else if (isOperator(input))
      {
        performOp(input, calcStack);
      }   
      else if(input == "q")
      {
        return 0;
      }
      else
      {
        cout << "invalid input" << endl;
      }
   }
}

bool isOperator(cosnt string& input)
{
  string ops[] = {"-", "+", "*", "/"};

  for(int i = 0; i < 4; i++)
    {
      if(input == ops [i])
      {
        return true;
      }
    }
    return false
}

void performOp(const string& input, stack<double>& calcStack)
{
  double Eval, Dval, result;

  Dval = calcStack.top();
  calcStack.pop();

  Eval = calcStack.top();
  calcStack.pop();

  if(input == "-")
  {
    result = Eval - Dval;
  }
  else if (input == "+")
  {
    result = Eval + Dval;
  }
    else if (input == "*")
  {
    result = Eval * Dval;
  }
  else
  {
    result = Eval / Dval;   
  }

  cout << result << endl;
  calcStack.push(result);