/* Write your PL/SQL query statement below */

select
     to_char(activity_date) as day,
     count( distinct user_id) as active_users

from
    Activity

Where 
    activity_date >= '2019-06-28' and activity_date<='2019-07-27'

    group by activity_date;

