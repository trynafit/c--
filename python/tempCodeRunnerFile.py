science_hsc = df[df['hsc_s'] == 'Science']
# print("Placement rate among students with Science background in HSC:", 
#       science_hsc['status'].value_counts(normalize=True).get('Placed', 0) * 100)
# #how many student have prior work experience
# prior_experience_count = df['workex'].value_counts().get('Yes', 0)
# print("Number of students with prior work experience:", prior_experience_count)
# #what is the minimum and maximum salary offered
# min_salary= df['salary'].min()
# max_salary = df['salary'].max()
# print("Minimum salary offered:", min_salary)
# print("Maximum salary offered:", max_salary)
# #do students with prior work experience get higher salary
# placed_students = df[df['status'] == 'Placed']
# avg_salary_with_experience = placed_students.groupby('workex')['salary'].mean()
# print("Average salary of placed students with prior work experience:\n", avg_salary_with_experience)
# #rate of placement for students with Science background in HSC
# science_students = df[df['hsc_s'] == 'Science']
# total_students_science = len(science_students)
# placed_science_students = len(science_students[science_students['status'] == 'Placed'])
# placement_rate_science = (placed_science_students / total_students_science)
# print("Placement rate for students with Science background in HSC:", placement_rate_science * 100, "%")