//
// Created by YKROPCHIK on 19.05.2020.
//
#include <string>
#include "site.h"

Subscription::Subscription(std::string nameSub, unsigned int maxSize, unsigned int maxCount, bool freeHelp, bool something1,
                           unsigned int something2, unsigned int something3) {
    this->nameSub = nameSub;
    this->maxSize = maxSize;
    this->maxCount = maxCount;
    this->freeHelp = freeHelp;
    this->something1 = something1;
    this->something2 = something2;
    this->something3 = something3;
}

Subscription *Subscription::baseSub() {
    return new Subscription("BASE SUBSCRIPTION", 100, 50, false, false, 10, 20);
}

Subscription *Subscription::vipSub() {
    return new Subscription("VIP SUBSCRIPTION", 300, 100, false, true, 25, 60);
}

Subscription *Subscription::premiumSub() {
    return new Subscription("PREMIUM SUBSCRIPTION", 450, 90, true, true, 40, 100);
}

Subscription *Subscription::luxurySub() {
    return new Subscription("LUXURY SUBSCRIPTION", 850, 200, true, true, 100, 200);
}

std::string Subscription::getName() {
    return this->nameSub;
}


void User::addSub(Subscription *sub) {
    subStatus = sub;
}

std::string User::getSubName() {
    return this->subStatus->getName();
}
