#include<iostream>
#include<fstream>
#include<regex>
#include <sstream>
using namespace std;

bool isComment(string line)
{
    regex commentpattern("//.*");
    return regex_match(line,commentpattern);
}
bool isIdentifier(string word) {
    if (isalpha(word[0]) || word[0] == '_') {
        for (int i = 1; i < word.length(); i++) {
            if (!isalnum(word[i]) && word[i] != '_') {
                return false;
            }
        }
        return true;
    }
    return false;
}
bool isOperator(string word) {
    string operators = "+-*/%=!><&|";
    for (char c : word) {
        if (operators.find(c) != string::npos) {
            return true;
        }
    }
    return false;
}
bool isConstant(string word) {
    if (word[0] == '"' && word[word.length() - 1] == '"') {
        return true;
    }
    for (char c : word) {
        if (!isdigit(c)) {
            return false;
        }
    }
    return true;
}
bool isPunctuation(string word) {
    string punctuations = "(){}[],;:";
    for (char c : word) {
        if (punctuations.find(c) != string::npos) {
            return true;
        }
    }
    return false;
}
void processLine(string line) {
    istringstream iss(line);
    string s;

    while (iss >> s) {
        string Char = s.substr(s.length() - 1);
        if (isPunctuation(Char))
         {
            s = s.substr(0, s.length() - 1);
            cout << "punctuation: " << Char << endl;
         }
        if(s=="auto"||s=="const"||s=="double"||s=="float"||s=="int"||s=="short"||s=="struct"||s=="unsigned"||s=="break"||s=="continue"||s=="else"||s=="for"||s=="long"||s=="signed"||s=="switch"||s=="void"||s=="case"||s=="default"||s=="enum"||s=="goto"||s=="register"||s=="sizeof"||s=="typedef"||s=="volatile"||s=="char"||s=="do"||s=="extern"||s=="if"||s=="return"||s=="static"||s=="union"||s=="while"||s=="cout"||s=="cin"||s=="main")
         {
             cout<<"Keyword: "<<s<<endl;
         }
        else if (isIdentifier(s))
         {
             cout<< "valid identifier: "<<s<<endl;
         }
        else if (isOperator(s))
         {
             cout << "operator: "<<s<< endl;
         }
        else if (isConstant(s))
         {
             cout << "constant: "<<s<< endl;
         }

    }
}

int main()
{
    string line;
    int lineN=1;
    //cout<<"Please enter your variable :- ";
    ifstream f;
    f.open("source.txt");


    while(getline(f,line))
        {

          if(line.empty())
          {
              continue;
          }

   cout<<"Line "<<lineN<<" : "<<line<<endl;
    if(line=="#include<iostream>")
    {
        cout<<"Header File"<<endl;
    }
    else if(line=="using namespace std;")
    {
        cout<<"Namespace declaretion "<<endl;
    }
    else if(isComment(line))
    {
        cout<<"Comment "<<endl;
    }
    else
    {
        processLine(line);
    }

    lineN++;
 }
  f.close();
  return 0;
}
