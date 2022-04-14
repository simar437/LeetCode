SELECT
    NAME,
    SUM(amount) AS BALANCE
FROM
    users u
JOIN
    Transactions t USING (account)
GROUP BY
    u.account
HAVING
    BALANCE > 10000