#include<iostream>
using namespace std;

class Elevator 
{
    int maxload;
    int currentfloor;
    string model;
    int id;
    bool activestatus;
    
public:
    Elevator(int maxload, int currentfloor, string model, int id, bool activestatus)
    {
        this->maxload = maxload;
        this->currentfloor = currentfloor;
        this->model = model;
        this->id = id;
        this->activestatus = activestatus;
    }
    ~Elevator()
    {
        cout<<"Elevator destroyed";
    
    }
    
     void goUp() 
    {
        currentfloor++;
    }
    void goDown() 
    {
        currentfloor--;
    }
    void openGate() 
    {
        cout<<"Elevator is opened";
    }
    void closeGate() 
    {
        cout<<"Elevator is closed";
    }
    void displayLocation() 
    {
        cout<<"The current Floor: "<<currentfloor;
    }
    void setMaxLoad(int maxload) 
    {
        this->maxload = maxload;
    }
    int getMaxLoad()
    {
        return maxload;
    }
    void setCurrentFloor(int currentfloor)
    {
        this->currentfloor = currentfloor;
    }
    int getCurrentFloor() 
    {
        return currentfloor;
    }
    void setModel(string model) 
    {
        this->model = model;
    }
    string getModel()
    {
        return model;
    }
    void setId(int id) 
    {
        this->id = id;
    }
    int getId() 
    {
        return id;
    }
    void setActiveStatus(bool activestatus) 
    {
        this->activestatus = activestatus;
    }
    bool getActiveStatus() 
    {
        return activestatus;
    }
};

int main() 
{
    Elevator elevator(20,4,"Ele101", 1012 ,true);
    elevator.goUp();
    cout<<endl;
    elevator.openGate();
    cout<<endl;
    elevator.displayLocation();
    cout<<endl;
    elevator.goDown();
    cout<<endl;
    elevator.closeGate();
    cout<<endl;
    
}
