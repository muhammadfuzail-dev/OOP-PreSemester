/*Question # 01: 
Create a class called water bottle. 
The water bottle has a company (made by), color and water capacity. The water capacity is stored in 
both liters(l) and milliliters(ml).  
Create variables and methods for your class. Methods should include getters and setters. 
Also create an additional method that updates the water capacity (both in l and ml) after asking the user 
how much water a person has drank. Assume that the user always enters the amount in ml. 
Demonstrate the functionality of the water bottle in your main method. */
/**/


#include <iostream>
using namespace std;
class Bottle{
    string company;
    string color;
    int water;   // in ml
    public:
  
    void setCompany(string c){ company = c; }
    void setColor(string c){ color = c; }
    void setWater(int w){ water = w; }

    string getCompany(){ return company; }
    string getColor(){ return color; }
    int getWater(){ return water; }

    void drinkWater(){
        int drunk;
        cout << "Enter the drunk water (ml): ";
        cin >> drunk;
        while(drunk < 0 || drunk > water){
            cout << "Invalid amount, try again.\n";
            cout << "Enter the drunk water (ml): ";
            cin >> drunk;
        }
        water = water - drunk;   // capacity update ho gayi
    }

    void display(){
        int liters = water / 1000;
        int ml = water % 1000;
        cout << "Company: " << company << endl;
        cout << "Color: " << color << endl;
        cout << "Remaining Capacity: " << liters << "L " << ml << "ml" << endl;
    }

};

int main(){

    Bottle b1;
    b1.setCompany("Nestle Miniral Water");
    b1.setColor("Transparant");
    b1.setWater(1500);   // 1500 ml

    b1.display();        // pehle current capacity dikhao
    b1.drinkWater();        // user se pucho kitna piya, update karo
    b1.display();  // updated capacity dikhao



    Bottle bottle2;
    bottle2.setCompany("RedBull");
    bottle2.setColor("blue");
    bottle2.setWater(500);

    bottle2.display();
    bottle2.drinkWater();
    bottle2.display();        
}