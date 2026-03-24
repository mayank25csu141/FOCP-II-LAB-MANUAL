/*Movie Ticket Booking System 🎬
Create a class MovieTicket with:
Data Members:
movieName ,seatNumber,ticketPrice, isBooked
Constructors:
Default constructor (not booked, price = 200)
Parameterized constructor (initialize movie name, seat number, price)
Methods:
bookTicket() → Book the ticket if not already booked
cancelTicket() → Cancel if already booked
displayTicketDetails()
calculateTotalCost(int numberOfTickets)
Create at least 2 ticket objects and simulate booking & cancellation.*/
#include <iostream>
using namespace std;
class MovieTicket
{
private:
 string movieName;
 int seatNumber;
 float ticketPrice;
 bool isBooked;
public:
 // Constructors
 MovieTicket();
 MovieTicket(string name, int seat, float price);
 // Member Functions
 void bookTicket();
 void cancelTicket();
 void displayTicketDetails();
 float calculateTotalCost(int numberOfTickets);
};
// Default Constructor
MovieTicket :: MovieTicket()
{
 movieName = "Not Assigned";
 seatNumber = 0;
 ticketPrice = 200;
 isBooked = false;
}
// Parameterized Constructor
MovieTicket :: MovieTicket(string name, int seat, float price)
{
  this->movieName = name;
  this-> seatNumber = seat;
  this->ticketPrice = price;
  this->isBooked = false;
}
// Book Ticket
void MovieTicket :: bookTicket()
{
 if(!isBooked)
 {
 isBooked = true;
 cout << "Ticket booked successfully for seat " << seatNumber << endl;
 }
 else
 {
 cout << "Seat already booked.\n";
 }
}
// Cancel Ticket
void MovieTicket :: cancelTicket()
{
 if(isBooked)
 {
 isBooked = false;
 cout << "Ticket cancelled for seat " << seatNumber << endl;
 }
 else
 {
 cout << "Ticket is not booked yet.\n";
 }
}
// Display Ticket Details
void MovieTicket :: displayTicketDetails()
{
 cout << "\n----- Ticket Details -----\n";
 cout << "Movie Name : " << movieName << endl;
 cout << "Seat Number: " << seatNumber << endl;
 cout << "Ticket Price: Rs. " << ticketPrice << endl;
 cout << "Status: " << (isBooked ? "Booked" : "Not Booked") << endl;
}
// Calculate Total Cost
float MovieTicket :: calculateTotalCost(int numberOfTickets)
{
 return numberOfTickets * ticketPrice;
}
int main()
{
 // Object using default constructor
 MovieTicket ticket1;
 // Object using parameterized constructor.
 MovieTicket ticket2("Avengers", 10, 300);
 ticket1.bookTicket();
 ticket2.bookTicket();
 ticket1.displayTicketDetails();
 ticket2.displayTicketDetails();
 cout << "\nTotal cost for 3 tickets: Rs. "
 << ticket2.calculateTotalCost(3) << endl;
 ticket2.cancelTicket();
 ticket2.displayTicketDetails();
 return 0;
}