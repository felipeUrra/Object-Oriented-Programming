#include "10.1StudentTicket.h"
#include <iostream>

StudentTicket::StudentTicket() : Ticket() {}

StudentTicket::StudentTicket(CustomString stagingName, double price)  :  Ticket(stagingName, price/2) {}
