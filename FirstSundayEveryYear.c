DateTable = 

var firstday = DATE(YEAR(Now()), 1, 1) + MOD(8 - WEEKDAY(DATE(YEAR(now()), 1, 1)), 7)
var lastday = firstday + 363 //sunday,31dec23  is week 53, but in mars we only do up till 52 weeks


return CALENDAR(
    
    firstday,lastday
)
