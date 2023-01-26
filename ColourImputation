Gate 2 Variance = 
var date2 = calculate(sum(Main[Gate 2]),filter(main,not(isblank(Main[Gate 2]))))
var date1 =calculate(sum(Main[Award Comms  - PSC]), filter(main,not(isblank(Main[Award Comms  - PSC]))))
   var diff = DATEDIFF(date1,date2,DAY)
        var check_cond = switch(diff,
                                                    0 , "GREEN",
                                                    blank(),"",
                                                    "RED"
                            )
        return check_cond
