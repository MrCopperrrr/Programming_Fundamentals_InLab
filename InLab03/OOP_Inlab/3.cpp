class ClockType
{
public:
    void setTime(int, int, int);
    bool equalTime(const ClockType&) const;
    ClockType(int, int, int);
    ClockType();

private:
    int hr;
    int min;
    int sec;
};
bool ClockType::equalTime(const ClockType& otherClock) const
{
    return hr == otherClock.hr && min == otherClock.min && sec == otherClock.sec;
}
// TODO