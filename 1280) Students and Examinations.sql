# Write your MySQL query statement below
SELECT s.student_id, s.student_name, su.subject_name, COALESCE(COUNT(e.student_id), 0) AS attended_exams
FROM Students s
CROSS JOIN Subjects su
LEFT JOIN Examinations e
ON s.student_id = e.student_id AND su.subject_name = e.subject_name
GROUP BY s.student_id, su.subject_name
ORDER BY s.student_id, su.subject_name;
