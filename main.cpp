#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int ,int>mp;
    mp[4]=400;
    mp[3]=300;
    mp.insert(make_pair(10,100));
    mp.insert(make_pair(10,700));
    //mp[10]=700;
    auto itr=mp.begin();
    for(auto itr=mp.begin();itr!=mp.end();itr++)
    {
        cout<<itr->first<<"-"<<itr->second<<endl;
    }
    return 0;

}
