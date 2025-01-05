#pragma once

#include "NotificationFactory.h"

CNotificationFactory::CNotificationFactory()
{
	//NOP
}

CNotificationFactory::~CNotificationFactory()
{
	//NOP
}

std::shared_ptr<INotification> CNotificationFactory::CreateNotification(ENotificationType type)
{
	std::shared_ptr<INotification> pNotificationType = nullptr;
	switch (type)
	{
	case EMAIL:
		pNotificationType = std::make_shared<CEMAILNotification>();
		break;
	case SMS:
		pNotificationType = std::make_shared<CSMSNotification>();
		break;
	default:
		std::cout << "Trying to create an invalid notification type" << std::endl;
		break;
	};
	return pNotificationType;
}