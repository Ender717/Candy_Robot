#include "vex/MotorAdapter.hpp"

namespace vex
{
MotorAdapter::MotorAdapter(std::unique_ptr<pros::Motor>& motor) : m_motor{std::move(motor)}
{

}

void MotorAdapter::setRPM(double RPM)
{
    m_motor->move_velocity(RPM);
}

double MotorAdapter::getRPM()
{
    return m_motor->get_actual_velocity();
}
}