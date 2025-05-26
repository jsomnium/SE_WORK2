#include "RentalInfo.h"
#include "Member.h"
#include "Bike.h"
#include "vector"

vector<Bike*> RentalInfo::GetRentedBikes(Member& currentUser) {
    return currentUser.GetRentalCollection().GetAllRentedBikes();
}
