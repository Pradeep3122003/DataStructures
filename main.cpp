#include <iostream>
using namespace std;
int direct=0;

void header(){

cout<<"........................................................................"<<endl;
cout<<"------------------Data Structure Visualization--------------------------"<<endl;
cout<<"........................................................................"<<endl;

cout<<"{Welcome to DS Visualtion Tool, enter menu for options, \nuse help before any option to know more about it.}\n"<<endl;

}

void dir(int i){
string a[6]={"","Array/", "Stack/", "Queue/", "Tree/", "Graph/"};
cout<<"root/"<<a[i]<<">";

}

int check1(string a)
{

string s[5]={"help","array", "queue", "create", "use"};
for(int i=0;i<5;i++)
{
 if(s[i] == a)
{
return 1;
}

}
return 0;

}

string inputvalidate(string a, int s){
string frag[5], temp;
int c=0, c1=0;
if(a=="")
{return "";}
for(int i=0;i <= s+1;i++){
  if(a[i] == ' ' || i == s){
     frag[c]=temp;
     c++;
     temp="";

  }
else{

 temp+=a[i];

}

}

if(c==1)
{
 if(check1(frag[0])==0){
  return "Invalid command";

}
else{
 return "valid command";
}
}
return "Enter command";
}

int main()
{
header();

string input;
dir(direct);
while (input != "exit")
{
fflush(stdin);
getline(cin, input);
dir(direct);
cout<<inputvalidate(input, input.size());

}

}
