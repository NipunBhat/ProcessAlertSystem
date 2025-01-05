#pragma once

#include "NotificationManager.h"
#include "NotificationPublisher.h"
#include <iostream>

CSMSNotification::CSMSNotification()
{
	//NOP
}

CSMSNotification::~CSMSNotification()
{
	//NOP
}

void CSMSNotification::Send(const std::string &message)
{
	std::cout << "SMS Notification :: " + message << std::endl;
}

CEMAILNotification::CEMAILNotification()
{
	//NOP
}

CEMAILNotification::~CEMAILNotification()
{
	//NOP
}

void CEMAILNotification::Send(const std::string& message)
{
	std::cout << "EMAIL Notification :: " + message << std::endl;
}