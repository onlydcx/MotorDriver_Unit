/*
 *  Motor.cpp
 *
 *  Created on: 2024/4/9
 * 
 *  Author: onlydcx
 */

#pragma once

struct MotorSpec {
    const uint8_t voltage;
    const float Torque_constant;
    const uint16_t Speed_constant;
    const float Mech_constant;
}

struct MotorSpec dcx16L = {
    12, 5.47, 1280, 4.2
};