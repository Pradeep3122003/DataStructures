#include<iostream>
#include<string>
using namespace std;
class memory{

    public:
    int namecount[5]={0,0,0,0,0};
    string arrayname[5];
    string queuename[5];
    string stackname[5];
    string treename[5];
    string graphname[5];

//array operations
int arraycreation(string g)
{
 if(namecount[0]==0)
{
arrayname[namecount[0]]=g;
namecount[0]+=1;
 cout<<"Array '"<<g<<"' Created.";
return 1;
}

for(int i=0;i<=namecount[0];i++)
 {
   if(g==arrayname[i]){
cout<<"array already exist";
return 0;
}}

if(namecount[0]==5)
{
cout<<"Maximum 5 arrays can be created";
return 0;
} else {
arrayname[namecount[0]]=g;
namecount[0]+=1;
cout<<"Array '"<<g<<"' Created.";
return 0;
}}

int arrayshow(){

if(namecount[0]==0){
 cout<<"No arrays to show.";
return 0;
}

for(int i=0;i<=namecount[0];i++)
{
cout<<arrayname[i]<<"\t";
}
return 1;
}

//queue operations

int queuecreation(string g)
{
 if(namecount[1]==0)
{
queuename[namecount[1]]=g;
namecount[1]+=1;
 cout<<"Queue '"<<g<<"' Created.";
return 1;
}

for(int i=0;i<=namecount[1];i++)
 {
   if(g==queuename[i]){
cout<<"queue already exist";
return 0;
}}

if(namecount[1]==5)
{
cout<<"Maximum 5 queues can be created";
return 0;
} else {
queuename[namecount[1]]=g;
namecount[1]+=1;
cout<<"Queue '"<<g<<"' Created.";
return 0;
}}


//stack operations

int stackcreation(string g)
{
 if(namecount[2]==0)
{
stackname[namecount[2]]=g;
namecount[2]+=1;
 cout<<"Stack '"<<g<<"' Created.";
return 1;
}

for(int i=0;i<=namecount[2];i++)
 {
   if(g==stackname[i]){
cout<<"stack already exist";
return 0;
}}

if(namecount[2]==5)
{
cout<<"Maximum 5 stacks can be created";
return 0;
} else {
stackname[namecount[2]]=g;
namecount[2]+=1;
cout<<"Stack '"<<g<<"' Created.";
return 0;
}}

//tree operations

int treecreation(string g)
{
 if(namecount[3]==0)
{
treename[namecount[3]]=g;
namecount[3]+=1;
 cout<<"Tree '"<<g<<"' Created.";
return 1;
}

for(int i=0;i<=namecount[3];i++)
 {
   if(g==treename[i]){
cout<<"tree already exist";
return 0;
}}

if(namecount[3]==5)
{
cout<<"Maximum 5 trees can be created";
return 0;
} else {
treename[namecount[3]]=g;
namecount[3]+=1;
cout<<"Tree '"<<g<<"' Created.";
return 0;
}}


//graph operations

int graphcreation(string g)
{
 if(namecount[4]==0)
{
graphname[namecount[4]]=g;
namecount[4]+=1;
 cout<<"Graph '"<<g<<"' Created.";
return 1;
}

for(int i=0;i<=namecount[4];i++)
 {
   if(g==graphname[i]){
cout<<"graph already exist";
return 0;
}}

if(namecount[4]==5)
{
cout<<"Maximum 5 graphs can be created";
return 0;
} else {
graphname[namecount[4]]=g;
namecount[4]+=1;
cout<<"Graph '"<<g<<"' Created.";
return 0;
}}

};




int main()
{
memory user;
string word;
int o;
while(true){
cout<<"\n1.create 2.show\noption: ";
fflush(stdin);
cin>>o;
if(o==1)
{
cout<<"\nArray: ";
fflush(stdin);
cin>>word;
user.arraycreation(word);
}
else if(o==2)
{
user.arrayshow();
}
}
return 0;
}
