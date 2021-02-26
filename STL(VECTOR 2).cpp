#include <iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(80);
    v.push_back(70);
    v.push_back(40);
/*
    vector<int>::iterator itr=v.begin();
    cout<<*itr<<endl;
    cout<<*(itr+1)<<endl;
    cout<<*(itr+2)<<endl;
    return 0;
*/
//DIRECTLY WE ARE USING LOOP TO PRONT ALL THE ELEMENTS
vector<int>::iterator itr=v.begin();
for(;itr!=v.end();itr++)
{
    cout<<"Value of all the vector is "<<*itr<<endl;
}


return 0;
}
