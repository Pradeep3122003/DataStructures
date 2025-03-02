#include<iostream>
#include<string>
using namespace std;
class memory{

    public:
    string arrayname[5]= {"a","b","c","d"};
    string queuename[5];
    string stackname[5];
    string treename[5];
    string graphname[5];
int arraycreation(string g)
{
 for(int i=0;i<5;i++)
 {
   if(g==arrayname[i]){
cout<<"array already exist";
return 0;
}
 for(int i=0;i<5;i++)
{
if(g!=arrayname[i])
{
int n;
arrayname[i]=g[i];
}
}
}
return 0;
}
};
int main()
{
memory obj;
string words;
cout<<"enter the command ";
cin>>words;
obj.arraycreation(words);
return 0;
}