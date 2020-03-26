#include <vector>
#include <iostream>
using namespace std;

void change(vector<int> v)
{
    v[0]=3;
}

int main()
{
    vector<int> v;
    v.push_back(1);
    change(v);
    cout << v[0] << endl;
    for(int i=0; i<=3; i++){
        cout << i/3 << ',';
    }
    cout << endl;
    return 0;
}