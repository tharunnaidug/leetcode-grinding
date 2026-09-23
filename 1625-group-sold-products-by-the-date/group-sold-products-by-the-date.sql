/* Write your PL/SQL query statement below */

select 
    to_char(sell_date) as sell_date,
    count(distinct product) as num_sold,
    listagg(product, ',') within group(order by product) products
from
   (select distinct * from Activities)
    group by sell_date order by sell_date;
