#include<iostream>
#include<vector>

using namespace std;


int main()
{
    vector<int>v;

   v.push_back(10);
   v.push_back(20);
   v.push_back(30);
   v.push_back(40);
   v.push_back(50);

    vector<int>::iterator itr=v.begin();
    cout<<*itr<<endl;
    cout<<*itr+1<<endl;
    cout<<*itr+2<<endl;
    cout<<*itr+3<<endl;

    cout<<"size=> "<<v.size()<<endl;
    return 0;

}
