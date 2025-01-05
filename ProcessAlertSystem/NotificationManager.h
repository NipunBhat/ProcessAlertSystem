#pragma once

#include "NotificationIntf.h"

class SMSNotification : public INotification
{
public:
	SMSNotification();
	void Send(const std::string& message) override;
	~SMSNotification();
};

class EMAILNotification : public INotification
{
public:
	EMAILNotification();
	void Send(const std::string& message) override;
	~EMAILNotification();
};