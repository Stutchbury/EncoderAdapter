/**
 *
 * GPLv2 Licence https://www.gnu.org/licenses/old-licenses/gpl-2.0.txt
 * 
 * Copyright (c) 2025 Philip Fletcher <philip.fletcher@stutchbury.com>
 * 
 */

#include <PjrcEncoderAdapter.h>


    PjrcEncoderAdapter::PjrcEncoderAdapter( uint8_t encoderPin1, uint8_t encoderPin2 )
        {
            pinA = encoderPin1;
            pinB = encoderPin2;
        };

    PjrcEncoderAdapter::~PjrcEncoderAdapter() {
        delete encoder;
    }


    bool  PjrcEncoderAdapter::begin(void) {
        // PJRC's Encoder appears to have begin() functionality on its way but something has gone wrong with the versioning 
        // https://github.com/PaulStoffregen/Encoder/issues/106#issuecomment-2621583974
        //encoder->begin(pinA, pinB);
        encoder = new Encoder(pinA, pinB); 
        return true;
    }

    int32_t PjrcEncoderAdapter::getPosition(void) {
        return encoder->read();
    }

    void PjrcEncoderAdapter::setPosition(int32_t pos) {
        encoder->write(pos);
    }
