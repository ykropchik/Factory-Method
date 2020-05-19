//
// Created by YKROPCHIK on 19.05.2020.
//

class Subscription {
private:
    std::string nameSub;
    unsigned int maxSize;
    unsigned int maxCount;
    bool freeHelp;
    // i don't know that is this, but i need more field ¯\_(ツ)_/¯
    bool something1;
    unsigned int something2;
    unsigned int something3;

public:
    Subscription(std::string nameSub, unsigned int maxSize, unsigned int maxCount, bool freeHelp, bool something1, unsigned int something2, unsigned int something3);
    static Subscription *baseSub();
    static Subscription *vipSub();
    static Subscription *premiumSub();
    static Subscription *luxurySub();
    std::string getName();

};

class User {
private:
    Subscription *subStatus;

public:
    User(){
        subStatus = nullptr;
    }
    void addSub(Subscription *sub);
    std::string getSubName();
};


