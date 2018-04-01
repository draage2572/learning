#include <iostream>
#include <string>
#include <memory>

class AirlineTicket
{
public:
    AirlineTicket();
    ~AirlineTicket();
    int calculatePriceInDollars() const;
    const std::string& getPassengerName() const;
    void setPassengerName(const std::string& name);
    int getNumberOfMiles() const;
    void setNumberOfMiles(int miles);
    bool getHasEliteSuperRewardsStatus() const;
    void setHasEliteSuperRewardsStatus(bool);

private:
    std::string mPassengerName;
    int mNumberOfMiles;
    bool mHasEliteSuperRewardsStatus;
};

int main()
{
    /**
     * Stack based AirlineTicket
     */
    AirlineTicket myTicket;
    myTicket.setPassengerName("Adrian Eavaz");
    myTicket.setNumberOfMiles(100);

    std::cout << "Ticket price " << myTicket.calculatePriceInDollars() << std::endl;

    /**
     * Heap based AirlineTicket with smart pointer
     */
    auto ticketSmart = std::make_unique<AirlineTicket>();
    ticketSmart->setPassengerName("Adrian Eavaz Ionut");
    ticketSmart->setNumberOfMiles(200);
    ticketSmart->setHasEliteSuperRewardsStatus(true);

    std::cout << "Ticket price " << ticketSmart->calculatePriceInDollars() << std::endl;

    /**
     * Heap based AirlineTicket with no smart pointer
     * !!! not recommended
     */
    AirlineTicket* noSmartPointer = new AirlineTicket();
    noSmartPointer->setPassengerName("Adrian Ionut Eavaz");
    noSmartPointer->setNumberOfMiles(300);
    noSmartPointer->setHasEliteSuperRewardsStatus(false);

    std::cout << "Ticket price " << noSmartPointer->calculatePriceInDollars() << std::endl;
    delete noSmartPointer;
    noSmartPointer = nullptr;

    return 0;
}


AirlineTicket::AirlineTicket()
{
    mHasEliteSuperRewardsStatus = false;
    mPassengerName = "Unkown Passenger";
    mNumberOfMiles = 0;
}

AirlineTicket::~AirlineTicket()
{

}

int AirlineTicket::calculatePriceInDollars() const
{
    if (getHasEliteSuperRewardsStatus())
    {
        return 0;
    }

    return static_cast<int>(getNumberOfMiles() * 0.1);
}

const std::string& AirlineTicket::getPassengerName() const
{
    return mPassengerName;
}

void AirlineTicket::setPassengerName(const std::string &name)
{
    mPassengerName = name;
}

int AirlineTicket::getNumberOfMiles() const
{
    return mNumberOfMiles;
}

void AirlineTicket::setNumberOfMiles(int miles)
{
    mNumberOfMiles = miles;
}

bool AirlineTicket::getHasEliteSuperRewardsStatus() const
{
    return mHasEliteSuperRewardsStatus;
}

void AirlineTicket::setHasEliteSuperRewardsStatus(bool status)
{
    mHasEliteSuperRewardsStatus = status;
}