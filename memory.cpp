#include "array.cpp"
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
 cout<<"Array '"<<g<<"' Created.";
 classArray arrayname[namecount[0]];
 namecount[0]+=1;
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
return 1;
}}

int arrayshow(){

if(namecount[0]==0){
 cout<<"No arrays to show.";
return 0;
}

for(int i=0;i<namecount[0];i++)
{
cout<<arrayname[i]<<"\t";
}
return 1;
}

int arraydelete(string a){

int m=-1;
if(namecount[0]==0){
cout<<"No array to drop";
return 0;
}
for(int i=0;i<=namecount[0];i++)
 {
   if(a==arrayname[i]){
     m=i;
}}

if(m==-1){
cout<<"Array '"<<a<<"' do not exist";
return 0;
}
string temp;
for(int i=m;i<=namecount[0];i++)
 {
   arrayname[i]=arrayname[i+1];
}

namecount[0]-=1;
cout<<"Array '"<<a<<"' droped";
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

int queueshow(){

if(namecount[1]==0){
 cout<<"No queues to show.";
return 0;
}

for(int i=0;i<=namecount[1];i++)
{
cout<<queuename[i]<<"\t";
}
return 1;
}

int queuedelete(string a){

int m=-1;
if(namecount[1]==0){
cout<<"No queue to drop";
return 0;
}
for(int i=0;i<=namecount[1];i++)
 {
   if(a==queuename[i]){
     m=i;
}}

if(m==-1){
cout<<"Queue '"<<a<<"' do not exist";
return 0;
}
string temp;
for(int i=m;i<=namecount[1];i++)
 {
   queuename[i]=queuename[i+1];
}

namecount[1]-=1;
cout<<"Queue '"<<a<<"' droped";
return 1;

}

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

int stackshow(){

if(namecount[2]==0){
 cout<<"No stacks to show.";
return 0;
}

for(int i=0;i<=namecount[2];i++)
{
cout<<stackname[i]<<"\t";
}
return 1;
}

int stackdelete(string a){

int m=-1;
if(namecount[2]==0){
cout<<"No stack to drop";
return 0;
}
for(int i=0;i<=namecount[2];i++)
 {
   if(a==stackname[i]){
     m=i;
}}

if(m==-1){
cout<<"Stack '"<<a<<"' do not exist";
return 0;
}
string temp;
for(int i=m;i<=namecount[2];i++)
 {
   stackname[i]=stackname[i+1];
}

namecount[2]-=1;
cout<<"Stack '"<<a<<"' droped";
return 1;

}

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

int treeshow(){

if(namecount[3]==0){
 cout<<"No trees to show.";
return 0;
}

for(int i=0;i<=namecount[3];i++)
{
cout<<treename[i]<<"\t";
}
return 1;
}

int treedelete(string a){

int m=-1;
if(namecount[3]==0){
cout<<"No tree to drop";
return 0;
}
for(int i=0;i<=namecount[3];i++)
 {
   if(a==treename[i]){
     m=i;
}}

if(m==-1){
cout<<"Tree '"<<a<<"' do not exist";
return 0;
}
string temp;
for(int i=m;i<=namecount[3];i++)
 {
   treename[i]=treename[i+1];
}

namecount[3]-=1;
cout<<"Tree '"<<a<<"' droped";
return 1;

}

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

int graphshow(){

if(namecount[4]==0){
 cout<<"No graphs to show.";
return 0;
}

for(int i=0;i<=namecount[4];i++)
{
cout<<graphname[i]<<"\t";
}
return 1;
}


int graphdelete(string a){

int m=-1;
if(namecount[4]==0){
cout<<"No graph to drop";
return 0;
}
for(int i=0;i<=namecount[4];i++)
 {
   if(a==graphname[i]){
     m=i;
}}

if(m==-1){
cout<<"Graph '"<<a<<"' do not exist";
return 0;
}
string temp;
for(int i=m;i<=namecount[4];i++)
 {
   graphname[i]=graphname[i+1];
}

namecount[4]-=1;
cout<<"Graph '"<<a<<"' droped";
return 1;

}

};

