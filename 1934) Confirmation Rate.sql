# Write your MySQL query statement below
SELECT A.user_id,
CASE WHEN B.user_id IS NULL THEN 0
ELSE ROUND(SUM(B.action = 'confirmed') / COUNT(B.user_id), 2) 
END AS confirmation_rate
FROM Signups A
LEFT JOIN Confirmations B
ON A.user_id = B.user_id
GROUP BY 
A.user_id;
