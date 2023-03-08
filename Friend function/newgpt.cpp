#include <iostream>

class Time {
  public:
    int hour, minute, second;

    Time() {
      std::cout << "Enter hour, minute, second: ";
      std::cin >> hour >> minute >> second;
    }
};

class DerivedTime : public Time {
  public:
    DerivedTime() : Time() {}

    DerivedTime operator+(const DerivedTime &other) {
      DerivedTime result;
      result.hour = this->hour + other.hour;
      result.minute = this->minute + other.minute;
      result.second = this->second + other.second;

      return result;
    }
};

class FriendTime {
  private:
    int hour, minute, second;

  public:
    FriendTime() {
      std::cout << "Enter hour, minute, second: ";
      std::cin >> hour >> minute >> second;
    }

    friend DerivedTime operator-(const DerivedTime &t1, const FriendTime &t2) {
      DerivedTime result;
      result.hour = t1.hour - t2.hour;
      result.minute = t1.minute - t2.minute;
      result.second = t1.second - t2.second;

      return result;
    }
};

int main() {
  DerivedTime t1;
  FriendTime t2;
  DerivedTime t3 = t1 - t2;
  std::cout << "Time difference: " << t3.hour << " hours " << t3.minute << " minutes " << t3.second << " seconds" << std::endl;

  return 0;
}
