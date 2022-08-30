Not logged to Demand Forecasting last Month = 

var arr = {"Should use", "Could use"}
var main_calc =
calculate(
    CONCATENATEX(
        values(MainQuery[User Name]),MainQuery[User Name],unichar(10) //unichar in dax, char in excel
        ), 
    filter(
        MainQuery,

//CHANGE THIS REPORT
    MainQuery[Demand Forecasting] in arr  &&
    MainQuery[Demand Forecasting - Access]= "TRUE" &&

//previous month and logging frequency = 0
    month(MainQuery[Date]) = month(TODAY()) -1  &&
    [Total Logs] = 0 //tested for 1, revert back to 0
    )
    
)
return 

if(len(main_calc) = 0,"No user to display", main_calc)

