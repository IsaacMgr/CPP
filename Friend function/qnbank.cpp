#include <iostream>
using namespace std;
class Time {
  public:
    int hour, minute, second;

    Time() {
        cout << "Enter hour, minute, second: ";
        cin >> hour >> minute >> second;
    }
};

class DerivedTime : public Time {
  public:
        DerivedTime()
        {

        }
        DerivedTime(int x,int y,int z)
        {
            this->hour=x;
            this->minute=y;
            this->second=z;
        }

    DerivedTime operator+( DerivedTime T) {
      DerivedTime result;
      result.hour = hour + T.hour;
      result.minute = minute + T.minute;
      result.second = second + T.second;

      return result;
    }
};

class FriendTime {
  private:
    int hour, minute, second;

  public:
    

    friend DerivedTime operator-( DerivedTime t1,  FriendTime t2) {
      DerivedTime result;
      result.hour = t1.hour - t2.hour;
      result.minute = t1.minute - t2.minute;
      result.second = t1.second - t2.second;

      return result;
    }
};

int main() {
  DerivedTime t1(1,20,30);
  FriendTime t2;
  DerivedTime t3 = t1 - t2;
  cout << "Time difference: " << t3.hour << " hours " << t3.minute << " minutes " << t3.second << " seconds" << std::endl;
  return 0;
}
