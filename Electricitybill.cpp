#include <iostream>
using namespace std;
class ElectricityBill
{
private:
 string consumerName;
 int units;
 float billAmount;
public:
 // Default Constructor
 ElectricityBill()
 {
 consumerName = "Not Assigned";
 units = 0;
 billAmount = 0;
 }
 // Parameterized Constructor
 ElectricityBill(string name, int u)
 {
 consumerName = name;
 units = u;
 billAmount = 0;
 }
 // Function to calculate bill
 void calculateBill()
 {
 if (units <= 100)
 {
 billAmount = units * 5;
 }
 else if (units <= 200)
 {
 billAmount = (100 * 5) + ((units - 100) * 7);
 }
 else
 {
 billAmount = (100 * 5) + (100 * 7) + ((units - 200) * 10);
 }
 }
 // Function to display bill
 void displayBill()
 {
 cout << "\n----- Electricity Bill -----\n";
 cout << "Consumer Name : " << consumerName << endl;
 cout << "Units Consumed: " << units << endl;
 cout << "Total Bill : Rs. " << billAmount << endl;
 }
};
int main()
{
 // Object using Default Constructor
 ElectricityBill E1;
 E1.calculateBill();
 E1.displayBill();
 // Object using Parameterized Constructor
 ElectricityBill E2("Rahul Sharma", 250);
 E2.calculateBill();
 E2.displayBill();
 return 0;
}