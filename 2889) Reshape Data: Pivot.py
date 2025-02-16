import pandas as pd

def pivotTable(df: pd.DataFrame) -> pd.DataFrame:
    ans = df.pivot(index='month', columns='city', values='temperature')
    return ans
