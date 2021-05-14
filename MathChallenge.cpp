#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>

// okay, i thought I was literally solving for x. whoops!
int MathChallenge(std::string str) {
  std::vector<std::string> v;
  std::istringstream ss(str);
  std::string ea;
  std::string x = "";
  int answer = 0;
  while(ss >> ea) {
    v.push_back(ea);
  }
  std::string oper = v[1];

  if(v[4] == "x") {
    x = v[4];
    int num1 = stoi(v[0]);
    int num2 = stoi(v[2]);
    if(oper == "+") {
      answer = num1 + num2;
    }
    else if(oper == "-") {
      answer = num1 - num2;
    }
    else if(oper == "*") {
      answer = num1 * num2;
    }
    else if(oper == "/") {
      answer = num1 / num2;
    }
  } else {
    int result = stoi(v[4]);
    for(int i = 0; i < v[0].length(); i++) {
      if(v[0][i] == 'x') {
        x = v[0];
        int num2 = stoi(v[2]);
        if(oper == "+") {
          answer = result - num2;
        }
        else if(oper == "-") {
          answer = result + num2;
        }
        else if(oper == "*") {
          answer = result / num2;
        }
        else if(oper == "/") {
          answer = result * num2;
        }
      }
      else if(v[2][i] == 'x') {
        x = v[2];
        int num1 = stoi(v[0]);
          if(oper == "+") {
            answer = result - num1;
          }
          else if(oper == "-") {
            answer = result + num1;
          }
          else if(oper == "*") {
            answer = result / num1;
          }
          else if(oper == "/") {
            answer = result * num1;
          }
      }
    }
  }

  std::string fullAnswer = std::to_string(answer);
  for(int i = 0; i < x.length(); i++) {
    if(x[i] == 'x') {
      answer = fullAnswer[i] - '0';
    }
  }
  return answer;
}

int main(void) { 
   
  // keep this function call here
  std::cout << MathChallenge(coderbyteInternalStdinFunction(stdin));
  return 0;
    
}