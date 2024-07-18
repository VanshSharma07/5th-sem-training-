#include<iostream>
#include<map>
using namespace std;
//stored the data in key value pair
int main(){
    map<int,string> m;
    //1 is key and Ajay is value
    m[1] = "Ajay";
    m[2] = "Nanjay";
    m[3] = "Manjay";
    m.insert({5, "Ankita"});
    for(auto i:m){
        //expression can not be used as a function.
        //i.first() dont write this way
        cout<<i.first<< " " << i.second << " "<<endl;
    }
}
