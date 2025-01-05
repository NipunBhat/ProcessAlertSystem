#pragma once

#include "NotificationIntf.h"
#include "NotificationPublisher.h"

class CSMSNotification : public INotification
{
public:
	CSMSNotification();
	void Send(const std::string& message) override;
	virtual ~CSMSNotification();

protected:

private:
	std::shared_ptr<CNotificationPublisher> _pNotifPublisher;
};

class CEMAILNotification : public INotification
{
public:
	CEMAILNotification();
	void Send(const std::string& message) override;
	~CEMAILNotification();

public:

private:
	std::shared_ptr<CNotificationPublisher> _pNotifPublisher;
};