#include "10studentTicket.h"
#include <iostream>

StudentTicket::StudentTicket() : Ticket() {}

StudentTicket::StudentTicket(CustomString stagingName, double price)  :  Ticket(stagingName, price/2) {}
