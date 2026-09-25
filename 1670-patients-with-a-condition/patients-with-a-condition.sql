/* Write your PL/SQL query statement below */
select
    patient_id, patient_name, conditions
from
     Patients
WHERE regexp_like (conditions, '(^| )DIAB1')