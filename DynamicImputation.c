Status = 

var dz = '30DayKPI'[Number of Days from Standstill to PMO Close]
var PMO_Date = '30DayKPI'[PMO closed down date] 

var FinalCalc = if(isblank(PMO_Date),
                        SWITCH(true(),
                            dz > 30, "Not Closed Over 30 Days",
                            "Not Closed Under 30 Days"
                            ),

                            
                            (SWITCH(true(),
                                    dz > 30, "Closed Over 30 Days",
                                    "Closed Under 30 Days")
                            )
)
                                    
return
    FinalCalc

       
       
Number of Days from Standstill to PMO Close = 


/*If PMO date is blank then use today's value otherwise use default value */
var PMO_Date = if(
    isblank('30DayKPI'[PMO closed down date]), 
    today(),
    '30DayKPI'[PMO closed down date]
)
return
    DATEDIFF([Date Standstill Period Ends],PMO_Date, DAY)

Closed Over 30 Days = CALCULATE(countrows('30DayKPI'), '30DayKPI'[Status] = "Closed Over 30 Days")





