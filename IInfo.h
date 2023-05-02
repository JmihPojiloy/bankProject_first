#pragma once
#ifndef IINFO_H
#define IINFO_H
class IInfo
{
public:
	virtual ~IInfo() = default;
	virtual void ClientList() = 0;
};

#endif