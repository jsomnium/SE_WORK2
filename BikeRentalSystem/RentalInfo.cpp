#include "RentalInfo.h"
#include "Member.h"
#include "Bike.h"
#include "vector"
#include <algorithm>

// 대여한 자전거 목록 받아오기
vector<Bike*> RentalInfo::GetRentedBikes(Member& currentUser) {
    // 모든 자전거 리스트 받아오기
    vector<Bike*> bikes = currentUser.GetRentalCollection().GetAllRentedBikes();

    // ID순으로 정렬
    sort(bikes.begin(), bikes.end(), [](Bike* a, Bike* b) {
        return a->GetId() < b->GetId();
        });

    return bikes;
}
