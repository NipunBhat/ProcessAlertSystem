#pragma once

#include "NotificationFactory.h"

NotificationFactory::NotificationFactory()
{
	//NOP
}

NotificationFactory::~NotificationFactory()
{
	//NOP
}

std::shared_ptr<INotification> NotificationFactory::CreateNotification(NotificationType type)
{
	std::shared_ptr<INotification> pNotificationType = nullptr;
	switch (type)
	{
	case EMAIL:
		pNotificationType = std::make_shared<EMAILNotification>();
		break;
	case SMS:
		pNotificationType = std::make_shared<SMSNotification>();
		break;
	default:
		std::cout << "Trying to create an invalid notification type" << std::endl;
		break;
	};
	return pNotificationType;
}