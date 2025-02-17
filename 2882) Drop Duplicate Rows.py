import pandas as pd

def dropDuplicateEmails(customers: pd.DataFrame) -> pd.DataFrame:
    ans = customers.drop_duplicates(subset=['email'])
    return ans
