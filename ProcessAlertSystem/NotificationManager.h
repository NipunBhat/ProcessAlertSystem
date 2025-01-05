#pragma once

#include "NotificationIntf.h"
#include "NotificationPublisher.h"

class SMSNotification : public INotification
{
public:
	SMSNotification();
	void Send(const std::string& message) override;
	~SMSNotification();

public:

private:
	std::shared_ptr<CNotificationPublisher> _pNotifPublisher;
};

class EMAILNotification : public INotification
{
public:
	EMAILNotification();
	void Send(const std::string& message) override;
	~EMAILNotification();

public:

private:
	std::shared_ptr<CNotificationPublisher> _pNotifPublisher;
};