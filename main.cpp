#include <iostream>
#include "queue.cpp"
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


void description(int i){ 
string a[6]={ "","Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.", 
"A stack stores multiple elements in a specific order, called LIFO.\nLIFO stands for Last in, First Out. To vizualise LIFO, think of a pile of pancakes, where pancakes are both added and removed from the top. So when removing a pancake, it will always be the last one you added. This way of organizing elements is called LIFO in computer science and programming",
"A queue stores multiple elements in a specific order, called FIFO. FIFO stands for First in, First Out. To visualize FIFO, think of a queue as people standing in line in a supermarket. The first person to stand in line is also the first who can pay and leave the supermarket. This way of organizing elements is called FIFO in computer science and programming",
"The Tree data structure is similar to Linked Lists in that each node contains data and can be linked to other nodes.",
"A Graph is a non-linear data structure that consists of vertices (nodes) and edges."

};
cout<<a[i]<<endl;

}

int check1(string a)
{

string s[6]={"help","array", "stack", "queue", "tree", "graph"};
for(int i=0;i<6;i++)
{
 if(s[i] == a)
{
 
  if(i>0)
{
direct=i;
cout<<"Hit Enter to Use "<<a;
}

return 1;
}

}
return 0;

}


int check2(string a, string b)
{

string s[6]={"help","array", "stack", "queue", "tree", "graph"};
if(check1(a)==1){
for(int i=0;i<6;i++)
{
 if(s[i] == b && a=="help")
{
 description(i);
return 1;
}
}

}
return 0;

}

string inputvalidate(string a, int s){
string frag[5], temp;
int c=0;
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
}
else if(c==2){

if(check2(frag[0], frag[1])==0){
   return "Invalid command";}
}




return "";
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
