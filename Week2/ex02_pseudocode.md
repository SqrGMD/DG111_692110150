โจทย์ A
BEGIN [Score_Grading]
INPUT Grade
IF score>= 80 THEN Grade = "A"
IF ELSE score >= 70 THEN Grade = "B"
IF ESLE score >= 60 THEN Grade = "C"
IF ELSE score >= 50 THEN Grade = "D"
ELSE Grade = "F"
END IF
OUTPUT Grade 

END

โจทย์ B
BEGIN [A_and_B]
INPUT a & b
IF a > b THEN Show "a"
ELSE Show "b"
END IF
OUTPUT "a" or "b"

END

โจทย์ C
BEGIN [IDK]
INPUT N
i = 1
WHILE i ≤ N DO
PRINT i
i = i + 1
END WHILE

END
