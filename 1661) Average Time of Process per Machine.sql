# Write your MySQL query statement below
WITH ct1 AS(SELECT * FROM Activity WHERE activity_type = 'start'),
ct2 AS(SELECT * FROM Activity WHERE activity_type = 'end'),
ct3 AS(SELECT c1.machine_id , c2.timestamp - c1.timestamp AS processing_time FROM ct1 c1 JOIN ct2 c2  ON (c1.machine_id, c1.process_id) = (c2.machine_id, c2.process_id))
SELECT DISTINCT machine_id, round(avg(processing_time),3) AS processing_time FROM ct3 GROUP BY machine_id;
