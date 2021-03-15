#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include<stdio.h>
#include<string.h>

typedef struct VehicleData{
    unsigned int EngCapacity,YearOfLaunch;
    unsigned long VehPrice;
    char ModelName[20],OEM[20],VehColor[20];
}VehData;

VehData *displayOne(VehData *ptr,int i);
VehData *displayAll(VehData *ptr[],int len);
VehData *readData(VehData *);
VehData *numOEM(VehData *ptr,int len,char *name);
VehData *AvgPrice(VehData *ptr,int len);
VehData *VehiclesWithSpecificColor(VehData *ptr,int len,const char*name);
VehData *MaxEngineCapacaity(VehData *ptr,int len);
VehData *YearOfLaunch(VehData *ptr,int len);

#endif // HEADER_H_INCLUDED
