#include "list"
#include <iostream>
#include <algorithm> 

void IfForest(std::list<std::string> Input)
{
    std::string cmd;
    std::list<std::string>::iterator it=Input.begin();
    cmd = *it;
    if(cmd == "login" || cmd == "newcontact") {
        if (cmd == "login")
            std::cout << "Login" << std::endl;
        else
            std::cout << "Newcontact" << std::endl;
    }
}

void test(std::string Input)
{
  std::cout << "Input = " << Input << std::endl;
  std::list<std::string> _parser;
    std::string temp;
    int i = 0;
    int j = 0;
    while(Input[i] != 0) {
        if(Input[i] != '|') {
        temp = temp + Input[i];
        i++;
        } else {
	    _parser.push_back(temp);
            i++;
	    temp.clear();
        }
    }
    IfForest(_parser);
}

int main()
{
  std::string str = "NewContact";
  str = str + '|';
  str = str + "OUIIII|";
  test(str);
  return (0);
}
