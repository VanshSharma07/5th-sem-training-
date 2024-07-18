#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Car{
    private:
    string licensePlate;
    string owner;

    public:
    Car(string lp, string o)
    {
        licensePlate =lp;
        owner =o;
    }
    void setDetails(string lp, string o)
    {
        licensePlate = lp;
        owner = o;
    }
    string getLicenseNo()
    {
        return licensePlate;
    }
    string getOwnerName()
    {
        return owner;
    }
    void displayDetails()
    {
        cout<<"License Plate : "<< licensePlate<<endl;
        cout<<"Owner Name : "<< owner<<endl;
    }

};
class ParkingLot{
    vector<Car> ParkedCar;
    
};

int main()
{
    Car ob("JK02CW9946","Vansh");
    ob.displayDetails();
    ob.setDetails("JK14E5598","Praguni");
    cout<<"Updated License No. "<<ob.getLicenseNo()<<endl;
    cout<<"Updated Owner Name : "<<ob.getOwnerName()<<endl;
    ob.displayDetails();

}
