# EncoderAdapter

A very thin adapter class enabling different encoder libraries to provide the same API to projects. This library is primarily for use by the encoders and encoder buttons in the [InputEvents library](https://github.com/Stutchbury/InputEvents) but may be useful for other projects.

Only three methods are specified for the adapter that must be implemeted by concrete classes:

- <code>bool EncoderAdapter::begin(void)</code>
- <code>int32_t EncoderAdapter::getPosition(void)</code>
- <code>void EncoderAdapter::setPosition(int32_t)</code> 

Concrete implementations will likely have more methods and should implement all those required to configure the underlying library. All adapters are 'header only' to allow the Arduino IDE to compile when the underlying encoder libraries are not installed.

An adapter for PJRC's popular [Encoder](https://reference.arduino.cc/reference/en/libraries/encoder/) is provided as the  PjrcEncoderAdapter class.

> Note: Although this library lists no dependencies, it is dependent on whichever underlying encoder library is chosen.


Please see [full Doxygen generated API documentation](https://stutchbury.github.io/EncoderAdapter/api/index.html) for more information.

