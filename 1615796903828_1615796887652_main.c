#include <stdio.h>
#include "header.h"

VehData *readData(VehData *ptr)
{
    printf("\nEnter Engine Capacity : ");
    scanf("%d",&ptr->EngCapacity);
    printf("\nYear Of Launch : ");
    scanf("%d",&ptr->YearOfLaunch);
    printf("\nVehicle Price : ");
    scanf("%u",&ptr->VehPrice);
    printf("\nModel : ");
    scanf("%s",&ptr->ModelName);
    printf("\nOEM : ");
    scanf("%s",&ptr->OEM);
    printf("\nColour : ");
    scanf("%s",&ptr->VehColor);
}
VehData *displayOne(VehData *ptr,int i)
{
    printf("\nEngine Capacity = %d",(ptr+i)->EngCapacity);
    printf("\nYear Of Launch = %d",(ptr+i)->YearOfLaunch);
    printf("\nVehicle Price = %u",(ptr+i)->VehPrice);
    printf("\nModel = %s",(ptr+i)->ModelName);
    printf("\nOEM = %s",(ptr+i)->OEM);
    printf("\nColour = %s",(ptr+i)->VehColor);
}
VehData *displayAll(VehData *ptr[],int len)
{
    printf("\nDISPLAYING VEHICLE DATA : \n");
    for(int i=0;i<len;i++)
    {
        displayOne(ptr,i);
    }
}
VehData *numOEM(VehData *ptr,int len,char *name)
{
    int count = 0;
    for(int i=0;i<len;i++)
    {
        if(strcmp(name,(ptr+i)->OEM)==0)
        {
            count++;
        }
    }
    printf("\n%d NUMBER OF VEHICLE WITH ENTERED OEM FOUND",count);
}
VehData *AvgPrice(VehData *ptr,int len)
{
    unsigned long av = 0;
    for(int i=0;i<len;i++)
    {
        av = av + ((ptr+i)->VehPrice);
    }
    av = av/len;
    printf("\nAVERAGE PRICE IS : %u",av);
}
//VehData *VehiclesWithSpecificColor(VehData *ptr,int len,const char name);
//VehData *MaxEngineCapacaity(VehData *ptr,int len);
//VehData *YearOfLaunch(VehData *ptr,int len);
int main()
{
    int len;
    printf("\nENTER NUMBER OF ENTRIES : ");
    scanf("%d",&len);
    VehData vd[len];
    VehData *ptr = &vd;
    for(int i=0;i<len;i++)
    {
        readData(ptr+i);
    }
    displayAll(ptr,len);
    char oem[20];
    printf("\nENTER OEM NAME TO FIND NUMBER OF VEHICLES OF THAT OEM : ");
    scanf("%s",&oem);
    numOEM(ptr,len,oem);
    AvgPrice(ptr,len);
    return 0;
}
