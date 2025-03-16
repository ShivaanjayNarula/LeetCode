import pandas as pd

def find_customers(customers: pd.DataFrame, orders: pd.DataFrame) -> pd.DataFrame:
    customers['customerId'] = customers['id']
    df = pd.merge(left=orders,right=customers,on='customerId',how='right')
    return df[(df.id_x.isna())][['name']].rename(columns={'name':'Customers'})
