# Write your MySQL query statement below
SELECT Request_at as Day, ROUND(SUM(t.Status != "completed") / COUNT(*), 2) as "Cancellation Rate"
    FROM Trips t 
    JOIN Users c ON t.Client_ID = c.Users_ID AND c.Banned = "No"
    JOIN Users d ON t.Driver_ID = d.Users_ID AND d.Banned = "No"
    WHERE Request_at BETWEEN "2013-10-01" AND "2013-10-03"
    GROUP BY Request_at;
