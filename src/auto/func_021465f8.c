/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_021465f8 from https://github.com/RonyxDumb/mkds src/arm9/0214e274_Rtc_Date_GetDays.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef enum RTCWeek {
    RTC_WEEK_SUNDAY = 0,
    RTC_WEEK_MONDAY,
    RTC_WEEK_TUESDAY,
    RTC_WEEK_WEDNESDAY,
    RTC_WEEK_THURSDAY,
    RTC_WEEK_FRIDAY,
    RTC_WEEK_SATURDAY,
    RTC_WEEK_MAX
} RTCWeek;
typedef struct RTCDate {
    u32 year;
    u32 month;
    u32 day;
    RTCWeek week;
} RTCDate;
extern RTCWeek func_021465f8(RTCDate *date);
RTCWeek func_021465f8(RTCDate *date) {
    int cent;
    int year  = (int) (2000 + date->year);
    int month = (int) date->month;
    int day   = (int) date->day;

    month -= 2;
    if (month < 1) {
        month += 12;
        --year;
    }
    cent = year / 100;
    year %= 100;
    return (RTCWeek) (((26 * month - 2) / 10 + day + year + year / 4 + cent / 4 + 5 * cent) % 7);
}
