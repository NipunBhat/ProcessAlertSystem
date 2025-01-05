#pragma once

#include "NotificationManager.h"
#include "NotificationPublisher.h"
#include <iostream>

SMSNotification::SMSNotification()
{
	//NOP
}

SMSNotification::~SMSNotification()
{
	//NOP
}

void SMSNotification::Send(const std::string &message)
{
	std::cout << "SMS Notification :: " + message << std::endl;
}

EMAILNotification::EMAILNotification()
{
	//NOP
}

EMAILNotification::~EMAILNotification()
{
	//NOP
}

void EMAILNotification::Send(const std::string& message)
{
	std::cout << "EMAIL Notification :: " + message << std::endl;
}