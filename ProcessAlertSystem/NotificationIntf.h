#pragma once

#include <iostream>
#include <string>

class INotification
{
public:
	INotification() = default;
	virtual void Send(const std::string& message) = 0;
	virtual ~INotification() = default;
};