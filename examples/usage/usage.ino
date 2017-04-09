// Example usage for arduinojson library by pmk.

#include "arduinojson.h"

// Initialize objects from the lib
Arduinojson arduinojson;

void setup() {
    // Call functions on initialized library objects that require hardware
    arduinojson.begin();
}

void loop() {
    // Use the library's initialized objects and functions
    arduinojson.process();
}
