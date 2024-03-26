/*
 *  pid.hpp
 *
 *  Created on: 2024/3/36
 * 
 *  Author: onlydcx
 */

#pragma once

template <typename T>

class PID {
    public:
        PID() {
            _dt = 1;
            _kp = 0;
            _ki = 0;
            _kd = 0;
            _error = 0;
            _prev_error = 0;
            _integral = 0;
            _prev_integral = 0;
            _derivative = 0;
            _output = 0;
        };

        void setPID(T p, T i, T d) {
            _kp = p;
            _ki = i;
            _kd = d;
        }

        void setProcessTime(T tim) {
            if (tim == 0) {
                tim = 1;
            }
            _dt = tim;
        }

        T update(T target, T feedback) {
            _error = target - feedback;
            _integral += _error;
            _derivative = (_error - _prev_error) / (_dt);
            _prev_error = _error;
            _output = _kp * _error + _ki * _integral + _kd * _derivative;
            return _output;
        }

    private:
        T _dt;
        T _kp, _ki, _kd;
        T _error, _prev_error, _integral, _prev_integral, _derivative, _output;
};
