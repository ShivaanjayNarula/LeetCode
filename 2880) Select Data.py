import pandas as pd

def selectData(students: pd.DataFrame) -> pd.DataFrame:
    ans = students[students['student_id'] == 101][['name', 'age']]
    return ans
