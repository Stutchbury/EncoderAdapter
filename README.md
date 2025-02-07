# EncoderAdapter

EncoderAdapter is a library providing a unified encoder API. Included is an implementation for PJRC's Encoder library.

Its primary use is for the [InputEvents](https://github.com/Stutchbury/InputEvents) library's EventEncoder and EventEncoderButton classes but can also be used as a general purpose encoder adapter when writing code for different boards.

The library provides a consistent encoder API, specifying three methods that must be implemeted by concrete classes:

- <code>bool EncoderAdapter::begin(void)</code>
- <code>int32_t EncoderAdapter::getPosition(void)</code>
- <code>void EncoderAdapter::setPosition(int32_t)</code> 

Concrete implementations will likely have more methods and should implement all those required to configure the underlying library. All adapters are 'header only' to allow the Arduino IDE to compile when the underlying encoder libraries are not installed.

An adapter for PJRC's popular quadrature [Encoder](https://reference.arduino.cc/reference/en/libraries/encoder/) library is provided as the  <code>PjrcEncoderAdapter</code> class.

> Note: Although this library lists no dependencies, it is dependent on whichever underlying encoder library is chosen.


Please see [full Doxygen generated API documentation](https://stutchbury.github.io/EncoderAdapter/api/index.html) for more information.

