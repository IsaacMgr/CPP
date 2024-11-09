/*
Time addtime(Time,Time)
{
    Time result;
    sec=t2.sec+t2.sec;
    min=sec/60;
    sec=sec%60;
    min+=t2.min+t2.min;
    hour=min/60;
    min=min%60;
    hour+=t2.hour+t2.hour;

    Time result;
    result.sec=T1.sec+t2.sec;
    result.min=result.sec/60;
    result.sec=result.sec%60;
    result.min+=t1.min+t2.min;
    result.hour=result.min/60;
    result.min=result.min%60;
    result.hour+=t1.hour+t2.hour;
    return result;
}*/