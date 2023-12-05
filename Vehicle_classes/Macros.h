#pragma once
#ifdef VEHICLECLASSES_EXPORTS
#define VEHICLE_API __declspec(dllexport)
#else
#define VEHICLE_API __declspec(dllimport)
#endif