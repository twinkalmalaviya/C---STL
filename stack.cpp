#include <iostream>
#include <stack>
using namespace std;
void function_one(stack <int> s)
{
  while(!s.empty())
  {
    cout<< '\t'<<s.top();
    s.pop();
  }
}

int main() {
 stack <int> s;
 s.push(10);
 s.push(2);
 s.push(100);

 cout <<"stack ";

 function_one(s);

 cout<<"\ns.size():"<<s.size();
 cout <<"\ns.top():"<<s.top();
 
 s.pop();
 function_one(s);   
}
