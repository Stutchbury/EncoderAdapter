/**
 *
 * GPLv2 Licence https://www.gnu.org/licenses/old-licenses/gpl-2.0.txt
 * 
 * Copyright (c) 2025 Philip Fletcher <philip.fletcher@stutchbury.com>
 * 
 */

#ifndef EncoderAdapter_h
#define EncoderAdapter_h

#include <Arduino.h>


/**
 * @brief A lightweight adapter abstract class for encoders.
 * 
 */
class EncoderAdapter {

public:

    /**
     * @brief For compatibility with the Arduino library convention.
     * 
     * @details Must be implemented (but can be empty) as some touch libraries require it. Can return a boolean to idicate if initialisation has failed.
     * 
     * @return true The initialisation was successful.
     * @return false The initialisation was failed.
     */
    virtual bool begin(void) = 0;


    /**
     * @brief Get the current position as reported by the encoder class.
     * 
     * @return int32_t The position. May be positive or negative.
     */
    virtual int32_t getPosition(void) = 0;

    /**
     * @brief Set the a new position of the encoder. For some libraries this may only allow it to be set to 0.
     * 
     * @param pos The desired new position.
     */
    virtual void setPosition(int32_t pos) = 0;




protected:



};


#endif