#include "10.1GroupTicket.h"

GroupTicket::GroupTicket() : Ticket() {}

GroupTicket::GroupTicket(CustomString stagingName, double price) : Ticket(stagingName, price - (price / 5));
