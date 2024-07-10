#include<iostream>
using namespace std;
int main()
{
    //Braced initializers
    //Variable may contain random garbage values. warning
    int elephant_count;
    int lion_count{};  //initializes to zero
    int dog_count {10};//initializes to 10
    int cat_count {15};//initializes to 15
    // can use expression as initializer 
    int domesticated_animals ( dog_count + cat_count);

    // int new_nuumber {doesnot_exist};
    // int narrowing conversion {2.9}; // compiler error
    cout<<"Elephant count :" << elephant_count << endl;
    cout<<"Lion count :" << lion_count << endl;
    cout<<"Dog count :" << dog_count << endl;
    cout<<"Cat count :" << cat_count << endl;
    cout<<"Domesticated animal count :" << domesticated_animals << endl;
    return 0;
    
}