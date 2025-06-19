# Write your MySQL query statement below
SELECT DISTINCT tweet_id FROM Tweets
WHERE CHAR_LENGTH(content) > 15
