
int rand(int min,int max)
{
    if (max<min) 
        return 0;
    if (min>max)
        return 0;
    int a=25173;
    int c=13849;
    int m=max-min+1;

    int result;

    result=result%(max-min-1)+min;

    if ((result<min)||result>max)
        return 0;

    return result;
}