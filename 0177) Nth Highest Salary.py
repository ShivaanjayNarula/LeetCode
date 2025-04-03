import pandas as pd

def nth_highest_salary(employee: pd.DataFrame, N: int) -> pd.DataFrame:
    employee = employee.drop_duplicates(subset = ["salary"]).reset_index(drop = True)
    if N > len(employee) or N<=0:
        return  pd.DataFrame( data = {"getNthHighestSalary("+str(N)+")":[None]}) 
    else:
        return employee[employee.salary == employee.salary.nlargest(N).iloc[-1]][["salary"]].rename(columns = {"salary":"getNthHighestSalary("+str(N)+")"}).drop_duplicates()
