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

//array operations completed
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
};




int main()
{
memory user;
string word;
while(true){
cout<<"\nName: ";
fflush(stdin);
cin>>word;
user.arraycreation(word);
}
return 0;
}
