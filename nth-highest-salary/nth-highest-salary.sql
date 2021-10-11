CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
DECLARE x INT;
SET x = N - 1;

  RETURN (
      SELECT distinct salary FROM employee
      ORDER BY salary DESC  
      LIMIT x, 1
  );
END