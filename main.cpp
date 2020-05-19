#include <iostream>
#include "src/site.h"

int main() {
    User testAcc{};

    testAcc.addSub(Subscription::premiumSub());
    std::cout << testAcc.getSubName();
}
