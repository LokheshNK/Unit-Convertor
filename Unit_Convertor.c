#include<stdio.h>
#include<stdlib.h>
FILE *fp;
float kmcon(int choice)
{
    FILE *fp;
    fp=fopen("Project1.txt","a");
    if(fp==NULL)
    {
        printf("Error opening the file\nCannot be saved in history");
    }
    float value;
    printf("Enter the Kilometers to convert : ");
    scanf("%f",&value);
    fprintf(fp,"%.4f -> ",value);
    if(choice==1)
    {
        printf("The value in Kilometers is : %.4f km  (Same Unit)\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==2)
    {
        value=value*1000;
        printf("The value in Meter is : %.4f m\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==3)
    {
        value=value*100000;
        printf("The value in Centimeter is : %.4f cm\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==4)
    {
        value=value/1.609;
        printf("The value in Miles is : %.4f mile\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    fclose(fp);
    printf("1. YES\n2. NO\nDo you want to continue : ");
    scanf("%f",&value);
    return value;

}
float mcon(int choice)
{
    FILE *fp;
    fp=fopen("project1.txt","a");
    if(fp==NULL)
    {
        printf("Error opening the file\nCannot be saved in history");
    }
    float value;
    printf("Enter the value in Meters to convert : ");
    scanf("%f",&value);
    fprintf(fp,"%.4f -> ",value);
    if(choice==1)
    {
        value/=1000;
        printf("The value in Kilometers is : %.4f km\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==2)
    {
        printf("The value in Meter is : %.4f m  (Same Unit)\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==3)
    {
        value=value*100;
        printf("The value in Centimeter is : %.4f cm\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==4)
    {
        value=value/1609;
        printf("The value in Miles is : %.4f mile\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    fclose(fp);
    printf("1. YES\n2. NO\nDo you want to continue : ");
    scanf("%f",&value);
    return value;
}
float cmcon(int choice)
{
    FILE *fp;
    fp=fopen("project1.txt","a");
    if(fp==NULL)
    {
        printf("Error opening the file\nCannot be saved in history");
    }
    float value;
    printf("Enter the Centimeters to convert : ");
    scanf("%f",&value);
    fprintf(fp,"%.4f -> ",value);
    if(choice==1)
    {
        value/=100000;
        printf("The value in Kilometers is : %.4f km  (Same Unit)\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==2)
    {
        value=value/100;
        printf("The value in Meter is : %.4f m\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==3)
    {
        printf("The value in Centimeter is : %.4f cm  (Same unit)\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==4)
    {
        value=value/160900;
        printf("The value in Miles is : %.4f mile\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    fclose(fp);
    printf("1. YES\n2. NO\nDo you want to continue : ");
    scanf("%f",&value);
    return value;
}
float milecon(int choice)
{
    FILE *fp;
    fp=fopen("project1.txt","a");
    if(fp==NULL)
    {
        printf("Error opening the file\nCannot be saved in history");
    }
    float value;
    printf("Enter the value in Miles to convert : ");
    scanf("%f",&value);
    fprintf(fp,"%.4f -> ",value);
    if(choice==1)
    {
        value*=1.609;
        printf("The value in Kilometers is : %.4f km\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==2)
    {
        value=value*1609;
        printf("The value in Meter is : %.4f m\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==3)
    {
        value=value*160900;
        printf("The value in Centimeter is : %.4f cm\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==4)
    {
        printf("The value in Miles is : %.4f mile  (Same Unit)\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    fclose(fp);
    printf("1. YES\n2. NO\nDo you want to continue : ");
    scanf("%f",&value);
    return value;
}
float tonnecon(int choice)
{
    FILE *fp;
    fp=fopen("project1.txt","a");
    if(fp==NULL)
    {
        printf("Error opening the file\nCannot be saved in history");
    }
    float value;
    printf("Enter the value in Tonnes to convert : ");
    scanf("%f",&value);
    fprintf(fp,"%.4f -> ",value);
    if(choice==1)
    {
        printf("The value in Tonnes is : %.4f tonne  (Same unit)\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==2)
    {
        value=value*1000;
        printf("The value in Kilogram is : %.4f kg\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==3)
    {
        value=value*1000000;
        printf("The value in Gram is : %.4f g\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==4)
    {
        value*=1000000000;
        printf("The value in Milligram is : %.4f mg\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==5)
    {
        value*=2250;
        printf("The value in Pound is : %.4f lbs\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    fclose(fp);
    printf("1. YES\n2. NO\nDo you want to continue : ");
    scanf("%f",&value);
    return value;
}
float kgcon(int choice)
{
    FILE *fp;
    fp=fopen("project1.txt","a");
    if(fp==NULL)
    {
        printf("Error opening the file\nCannot be saved in history");
    }
    float value;
    printf("Enter the value in Kilograms to convert : ");
    scanf("%f",&value);
    fprintf(fp,"%.4f -> ",value);
    if(choice==1)
    {
        value/=1000;
        printf("The value in Tonnes is : %.4f tonne\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==2)
    {
        printf("The value in Kilogram is : %.4f kg  (Same Unit)\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==3)
    {
        value=value*1000;
        printf("The value in Gram is : %.4f g\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==4)
    {
        value*=1000000;
        printf("The value in Milligram is : %.4f mg\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==5)
    {
        value*=2.250;
        printf("The value in Pound is : %.4f lbs\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    fclose(fp);
    printf("1. YES\n2. NO\nDo you want to continue : ");
    scanf("%f",&value);
    return value;
}
float gcon(int choice)
{
    FILE *fp;
    fp=fopen("project1.txt","a");
    if(fp==NULL)
    {
        printf("Error opening the file\nCannot be saved in history");
    }
    float value;
    printf("Enter the value in Grams to convert : ");
    scanf("%f",&value);
    fprintf(fp,"%.4f -> ",value);
    if(choice==1)
    {
        value/=1000000;
        printf("The value in Tonnes is : %.4f tonne\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==2)
    {
        value/=1000;
        printf("The value in Kilogram is : %.4f kg\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==3)
    {
        printf("The value in Gram is : %.4f g  (Same Unit)\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==4)
    {
        value*=1000;
        printf("The value in Milligram is : %.4f mg\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==5)
    {
        value/=453.6;
        printf("The value in Pound is : %.4f lbs\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    fclose(fp);
    printf("1. YES\n2. NO\nDo you want to continue : ");
    scanf("%f",&value);
    return value;
}
float milligcon(int choice)
{
    FILE *fp;
    fp=fopen("project1.txt","a");
    if(fp==NULL)
    {
        printf("Error opening the file\nCannot be saved in history");
    }
    float value;
    printf("Enter the value in Milligrams to convert : ");
    scanf("%f",&value);
    fprintf(fp,"%.4f -> ",value);
    if(choice==1)
    {
        value/=1000000000;
        printf("The value in Tonnes is : %.4f tonne\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==2)
    {
        value/=1000000;
        printf("The value in Kilogram is : %.4f kg\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==3)
    {
        value/=1000;
        printf("The value in Gram is : %.4f g\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==4)
    {
        printf("The value in Milligram is : %.4f mg  (Same Unit)\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==5)
    {
        value/=453600;
        printf("The value in Pound is : %.4f lbs\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    fclose(fp);
    printf("1. YES\n2. NO\nDo you want to continue : ");
    scanf("%f",&value);
    return value;
}
float poundcon(int choice)
{
    FILE *fp;
    fp=fopen("project1.txt","a");
    if(fp==NULL)
    {
        printf("Error opening the file\nCannot be saved in history");
    }
    float value;
    printf("Enter the value in Pounds to convert : ");
    scanf("%f",&value);
    fprintf(fp,"%.4f -> ",value);
    if(choice==1)
    {
        value/=2250;
        printf("The value in Tonnes is : %.4f tonne\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==2)
    {
        value/=2.205;
        printf("The value in Kilogram is : %.4f kg\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==3)
    {
        value*=453.6;
        printf("The value in Gram is : %.4f g\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==4)
    {
        value*=453600;
        printf("The value in Milligram is : %.4f mg\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==5)
    {
        printf("The value in Pound is : %.4f lbs  (Same Unit)\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    fclose(fp);
    printf("1. YES\n2. NO\nDo you want to continue : ");
    scanf("%f",&value);
    return value;
}
float yrcon(int choice)
{
    FILE *fp;
    fp=fopen("project1.txt","a");
    if(fp==NULL)
    {
        printf("Error opening the file\nCannot be saved in history");
    }
    float value;
    printf("Enter the number of years to convert : ");
    scanf("%f",&value);
    fprintf(fp,"%.4f -> ",value);
    if(choice==1)
    {
        printf("The value in Years is : %.4f\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==2)
    {
        value=value*12;
        printf("The value in Months is : %.4f\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==3)
    {
        value=value*365;
        printf("The value in Days is : %.4f\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==4)
    {
        value=value*8760;
        printf("The value in hours is : %.4f\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==5)
    {
        value=value*525600;
        printf("The value in Minutes is : %.4f\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==6)
    {
        value=value*31536000;
        printf("The value in seconds is : %.4f\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    fclose(fp);
    printf("1. YES\n2. NO\nDo you want to continue : ");
    scanf("%f",&value);
    return value;
}
float moncon(int choice)
{
    FILE *fp;
    fp=fopen("project1.txt","a");
    if(fp==NULL)
    {
        printf("Error opening the file\nCannot be saved in history");
    }
    float value;
    printf("Enter the number of months to convert : ");
    scanf("%f",&value);
    fprintf(fp,"%.4f -> ",value);
    if(choice==1)
    {
        value=value/12;
        printf("The value in Years is : %.4f\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==2)
    {
        printf("The value in Months is : %.4f\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==3)
    {
        value=value*30.417;
        printf("The value in Days is : %.4f\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==4)
    {
        value=value*730;
        printf("The value in hours is : %.4f\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==5)
    {
        value=value*43800;
        printf("The value in Minutes is : %.4f\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==6)
    {
        value=value*2628000;
        printf("The value in seconds is : %.4f\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    fclose(fp);
    printf("1. YES\n2. NO\nDo you want to continue : ");
    scanf("%f",&value);
    return value;
}
float daycon(int choice)
{
    FILE *fp;
    fp=fopen("project1.txt","a");
    if(fp==NULL)
    {
        printf("Error opening the file\nCannot be saved in history");
    }
    float value;
    printf("Enter the number of days to convert : ");
    scanf("%f",&value);
    fprintf(fp,"%.4f -> ",value);
    if(choice==1)
    {
        value/=365;
        printf("The value in Years is : %.4f\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==2)
    {
        value=value/30.417;
        printf("The value in Months is : %.4f\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==3)
    {
        printf("The value in Days is : %.4f\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==4)
    {
        value=value*24;
        printf("The value in hours is : %.4f\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==5)
    {
        value=value*1440;
        printf("The value in Minutes is : %.4f\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==6)
    {
        value=value*86400;
        printf("The value in seconds is : %.4f\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    fclose(fp);
    printf("1. YES\n2. NO\nDo you want to continue : ");
    scanf("%f",&value);
    return value;
}
float hrcon(int choice)
{
    FILE *fp;
    fp=fopen("project1.txt","a");
    if(fp==NULL)
    {
        printf("Error opening the file\nCannot be saved in history");
    }
    float value;
    printf("Enter the number of Hours to convert : ");
    scanf("%f",&value);
    fprintf(fp,"%.4f -> ",value);
    if(choice==1)
    {
        value/=8760;
        printf("The value in Years is : %.4f\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==2)
    {
        value=value/730;
        printf("The value in Months is : %.4f\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==3)
    {
        value/=24;
        printf("The value in Days is : %.4f\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==4)
    {
        printf("The value in hours is : %.4f\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==5)
    {
        value=value*60;
        printf("The value in Minutes is : %.4f\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==6)
    {
        value=value*3600;
        printf("The value in seconds is : %.4f\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    fclose(fp);
    printf("1. YES\n2. NO\nDo you want to continue : ");
    scanf("%f",&value);
    return value;
}
float mincon(int choice)
{
    FILE *fp;
    fp=fopen("project1.txt","a");
    if(fp==NULL)
    {
        printf("Error opening the file\nCannot be saved in history");
    }
    float value;
    printf("Enter the number of Minutes to convert : ");
    scanf("%f",&value);
    fprintf(fp,"%.4f -> ",value);
    if(choice==1)
    {
        value/=525600;
        printf("The value in Years is : %.4f\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==2)
    {
        value=value/43800;
        printf("The value in Months is : %.4f\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==3)
    {
        value/=1440;
        printf("The value in Days is : %.4f\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==4)
    {
        value=value/60;
        printf("The value in hours is : %.4f\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==5)
    {
        printf("The value in Minutes is : %.4f\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==6)
    {
        value=value*60;
        printf("The value in seconds is : %.4f\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    fclose(fp);
    printf("1. YES\n2. NO\nDo you want to continue : ");
    scanf("%f",&value);
    return value;
}
float seccon(int choice)
{
    FILE *fp;
    fp=fopen("project1.txt","a");
    if(fp==NULL)
    {
        printf("Error opening the file\nCannot be saved in history");
    }
    float value;
    printf("Enter the number of Seconds to convert : ");
    scanf("%f",&value);
    fprintf(fp,"%.4f -> ",value);
    if(choice==1)
    {
        value/=31540000;
        printf("The value in Years is : %.4f\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==2)
    {
        value=value/2628000;
        printf("The value in Months is : %.4f\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==3)
    {
        value/=86400;
        printf("The value in Days is : %.4f\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==4)
    {
        value=value/3600;
        printf("The value in hours is : %.4f\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==5)
    {
        value/=60;
        printf("The value in Minutes is : %.4f\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==6)
    {
        printf("The value in seconds is : %.4f (Same Unit)\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    fclose(fp);
    printf("1. YES\n2. NO\nDo you want to continue : ");
    scanf("%f",&value);
    return value;
}
float ccon(int choice)
{
    FILE *fp;
    fp=fopen("project1.txt","a");
    if(fp==NULL)
    {
        printf("Error opening the file\nCannot be saved in history");
    }
    float value;
    printf("Enter the value in Celcius to convert : ");
    scanf("%f",&value);
    fprintf(fp,"%.4f -> ",value);
    if(choice==1)
    {
        printf("The value in Celcius is : %.4f c  (Same units)\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==2)
    {
        value=((value*(9/5))+32);
        printf("The value in Fahrenheit is : %.4f f\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==3)
    {
        value+=273.15;
        printf("The value in Kelvin is : %.4f k\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    fclose(fp);
    printf("1. YES\n2. NO\nDo you want to continue : ");
    scanf("%f",&value);
    return value;
}
float fcon(int choice)
{
    FILE *fp;
    fp=fopen("project1.txt","a");
    if(fp==NULL)
    {
        printf("Error opening the file\nCannot be saved in history");
    }
    float value;
    printf("Enter the value in Fahrenheit to convert : ");
    scanf("%f",&value);
    fprintf(fp,"%.4f -> ",value);
    if(choice==1)
    {
        value=((value-32)*(5/9));
        printf("The value in Celcius is : %.4f c\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==2)
    {
        printf("The value in Fahrenheit is : %.4f f  (Same Unit)\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==3)
    {
        value=((value-32)*(5/9)+273.15);
        printf("The value in Kelvin is : %.4f k\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    fclose(fp);
    printf("1. YES\n2. NO\nDo you want to continue : ");
    scanf("%f",&value);
    return value;
}
float kcon(int choice)
{
    FILE *fp;
    fp=fopen("project1.txt","a");
    if(fp==NULL)
    {
        printf("Error opening the file\nCannot be saved in history");
    }
    float value;
    printf("Enter the value in Kelvin to convert : ");
    scanf("%f",&value);
    fprintf(fp,"%.4f -> ",value);
    if(choice==1)
    {
        value-=273.15;
        printf("The value in Celcius is : %.4f c\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==2)
    {
        value=(value-273.15)*(9/5)+32;
        printf("The value in Fahrenheit is : %.4f f\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==3)
    {
        printf("The value in Kelvin is : %.4f k  (Same Unit)\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    fclose(fp);
    printf("1. YES\n2. NO\nDo you want to continue : ");
    scanf("%f",&value);
    return value;
}
float tbcon(int choice)
{
    FILE *fp;
    fp=fopen("project1.txt","a");
    if(fp==NULL)
    {
        printf("Error opening the file\nCannot be saved in history");
    }
    float value;
    printf("Enter the value in Terrabytes to convert : ");
    scanf("%f",&value);
    fprintf(fp,"%.4f -> ",value);
    if(choice==1)
    {
        printf("The value in Terrabytes is : %.4f tb (Same Unit)\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==2)
    {
        value=value*1024;
        printf("The value in Gigabytes is : %.4f gb\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==3)
    {
        value*=1048576;
        printf("The value in Megabytes is : %.4f mb\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==4)
    {
        value*=1073741824;
        printf("The value in Kilobytes is : %.4f kb\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    fclose(fp);
    printf("1. YES\n2. NO\nDo you want to continue : ");
    scanf("%f",&value);
    return value;
}
float gbcon(int choice)
{
    FILE *fp;
    fp=fopen("project1.txt","a");
    if(fp==NULL)
    {
        printf("Error opening the file\nCannot be saved in history");
    }
    float value;
    printf("Enter the value in Gigabytes to convert : ");
    scanf("%f",&value);
    fprintf(fp,"%.4f -> ",value);
    if(choice==1)
    {
        value/=1024;
        printf("The value in Terrabytes is : %.4f tb\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==2)
    {
        printf("The value in Gigabytes is : %.4f gb  (Same Unit)\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==3)
    {
        value*=1024;
        printf("The value in Megabytes is : %.4f mb\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==4)
    {
        value*=1048576;
        printf("The value in Kilobytes is : %.4f kb\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    fclose(fp);
    printf("1. YES\n2. NO\nDo you want to continue : ");
    scanf("%f",&value);
    return value;
}
float mbcon(int choice)
{
    FILE *fp;
    fp=fopen("project1.txt","a");
    if(fp==NULL)
    {
        printf("Error opening the file\nCannot be saved in history");
    }
    float value;
    printf("Enter the value in Megabytes to convert : ");
    scanf("%f",&value);
    fprintf(fp,"%.4f -> ",value);
    if(choice==1)
    {
        value/=1048576;
        printf("The value in Terrabytes is : %.4f tb\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==2)
    {
        value/=1024;
        printf("The value in Gigabytes is : %.4f gb\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==3)
    {
        printf("The value in Megabytes is : %.4f mb  (Same Unit)\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==4)
    {
        value*=1024;
        printf("The value in Kilobytes is : %.4f kb\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    fclose(fp);
    printf("1. YES\n2. NO\nDo you want to continue : ");
    scanf("%f",&value);
    return value;
}
float kbcon(int choice)
{
    FILE *fp;
    fp=fopen("project1.txt","a");
    if(fp==NULL)
    {
        printf("Error opening the file\nCannot be saved in history");
    }
    float value;
    printf("Enter the value in Kilobytes to convert : ");
    scanf("%f",&value);
    fprintf(fp,"%.4f -> ",value);
    if(choice==1)
    {
        value/=1073741824;
        printf("The value in Terrabytes is : %.4f tb\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==2)
    {
        value/=1048576;
        printf("The value in Gigabytes is : %.4f gb\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==3)
    {
        value/=1024;
        printf("The value in Megabytes is : %.4f mb\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==4)
    {
        printf("The value in Kilobytes is : %.4f kb\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    fclose(fp);
    printf("1. YES\n2. NO\nDo you want to continue : ");
    scanf("%f",&value);
    return value;
}
float kwcon(int choice)
{
    FILE *fp;
    fp=fopen("project1.txt","a");
    if(fp==NULL)
    {
        printf("Error opening the file\nCannot be saved in history");
    }
    float value;
    printf("Enter the value in Kilowatt to convert : ");
    scanf("%f",&value);
    fprintf(fp,"%.4f -> ",value);
    if(choice==1)
    {
        printf("The value in Kilowatt is : %.4f kw\t(Same units)\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==2)
    {
        value=value*1000;
        printf("The value in Watts is : %.4f w\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==3)
    {
        value*=3600000;
        printf("The value in Joules is : %.4f j\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    fclose(fp);
    printf("1. YES\n2. NO\nDo you want to continue : ");
    scanf("%f",&value);
    return value;
}
float wattcon(int choice)
{
    FILE *fp;
    fp=fopen("project1.txt","a");
    if(fp==NULL)
    {
        printf("Error opening the file\nCannot be saved in history");
    }
    float value;
    printf("Enter the value in Watt to convert : ");
    scanf("%f",&value);
    fprintf(fp,"%.4f -> ",value);
    if(choice==1)
    {
        value/=1000;
        printf("The value in Kilowatt is : %.4f w\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==2)
    {
        printf("The value in Watts is : %.4f w\t(Same units)\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==3)
    {
        printf("The value in Joules is : %.4f j\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    fclose(fp);
    printf("1. YES\n2. NO\nDo you want to continue : ");
    scanf("%f",&value);
    return value;
}
float jolcon(int choice)
{
    FILE *fp;
    fp=fopen("project1.txt","a");
    if(fp==NULL)
    {
        printf("Error opening the file\nCannot be saved in history");
    }
    float value;
    printf("Enter the value in Joules to convert : ");
    scanf("%f",&value);
    fprintf(fp,"%.4f -> ",value);
    if(choice==1)
    {
        value/=1000;
        printf("The value in Kilowatt is : %.4f kw\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==2)
    {
        printf("The value in Watts is : %.4f w\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==3)
    {
        printf("The value in Joules is : %.4f j\t(same units)\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    fclose(fp);
    printf("1. YES\n2. NO\nDo you want to continue : ");
    scanf("%f",&value);
    return value;
}
float litcon(int choice)
{
    FILE *fp;
    fp=fopen("project1.txt","a");
    if(fp==NULL)
    {
        printf("Error opening the file\nCannot be saved in history");
    }
    float value;
    printf("Enter the Litres to convert : ");
    scanf("%f",&value);
    fprintf(fp,"%.4f -> ",value);
    if(choice==1)
    {
        printf("The value in Litres is : %.4f l (Same input)\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==2)
    {
        value/=1000000000000;
        printf("The value in Cubic Kilometers is : %.4f km^3\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==3)
    {
        value=value/1000;
        printf("The value in Cubic Meters is : %.4f m^3\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==4)
    {
        value=value*1000;
        printf("The value in Centimeters is : %.4f cm^3\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==5)
    {
        value=value*1000000;
        printf("The value in Cubic Millimeter is : %.4f mm^3\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==6)
    {
        value=value*28.317;
        printf("The value in Cubic Foot is : %.4f ft^3\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    fclose(fp);
    printf("1. YES\n2. NO\nDo you want to continue : ");
    scanf("%f",&value);
    return value;
}
float cubkilcon(int choice)
{
    FILE *fp;
    fp=fopen("project1.txt","a");
    if(fp==NULL)
    {
        printf("Error opening the file\nCannot be saved in history");
    }
    float value;
    printf("Enter Cubic Kilometers to convert : ");
    scanf("%f",&value);
    fprintf(fp,"%.4f -> ",value);
    if(choice==1)
    {
        value*=1000000000000;
        printf("The value in Litres is : %.4f l\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==2)
    {
        printf("The value in Cubic Kilometers is : %.4f km^3 (Same unit)\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==3)
    {
        value=value*1000000000;
        printf("The value in Cubic Meters is : %.4f m^3\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==4)
    {
        value=value*1000000000000000;
        printf("The value in Cubic Centimeters is : %.4f cm^3\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==5)
    {
        value=value*1000000000000000000;
        printf("The value in Cubic Millimeter is : %.4f mm^3\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==6)
    {
        value=value*35310000000;
        printf("The value in Cubic Foot is : %.4f ft^3\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    fclose(fp);
    printf("1. YES\n2. NO\nDo you want to continue : ");
    scanf("%f",&value);
    return value;
}
float cubmcon(int choice)
{
    FILE *fp;
    fp=fopen("project1.txt","a");
    if(fp==NULL)
    {
        printf("Error opening the file\nCannot be saved in history");
    }
    float value;
    printf("Enter Cubic Meters to convert : ");
    scanf("%f",&value);
    fprintf(fp,"%.4f -> ",value);
    if(choice==1)
    {
        value*=1000;
        printf("The value in Litres is : %.4f l\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==2)
    {
        value/=1000000000;
        printf("The value in Cubic Kilometers is : %.4f km^3\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==3)
    {
        value=value*1000000000;
        printf("The value in Cubic Meters is : %.4f m^3\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==4)
    {
        value=value*1000000000000000;
        printf("The value in Cubic Centimeters is : %.4f cm^3\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==5)
    {
        value=value*1000000000000000000;
        printf("The value in Cubic Millimeter is : %.4f mm^3\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==6)
    {
        value=value*35310000000;
        printf("The value in Cubic Foot is : %.4f ft^3\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    fclose(fp);
    printf("1. YES\n2. NO\nDo you want to continue : ");
    scanf("%f",&value);
    return value;
}
float cubcenticon(int choice)
{
    FILE *fp;
    fp=fopen("project1.txt","a");
    if(fp==NULL)
    {
        printf("Error opening the file\nCannot be saved in history");
    }
    float value;
    printf("Enter Cubic Centimeters to convert : ");
    scanf("%f",&value);
    fprintf(fp,"%.4f -> ",value);
    if(choice==1)
    {
        value/=1000;
        printf("The value in Litres is : %.4f l\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==2)
    {
        value/=1000000000000000;
        printf("The value in Cubic Kilometers is : %.4f km^3\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==3)
    {
        value=value*1000000;
        printf("The value in Cubic Meters is : %.4f m^3\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==4)
    {
        printf("The value in Cubic Centimeters is : %.4f cm^3  (Same unit)\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==5)
    {
        value=value*1000;
        printf("The value in Cubic Millimeter is : %.4f mm^3\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==6)
    {
        value=value/28320;
        printf("The value in Cubic Foot is : %.4f ft^3\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    fclose(fp);
    printf("1. YES\n2. NO\nDo you want to continue : ");
    scanf("%f",&value);
    return value;
}
float cubmillicon(int choice)
{
    FILE *fp;
    fp=fopen("project1.txt","a");
    if(fp==NULL)
    {
        printf("Error opening the file\nCannot be saved in history");
    }
    float value;
    printf("Enter Cubic Millimeters to convert : ");
    scanf("%f",&value);
    fprintf(fp,"%.4f -> ",value);
    if(choice==1)
    {
        value/=1000000;
        printf("The value in Litres is : %.4f l\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==2)
    {
        value/=1000000000000000000;
        printf("The value in Cubic Kilometers is : %.4f km^3\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==3)
    {
        value=value*1000000000;
        printf("The value in Cubic Meters is : %.4f m^3\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==4)
    {
        value/=1000;
        printf("The value in Cubic Centimeters is : %.4f cm^3\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==5)
    {
        printf("The value in Cubic Millimeter is : %.4f mm^3  (Same Unit)\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==6)
    {
        value=value/28320000;
        printf("The value in Cubic Foot is : %.4f ft^3\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    fclose(fp);
    printf("1. YES\n2. NO\nDo you want to continue : ");
    scanf("%f",&value);
    return value;
}
float cubfootcon(int choice)
{
    FILE *fp;
    fp=fopen("project1.txt","a");
    if(fp==NULL)
    {
        printf("Error opening the file\nCannot be saved in history");
    }
    float value;
    printf("Enter Cubic Foot to convert : ");
    scanf("%f",&value);
    fprintf(fp,"%.4f -> ",value);
    if(choice==1)
    {
        value*=28.3168;
        printf("The value in Litres is : %.4f l\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==2)
    {
        value/=35310000000;
        printf("The value in Cubic Kilometers is : %.4f km^3\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==3)
    {
        value=value/35.315;
        printf("The value in Cubic Meters is : %.4f m^3\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==4)
    {
        value*=28320;
        printf("The value in Cubic Centimeters is : %.4f cm^3\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==5)
    {
        value*=28320000;
        printf("The value in Cubic Millimeter is : %.4f mm^3\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==6)
    {
        printf("The value in Cubic Foot is : %.4f ft^3  (Same Unit)\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    fclose(fp);
    printf("1. YES\n2. NO\nDo you want to continue : ");
    scanf("%f",&value);
    return value;
}
float sqkmcon(int choice)
{
    FILE *fp;
    fp=fopen("project1.txt","a");
    if(fp==NULL)
    {
        printf("Error opening the file\nCannot be saved in history");
    }
    float value;
    printf("Enter Square Kilometer to convert : ");
    scanf("%f",&value);
    fprintf(fp,"%.4f -> ",value);
    if(choice==1)
    {
        printf("The value in Square Kilometer is : %.4f km^2  (Same Unit)\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==2)
    {
        value=value*1000000;
        printf("The value in Square Meters is : %.4f m^2\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==3)
    {
        value=value*10000000000;
        printf("The value in Square Centimeter is : %.4f cm^2\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==4)
    {
        value/=1000000000000;
        printf("The value in Square Millimeter is : %.4f mm^2\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    fclose(fp);
    printf("1. YES\n2. NO\nDo you want to continue : ");
    scanf("%f",&value);
    return value;
}
float sqmcon(int choice)
{
    FILE *fp;
    fp=fopen("project1.txt","a");
    if(fp==NULL)
    {
        printf("Error opening the file\nCannot be saved in history");
    }
    float value;
    printf("Enter the value in Square Meter to convert : ");
    scanf("%f",&value);
    fprintf(fp,"%.4f -> ",value);
    if(choice==1)
    {
        value=value/1000000;
        printf("The value in Square Kilometer is : %.4f km^2\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==2)
    {
        printf("The value in Square Meters is : %.4f m^2  (Same Unit)\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==3)
    {
        value=value*10000;
        printf("The value in Square Centimeter is : %.4f cm^2\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==4)
    {
        value*=1000000;
        printf("The value in Square Millimeter is : %.4f mm^2\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    fclose(fp);
    printf("1. YES\n2. NO\nDo you want to continue : ");
    scanf("%f",&value);
    return value;
}
float sqcmcon(int choice)
{
    FILE *fp;
    fp=fopen("project1.txt","a");
    if(fp==NULL)
    {
        printf("Error opening the file\nCannot be saved in history");
    }
    float value;
    printf("Enter the value in Square Centimeter to convert : ");
    scanf("%f",&value);
    fprintf(fp,"%.4f -> ",value);
    if(choice==1)
    {
        value=value/10000000000;
        printf("The value in Square Kilometer is : %.4f km^2\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==2)
    {
        value=value/10000;
        printf("The value in Square Meters is : %.4f m^2\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==3)
    {
        printf("The value in Square Centimeter is : %.4f cm^2  (Same Unit)\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==4)
    {
        value*=100;
        printf("The value in Square Millimeter is : %.4f mm^2\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    fclose(fp);
    printf("1. YES\n2. NO\nDo you want to continue : ");
    scanf("%f",&value);
    return value;
}
float sqmmcon(int choice)
{
    FILE *fp;
    fp=fopen("project1.txt","a");
    if(fp==NULL)
    {
        printf("Error opening the file\nCannot be saved in history");
    }
    float value;
    printf("Enter the value in Square Centimeter to convert : ");
    scanf("%f",&value);
    fprintf(fp,"%.4f -> ",value);
    if(choice==1)
    {
        value=value/1000000000000;
        printf("The value in Square Kilometer is : %.4f km^2\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==2)
    {
        value=value/1000000;
        printf("The value in Square Meters is : %.4f m^2\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==3)
    {
        value=value/100;
        printf("The value in Square Centimeter is : %.4f cm^2\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==4)
    {
        printf("The value in Square Millimeter is : %.4f mm^2  (Same Unit)\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    fclose(fp);
    printf("1. YES\n2. NO\nDo you want to continue : ");
    scanf("%f",&value);
    return value;
}
float mhcon(int choice)
{
    FILE *fp;
    fp=fopen("project1.txt","a");
    if(fp==NULL)
    {
        printf("Error opening the file\nCannot be saved in history");
    }
    float value;
    printf("Enter the value in Miles/Hour to convert : ");
    scanf("%f",&value);
    fprintf(fp,"%.4f -> ",value);
    if(choice==1)
    {
        printf("The value in Miles/Hour is : %.4f miles/h  (Same Unit)\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==2)
    {
        value=value*1.609;
        printf("The value in Kilometer/Hour is : %.4f km/h\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==3)
    {
        value=value/2237;
        printf("The value in Kilometer/Second is : %.4f km/s\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==4)
    {
        value=value/2.237;
        printf("The value in Meter/Second is : %.4f m/s\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    fclose(fp);
    printf("1. YES\n2. NO\nDo you want to continue : ");
    scanf("%f",&value);
    return value;
}
float khcon(int choice)
{
    FILE *fp;
    fp=fopen("project1.txt","a");
    if(fp==NULL)
    {
        printf("Error opening the file\nCannot be saved in history");
    }
    float value;
    printf("Enter the value in Kilometer/Hour to convert : ");
    scanf("%f",&value);
    fprintf(fp,"%.4f -> ",value);
    if(choice==1)
    {
        value/=1.609;
        printf("The value in Miles/Hour is : %.4f miles/h\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==2)
    {
        printf("The value in Kilometer/Hour is : %.4f km/h  (Same unit)\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==3)
    {
        value=value/3600;
        printf("The value in Kilometer/Second is : %.4f km/s\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==4)
    {
        value=value/3.6;
        printf("The value in Meter/Second is : %.4f m/s\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    fclose(fp);
    printf("1. YES\n2. NO\nDo you want to continue : ");
    scanf("%f",&value);
    return value;
}
float kscon(int choice)
{
    FILE *fp;
    fp=fopen("project1.txt","a");
    if(fp==NULL)
    {
        printf("Error opening the file\nCannot be saved in history");
    }
    float value;
    printf("Enter the value in Kilometer/Second to convert : ");
    scanf("%f",&value);
    fprintf(fp,"%.4f -> ",value);
    if(choice==1)
    {
        value*=2237;
        printf("The value in Miles/Hour is : %.4f miles/h\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==2)
    {
        value*=3600;
        printf("The value in Kilometer/Hour is : %.4f km/h\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==3)
    {
        printf("The value in Kilometer/Second is : %.4f km/s  (Same Unit)\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==4)
    {
        value=value*1000;
        printf("The value in Meter/Second is : %.4f m/s\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    fclose(fp);
    printf("1. YES\n2. NO\nDo you want to continue : ");
    scanf("%f",&value);
    return value;
}
float mscon(int choice)
{
    FILE *fp;
    fp=fopen("project1.txt","a");
    if(fp==NULL)
    {
        printf("Error opening the file\nCannot be saved in history");
    }
    float value;
    printf("Enter the value in Meter/Second to convert : ");
    scanf("%f",&value);
    fprintf(fp,"%.4f -> ",value);
    if(choice==1)
    {
        value*=2.237;
        printf("The value in Miles/Hour is : %.4f miles/h\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==2)
    {
        value*=3.6;
        printf("The value in Kilometer/Hour is : %.4f km/h\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==3)
    {
        value=value/1000;
        printf("The value in Kilometer/Second is : %.4f km/s\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    else if(choice==4)
    {
        printf("The value in Meter/Second is : %.4f m/s  (Same Unit)\n",value);
        fprintf(fp,"%.4f\n",value);
    }
    fclose(fp);
    printf("1. YES\n2. NO\nDo you want to continue : ");
    scanf("%f",&value);
    return value;
}
int main()
{
        FILE *fp;
        int h=0;
        char c;
        home:
        fp=fopen("project1.txt","a");
        if(fp==NULL)
        {
            printf("Error opening the file\nCannot be saved in history");
        }
        system("color F0");
        int a,b,choice,d,values;
        printf("\t\t\t\t\t\t   UNIT CONVERTORS\n");
        printf("1. Length\n2. Mass\n3. Time\n4. Temperature\n5. Bytes\n6. Power\n7. Volume\n8. Area\n9. Speed\n10. History\n11. Exit\n");
        printf("Enter your Choice : ");
        scanf("%d",&a);
        system("cls");
        if(a==1)
        {
            fprintf(fp,"Length\n");
            printf("1. Kilometer\n2. Meter\n3. Centimeter\n4. Miles\n5. Go Back\n6. Exit\n");
            a11:
            printf("Enter the choice or current unit : ");
            scanf("%d",&b);
            switch(b)
            {
                case 1:
                fprintf(fp,"Kilometer");
                break;
                case 2:
                fprintf(fp,"Meter");
                break;
                case 3:
                fprintf(fp,"Centimeter");
                break;
                case 4:
                fprintf(fp,"Miles");
                break;
            }
            if(b==5)
            {
                system("cls");
                goto home;
            }
            if(b==6)
            {
                exit(0);
            }
            if(b>6)
            {
                printf("Invalid Input\n");
                goto a11;
            }
            a12:
            printf("Enter the choice or unit to convert to : ");
            scanf("%d",&d);
            switch(d)
            {
                case 1:
                fprintf(fp," to Kilometer\n");
                break;
                case 2:
                fprintf(fp," to Meter \n");
                break;
                case 3:
                fprintf(fp," to Centimeter\n");
                break;
                case 4:
                fprintf(fp," to Miles \n");
                break;
            }
            if(d==5)
            {
                system("cls");
                goto home;
            }
            if(d==6)
            {
                exit(0);
            }
            if(d>6)
            {
                printf("Invalid Input\n");
                goto a12;
            }
            fclose(fp);
            system("cls");
            if(b==1)
            {
                if(kmcon(d)==1)
                {
                    system("cls");
                    goto home;
                }
            }
            else if(b==2)
            {
               if(mcon(d)==1)
                {
                    system("cls");
                    goto home;
                }
            }
            else if(b==3)
            {
                if(cmcon(d)==1)
                {
                    system("cls");
                    goto home;
                }
            }
            else if(b==4)
            {
                if(milecon(d)==1)
                {
                    system("cls");
                    goto home;
                }
            }
        }
        else if(a==2)
        {
            fp=fopen("Project1.txt","a");
            if(fp==NULL)
            {
                printf("Error opening the file\nCannot be saved in history");
            }
            else
            {
                fprintf(fp,"Mass\n");
                printf("1. Tonne\n2. Kilogram\n3. Gram\n4. Milligram\n5. Pound\n6. Go Back\n7. Exit\n");
                a21:
                printf("Enter the choice or current unit : ");
                scanf("%d",&b);
                switch(b)
                {
                    case 1:
                    fprintf(fp,"Tonne");
                    break;
                    case 2:
                    fprintf(fp,"Kilogram");
                    break;
                    case 3:
                    fprintf(fp,"Gram");
                    break;
                    case 4:
                    fprintf(fp,"Milligram");
                    break;
                    case 5:
                    fprintf(fp,"Pound");
                    break;
                }
                if(b==6)
                {
                    system("cls");
                    goto home;
                }
                if(b==7)
                {
                    exit(0);
                }
                if(b>7)
                {
                    printf("Invalid Input\n");
                    goto a21;
                }
                a22:
                printf("Enter the choice or unit to convert to : ");
                scanf("%d",&d);
                switch(d)
                {
                    case 1:
                    fprintf(fp," to Tonne\n");
                    break;
                    case 2:
                    fprintf(fp," to Kilogram\n");
                    break;
                    case 3:
                    fprintf(fp," to Gram\n");
                    break;
                    case 4:
                    fprintf(fp," to Milligram\n");
                    break;
                    case 5:
                    fprintf(fp," to Pound\n");
                    break;
                }
                if(d==6)
                {
                    system("cls");
                    goto home;
                }
                if(d==7)
                {
                    exit(0);
                }
                if(d>7)
                {
                    printf("Invalid Input\n");
                    goto a22;
                }
                fclose(fp);
            }
            system("cls");
            if(b==1)
            {
                if(tonnecon(d)==1)
                {
                    system("cls");
                    goto home;
                }
            }
            else if(b==2)
            {
                if(kgcon(d)==1)
                {
                    system("cls");
                    goto home;
                }
            }
            else if(b==3)
            {
                if(gcon(d)==1)
                {
                    system("cls");
                    goto home;
                }
            }
            else if(b==4)
            {
                if(milligcon(d)==1)
                {
                    system("cls");
                    goto home;
                }
            }
            else if(b==5)
            {
                if(poundcon(d)==1)
                {
                    system("cls");
                    goto home;
                }
            }
        }
        else if(a==3)
        {
            fp=fopen("Project1.txt","a");
            if(fp==NULL)
            {
                printf("Error opening the file\nCannot be saved in history");
            }
            else
            {
                fprintf(fp,"Time\n");
                printf("1. Years\n2. Months\n3. Days\n4. Hours\n5. Minutes\n6. Seconds\n7. Go Back\n8. Exit\n");
                a31:
                printf("Enter the choice or current unit : ");
                scanf("%d",&b);
                switch(b)
                {
                    case 1:
                    fprintf(fp,"Years");
                    break;
                    case 2:
                    fprintf(fp,"Months");
                    break;
                    case 3:
                    fprintf(fp,"Days");
                    break;
                    case 4:
                    fprintf(fp,"Hours");
                    break;
                    case 5:
                    fprintf(fp,"Minutes");
                    break;
                    case 6:
                    fprintf(fp,"Seconds");
                    break;
                }
                if(b==7)
                {
                    system("cls");
                    goto home;
                }
                if(b==8)
                {
                    exit(0);
                }
                if(b>8)
                {
                    printf("Invalid Input\n");
                    goto a31;
                }
                a32:
                printf("Enter the choice or unit to convert to : ");
                scanf("%d",&d);
                switch(d)
                {
                    case 1:
                    fprintf(fp," to Years\n");
                    break;
                    case 2:
                    fprintf(fp," to Months\n");
                    break;
                    case 3:
                    fprintf(fp," to Days\n");
                    break;
                    case 4:
                    fprintf(fp," to Hours\n");
                    break;
                    case 5:
                    fprintf(fp," to Minutes\n");
                    break;
                    case 6:
                    fprintf(fp," to Seconds\n");
                    break;
                }
                if(d==7)
                {
                    system("cls");
                    goto home;
                }
                if(d==8)
                {
                    exit(0);
                }
                if(d>8)
                {
                    printf("Invalid Input\n");
                    goto a32;
                }
                fclose(fp);
            }
            system("cls");
            if(b==1)
            {
                if(yrcon(d)==1)
                {
                    system("cls");
                    goto home;
                }
            }
            else if(b==2)
            {
                if(moncon(d)==1)
                {
                    system("cls");
                    goto home;
                }
            }
            else if(b==3)
            {
                if(daycon(d)==1)
                {
                    system("cls");
                    goto home;
                }
            }
            else if(b==4)
            {
                if(hrcon(d)==1)
                {
                    system("cls");
                    goto home;
                }
            }
            else if(b==5)
            {
                if(mincon(d)==1)
                {
                    system("cls");
                    goto home;
                }
            }
            else if(b==6)
            {
                if(seccon(d)==1)
                {
                    system("cls");
                    goto home;
                }
            }
            else
            {
                printf("Invalid input");
            }
        }
        else if(a==4)
        {
            fp=fopen("Project1.txt","a");
            if(fp==NULL)
            {
                printf("Error opening the file\nCannot be saved in history");
            }
            else
            {
                fprintf(fp,"Temperature\n");
                printf("1. Celsius\n2. Fahrenheit\n3. Kelvin\n4. Go Back\n5. Exit\n");
                a41:
                printf("Enter the choice or current unit : ");
                scanf("%d",&b);
                switch(b)
                {
                    case 1:
                    fprintf(fp,"Celsius");
                    break;
                    case 2:
                    fprintf(fp,"Fahrenheit");
                    break;
                    case 3:
                    fprintf(fp,"Kelvin");
                    break;
                }
                if(b==4)
                {
                    system("cls");
                    goto home;
                }
                if(b==5)
                {
                    exit(0);
                }
                if(b>5)
                {
                    printf("Invalid Input\n");
                    goto a41;
                }
                a42:
                printf("Enter the choice or unit to convert to : ");
                scanf("%d",&d);
                switch(d)
                {
                    case 1:
                    fprintf(fp," to Celcius\n");
                    break;
                    case 2:
                    fprintf(fp," to Fahrenheit \n");
                    break;
                    case 3:
                    fprintf(fp," to Kelvin\n");
                    break;
                }
                if(d==4)
                {
                    system("cls");
                    goto home;
                }
                if(d==5)
                {
                    exit(0);
                }
                if(d>5)
                {
                    printf("Invalid Input\n");
                    goto a42;
                }
                fclose(fp);
            }
            system("cls");
            if(b==1)
            {
                if(ccon(d)==1)
                {
                    system("cls");
                    goto home;
                }
            }
            else if(b==2)
            {
                if(fcon(d)==1)
                {
                    system("cls");
                    goto home;
                }
            }
            else if(b==3)
            {
                if(kcon(d)==1)
                {
                    system("cls");
                    goto home;
                }
            }
            else
            {
                printf("Invalid input");
            }
        }
         else if(a==5)
        {
            fp=fopen("Project1.txt","a");
            if(fp==NULL)
            {
                printf("Error opening the file\nCannot be saved in history");
            }
            else
            {
                fprintf(fp,"Bytes\n");
                printf("1. Terabytes\n2. Gigabytes\n3. Megabytes\n4. Kilobytes\n5. Go Back\n6. Exit\n");
                a51:
                printf("Enter the choice or current unit : ");
                scanf("%d",&b);
                switch(b)
                {
                    case 1:
                    fprintf(fp,"Terabytes");
                    break;
                    case 2:
                    fprintf(fp,"Gigabytes");
                    break;
                    case 3:
                    fprintf(fp,"Megabytes");
                    break;
                    case 4:
                    fprintf(fp,"Kilobytes");
                    break;
                }
                if(b==5)
                {
                    system("cls");
                    goto home;
                }
                if(b==6)
                {
                    exit(0);
                }
                if(b>6)
                {
                    printf("Invalid Input\n");
                    goto a51;
                }
                a52:
                printf("Enter the choice or unit to convert to : ");
                scanf("%d",&d);
                switch(d)
                {
                    case 1:
                    fprintf(fp," to Terabytes\n");
                    break;
                    case 2:
                    fprintf(fp," to Gigabytes \n");
                    break;
                    case 3:
                    fprintf(fp," to Megabytes\n");
                    break;
                    case 4:
                    fprintf(fp," to Kilobytes \n");
                    break;
                }
                if(d==5)
                {
                    system("cls");
                    goto home;
                }
                if(d==6)
                {
                    exit(0);
                }
                if(d>6)
                {
                    printf("Invalid Input\n");
                    goto a52;
                }
                fclose(fp);
            }
            system("cls");
            if(b==1)
            {
                if(tbcon(d)==1)
                {
                    system("cls");
                    goto home;
                }
            }
            else if(b==2)
            {
                if(gbcon(d)==1)
                {
                    system("cls");
                    goto home;
                }
            }
            else if(b==3)
            {
                if(mbcon(d)==1)
                {
                    system("cls");
                    goto home;
                }
            }
            else if(b==4)
            {
                if(kbcon(d)==1)
                {
                    system("cls");
                    goto home;
                }
            }
            else
            {
                printf("Invalid input");
            }
        }
        else if(a==6)
        {
            fp=fopen("Project1.txt","a");
            if(fp==NULL)
            {
                printf("Error opening the file\nCannot be saved in history");
            }
            else
            {
                fprintf(fp,"Power\n");
                printf("1. Kilowatt\n2. Watt\n3. Joules\n4. Go Back\n5. Exit\n");
                a61:
                printf("Enter the choice or current unit : ");
                scanf("%d",&b);
                switch(b)
                {
                    case 1:
                    fprintf(fp,"Kilowatt");
                    break;
                    case 2:
                    fprintf(fp,"Watt");
                    break;
                    case 3:
                    fprintf(fp,"Joules");
                    break;
                }
                if(b==4)
                {
                    system("cls");
                    goto home;
                }
                if(b==5)
                {
                    exit(0);
                }
                if(b>5)
                {
                    printf("Invalid Input\n");
                    goto a61;
                }
                a62:
                printf("Enter the choice or unit to convert to : ");
                scanf("%d",&d);
                switch(d)
                {
                    case 1:
                    fprintf(fp," to Kilowatt\n");
                    break;
                    case 2:
                    fprintf(fp," to Watt\n");
                    break;
                    case 3:
                    fprintf(fp," to Joules\n");
                    break;
                }
                if(d==4)
                {
                    system("cls");
                    goto home;
                }
                if(d==5)
                {
                    exit(0);
                }
                if(d>5)
                {
                    printf("Invalid Input\n");
                    goto a62;
                }
                fclose(fp);
            }
            system("cls");
            if(b==1)
            {
                if(kwcon(d)==1)
                {

                    system("cls");
                    goto home;
                }
            }
            else if(b==2)
            {
                if(wattcon(d)==1)
                {
                    system("cls");
                    goto home;
                }
            }
            else if(b==3)
            {
                if(jolcon(d)==1)
                {
                    system("cls");
                    goto home;
                }
            }
            else
            {
                printf("Invalid input");
            }
        }
        else if(a==7)
        {
            fp=fopen("Project1.txt","a");
            if(fp==NULL)
            {
                printf("Error opening the file\nCannot be saved in history");
            }
            else
            {
                fprintf(fp,"Volume\n");
                printf("1. Litre\n2. Cubic Kilometer\n3. Cubic Meter\n4. Cubic Centimeter\n5. Cubic Millimeter\n6. Cubic Foot\n7. Go Back\n8. Exit\n");
                a71:
                printf("Enter the choice or current unit : ");
                scanf("%d",&b);
                switch(b)
                {
                    case 1:
                    fprintf(fp,"Litre");
                    break;
                    case 2:
                    fprintf(fp,"Cubic Kilometer");
                    break;
                    case 3:
                    fprintf(fp,"Cubic Meter");
                    break;
                    case 4:
                    fprintf(fp,"Cubic Centimeter");
                    break;
                    case 5:
                    fprintf(fp,"Cubic Millimeter");
                    break;
                    case 6:
                    fprintf(fp,"Cubic foot");
                    break;
                }
                if(b==7)
                {
                    system("cls");
                    goto home;
                }
                if(b==8)
                {
                    exit(0);
                }
                if(b>8)
                {
                    printf("Invalid Input\n");
                    goto a71;
                }
                a72:
                printf("Enter the choice or unit to convert to : ");
                scanf("%d",&d);
                switch(d)
                {
                    case 1:
                    fprintf(fp," to Litre\n");
                    break;
                    case 2:
                    fprintf(fp," to Cubic Kilometer\n");
                    break;
                    case 3:
                    fprintf(fp," to Cubic Meter\n");
                    break;
                    case 4:
                    fprintf(fp," to Cubic Centimeter\n");
                    break;
                    case 5:
                    fprintf(fp," to Cubic Millimeter\n");
                    break;
                    case 6:
                    fprintf(fp," to Cubic foot\n");
                    break;
                }
                if(d==7)
                {
                    system("cls");
                    goto home;
                }
                if(d==8)
                {
                    exit(0);
                }
                if(d>8)
                {
                    printf("Invalid Input\n");
                    goto a72;
                }
                fclose(fp);
            }
            system("cls");
            if(b==1)
            {
                if(litcon(d)==1)
                {
                    system("cls");
                    goto home;
                }
            }
            else if(b==2)
            {
                if(cubkilcon(d)==1)
                {
                    system("cls");
                    goto home;
                }
            }
            else if(b==3)
            {
                if(cubmcon(d)==1)
                {
                    system("cls");
                    goto home;
                }
            }
            else if(b==4)
            {
                if(cubcenticon(d)==1)
                {
                    system("cls");
                    goto home;
                }
            }
            else if(b==5)
            {
                if(cubmillicon(d)==1)
                {
                    system("cls");
                    goto home;
                }
            }
            else if(b==6)
            {
                if(cubfootcon(d)==1)
                {
                    system("cls");
                    goto home;
                }
            }
            else
            {
                printf("Invalid input");
            }
        }
        else if(a==8)
        {
            fp=fopen("Project1.txt","a");
            if(fp==NULL)
            {
                printf("Error opening the file\nCannot be saved in history");
            }
            else
            {
                fprintf(fp,"Area\n");
                printf("1. Square kilometer  \n2. Square Meter\n3. Square centimeter\n4. Square Millimeter\n5. Go Back\n6. Exit\n");
                a81:
                printf("Enter the choice or current unit : ");
                scanf("%d",&b);
                switch(b)
                {
                    case 1:
                    fprintf(fp,"Square Kilometer");
                    break;
                    case 2:
                    fprintf(fp,"Square Meter");
                    break;
                    case 3:
                    fprintf(fp,"Square Centimeter");
                    break;
                    case 4:
                    fprintf(fp,"Square Millimeter");
                    break;
                }
                if(b==5)
                {
                    system("cls");
                    goto home;
                }
                if(b==6)
                {
                    exit(0);
                }
                if(b>6)
                {
                    printf("Invalid Input\n");
                    goto a81;
                }
                a82:
                printf("Enter the choice or unit to convert to : ");
                scanf("%d",&d);
                switch(d)
                {
                    case 1:
                    fprintf(fp," to Square Kilometer\n");
                    break;
                    case 2:
                    fprintf(fp," to Meter\n");
                    break;
                    case 3:
                    fprintf(fp," to Square Centimeter\n");
                    break;
                    case 4:
                    fprintf(fp," to Square Millimeter\n");
                    break;
                }
                if(d==5)
                {
                    system("cls");
                    goto home;
                }
                if(d==6)
                {
                    exit(0);
                }
                if(d>6)
                {
                    printf("Invalid Input\n");
                    goto a82;
                }
                fclose(fp);
            }
            system("cls");
            if(b==1)
            {
                if(sqkmcon(d)==1)
                {
                    system("cls");
                    goto home;
                }
            }
            else if(b==2)
            {
                if(sqmcon(d)==1)
                {
                    system("cls");
                    goto home;
                }
            }
            else if(b==3)
            {
                if(sqcmcon(d)==1)
                {
                    system("cls");
                    goto home;
                }
            }
            else if(b==4)
            {
                if(sqmmcon(d)==1)
                {
                    system("cls");
                    goto home;
                }
            }
            else
            {
                printf("Invalid input");
            }
        }
        else if(a==9)
        {
            fp=fopen("Project1.txt","a");
            if(fp==NULL)
            {
                printf("Error opening the file\nCannot be saved in history");
            }
            else
            {
                fprintf(fp,"Speed\n");
                printf("1. Miles/Hour\n2. Kilometer/Hour\n3. Kilometer/Second\n4. Meter/Second\n5. Go Back\n6. Exit\n");
                a91:
                printf("Enter the choice or current unit : ");
                scanf("%d",&b);
                switch(b)
                {
                    case 1:
                    fprintf(fp,"Miles/Hour");
                    break;
                    case 2:
                    fprintf(fp,"Kilometer/Hour");
                    break;
                    case 3:
                    fprintf(fp,"Kilometer/Second");
                    break;
                    case 4:
                    fprintf(fp,"Meter/Second");
                    break;
                }
                if(b==5)
                {
                    system("cls");
                    goto home;
                }
                if(b==6)
                {
                    exit(0);
                }
                if(b>6)
                {
                    printf("Invalid Input\n");
                    goto a91;
                }
                a92:
                printf("Enter the choice or unit to convert to : ");
                scanf("%d",&d);
                switch(d)
                {
                    case 1:
                    fprintf(fp," to Miles/Hour\n");
                    break;
                    case 2:
                    fprintf(fp," to Kilometer/Hour\n");
                    break;
                    case 3:
                    fprintf(fp," to Kilometer/Second\n");
                    break;
                    case 4:
                    fprintf(fp," to Meter/Second\n");
                    break;
                }
                if(d==5)
                {
                    system("cls");
                    goto home;
                }
                if(d==6)
                {
                    exit(0);
                }
                if(d>6)
                {
                    printf("Invalid Input\n");
                    goto a92;
                }
                fclose(fp);
            }
            system("cls");
            if(b==1)
            {
                if(mhcon(d)==1)
                {
                    system("cls");
                    goto home;
                }
            }
            else if(b==2)
            {
                if(khcon(d)==1)
                {
                    system("cls");
                    goto home;
                }
            }
            else if(b==3)
            {
                if(kscon(d)==1)
                {
                    system("cls");
                    goto home;
                }
            }
            else if(b==4)
            {
                if(mscon(d)==1)
                {
                    system("cls");
                    goto home;
                }
            }
            else
            {
                printf("Invalid input");
            }
        }
        else if(a==10)
        {
            fp=fopen("project1.txt","r");
            if(fp==NULL)
            {
                printf("Error opening the file\nCannot be saved in history");
            }
            else
            {
                printf("History\n\n");
                printf("1. Show History\n2. Clear History\n3. Go Back\nEnter your Choice : ");
                scanf("%d",&b);
                if(b==1)
                {
                    system("cls");
                    c=fgetc(fp);
                    while (c!=EOF)
                    {
                        printf("%c",c);
                        c=fgetc(fp);
                    }
                    fclose(fp);
                }
                else if(b==2)
                {
                    fp=fopen("project1.txt","w");
                    if(fp==NULL)
                    {
                        printf("Error opening the file\nCannot be saved in history");
                    }
                    else
                    {
                        fprintf(fp,"%s","");
                        fclose(fp);
                    }
                }
                else if(b==3)
                {
                    system("cls");
                    goto home;
                }

                    printf("\n\n1. YES\n2. NO\nDo you want to continue : ");
                    scanf("%d",&b);
                    if(b==1)
                    {
                        system("cls");
                        goto home;
                    }
                    else
                    {
                        exit(0);
                    }
                }
        }
        else if(a==11)
        {
            exit(0);
        }

        else
        {
            printf("Invalid");
            goto home;
        }
        //fclose(fp);

}

