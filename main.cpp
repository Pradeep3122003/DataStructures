#include <iostream>
using namespace std;
#include "memory.cpp"
#include "queue.cpp"

int direct=0;

memory user;


void header(){

cout<<"........................................................................"<<endl;
cout<<"------------------Data Structure Visualization--------------------------"<<endl;
cout<<"........................................................................"<<endl;

cout<<"{Welcome to DS Visualtion Tool, enter menu for options, \nuse help before any option to know more about it.}\n"<<endl;

}

void dir(int i){
string a[6]={"","Array/", "Stack/", "Queue/", "Tree/", "Graph/"};
cout<<"root/"<<a[i]<<"> ";

}


void description(int i){ 
string a[6]={ "","\nArrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.", 
"\nA stack stores multiple elements in a specific order, called LIFO.\nLIFO stands for Last in, First Out. To vizualise LIFO, think of a pile of pancakes, where pancakes are both added and removed from the top. So when removing a pancake, it will always be the last one you added. This way of organizing elements is called LIFO in computer science and programming",
"\nA queue stores multiple elements in a specific order, called FIFO. FIFO stands for First in, First Out. To visualize FIFO, think of a queue as people standing in line in a supermarket. The first person to stand in line is also the first who can pay and leave the supermarket. This way of organizing elements is called FIFO in computer science and programming",
"\nThe Tree data structure is similar to Linked Lists in that each node contains data and can be linked to other nodes.",
"\nA Graph is a non-linear data structure that consists of vertices (nodes) and edges."

};
cout<<a[i]<<endl;

}

int check1(string a)
{

string s[10]={"help","use", "create", "delete", "show", "drop", "display", "insert", "search"};
for(int i=0;i<9;i++)
{
 if(s[i] == a)
{
if(a == "show")
{
if(direct==0)
 {return 0;}
 else if(direct==1){
   user.arrayshow();
   return 1;
 }
 else if(direct==2){
   user.stackshow();
   return 1;
 }
 else if(direct==3){
   user.queueshow();
   return 1;
 }
 else if(direct==4){
   user.treeshow();
   return 1;
 }
 else if(direct==5){
   user.graphshow();
   return 1;
  }
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
 else if(s[i] == b && a=="use")
{
direct=i;
cout<<"Hit Enter to use "<<b;
return 1;
}
else if(a=="create")
{
 if(direct==0)
 {return 0;}
 else if(direct==1){
  user.arraycreation(b);
   return 1;
 }
 else if(direct==2){
   user.stackcreation(b);
   return 1;
 }
 else if(direct==3){
   user.queuecreation(b);
   return 1;
 }
 else if(direct==4){
   user.treecreation(b);
   return 1;
 }
 else if(direct==5){
   user.graphcreation(b);
   return 1;
  }
}
else if(a=="drop"){
 if(direct==0)
 {return 0;}
 else if(direct==1){
   user.arraydelete(b);
   return 1;
 }
 else if(direct==2){
   user.stackdelete(b);
   return 1;
 }
 else if(direct==3){
   user.queuedelete(b);
   return 1;
 }
 else if(direct==4){
   user.treedelete(b);
   return 1;
 }
 else if(direct==5){
   user.graphdelete(b);
   return 1;
  }
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
if(input == "exit")
{return 0;}
dir(direct);
cout<<inputvalidate(input, input.size());

}

}
