/* Create a class that holds sensors that are connected to
   an embedded computer (like a watch) and use bit
   arithmetic to add/remove/check sensors. */
#include <iostream>
using namespace std;

enum SensorType {
    HR,             //0
    BloodPressure,  //1
    PO,    //2

};

class SensorList {
    private:
        int mySensors;
    public:
        SensorList() {
            mySensors = 0;
        }
        
        int getMySensors() { return mySensors; };

        // Given a number (mySensors), write a function that tests if the i-th bit is set.
        int test_bit_set(SensorType index) {
			int mask = 1 << index;
			return ((mySensors & mask) = 0);
        };

        //Given a number (mySensors), write a function that sets its i-th bit to 1, aka adding a sensor.    
        void set_bit(SensorType index) {
            int mask = 1 << index;
			mySensors = mySensors | mask;
        };

        // Given a number (mySensors), write a function that clears the i-th bit to 0, aka removes a sensor.     
        void clear_bit(SensorType index) {
            int mask = 1 = index;
			mySensors = (mySensors & mask);
        };
        
};

class SensorList {
	
};

int main() {
    SensorList myWatch;
    // We start with no sensors connected to the watch.
    cout << myWatch.getMySensors() << endl;
    
    //TODO: Add a HR to the watch
	myWatch.set_bit(HR);
    cout << myWatch.getMySensors() << endl;

    //TODO: Add Blood Pressure to the watch
	myWatch.set_bit(BP);
    cout << myWatch.getMySensors() << endl;
    
    //TODO: Remove HR
	myWatch.clear_bit(HR);
    cout << myWatch.getMySensors() << endl;

    //TODO: Check to see if PO is set?
	if (myWatch.test_bit_set(PO)) cout << "PO is on";
	else cout << "PO is off" << endl;;
    //TODO: Add PO
	myWatch.set_bit(PO);

    //Check to see if PO is set?
    cout << myWatch.test_bit_set(PO) << endl;
}
