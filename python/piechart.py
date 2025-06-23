import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

Concert_data = pd.read_csv(r"C:\Users\DELL\Desktop\py c\my_file (1).csv")

"""
Task 1: Data Cleaning and Preprocessing 
1. Load the dataset and inspect the first few rows. 
2. Identify and handle missing values, if any. 
3. Convert monetary columns (Actual Gross, Adjusted Gross) into numerical format. 

4. Convert the Shows and Average Gross columns into numerical format. 
5. Extract the start and end years from the Year(s) column and create separate columns for 
them. 
6. Normalize the artist names by removing special characters
"""
# Load the dataset and inspect the first few rows.
print(Concert_data.head())
print(Concert_data.columns.tolist())

# identify and handle missing values, if any.
# print(Concert_data.isnull().sum())

# Convert monetary columns (Actual gross, Adjusted gross) into numerical format.
Concert_data = Concert_data.rename(columns={
    'Actual\xa0gross': 'Actual gross',
    'Adjusted\xa0gross (in 2022 dollars)': 'Adjusted gross'
})

Concert_data = Concert_data.dropna(subset=['Actual gross', 'Average gross'])

# Cleaning up any hidden characters and symbols before converting
Concert_data['Actual gross'] = Concert_data['Actual gross'].replace(r'[^\d.]', '', regex=True)
Concert_data['Average gross'] = Concert_data['Average gross'].replace(r'[^\d.]', '', regex=True)

# Now convert to numerical format
Concert_data['Actual gross'] = pd.to_numeric(Concert_data['Actual gross'], errors='coerce')
Concert_data['Average gross'] = pd.to_numeric(Concert_data['Average gross'], errors='coerce')


# Convert the Shows and Average gross columns into numerical format.
Concert_data['Shows'] = pd.to_numeric(Concert_data['Shows'], errors='coerce')
Concert_data['Average gross'] = pd.to_numeric(Concert_data['Average gross'], errors='coerce')
print(Concert_data.dtypes)

# 5. Extract the start and end years from the Year(s) column and create separate columns for them.
Concert_data[['Start Year', 'End Year']] = Concert_data['Year(s)'].str.extract(r'(\d{4})[–-]?(\d{4})?')
Concert_data['End Year'] = Concert_data['End Year'].fillna(Concert_data['Start Year'])
Concert_data[['Start Year', 'End Year']] = Concert_data[['Start Year', 'End Year']].astype(int)

# Normalize the artist names by removing special characters
Concert_data['Artist'] = Concert_data['Artist'].str.replace(r'[^\w\s]', '', regex=True).str.strip()

print(Concert_data.head())


"""
Task 2: Exploratory Data Analysis (EDA) and Visualization 
1. Find the artist with the highest total gross earnings. 
2. Identify the artist with the highest average gross per show. 
3. Determine the most frequent artists in the dataset. 
4. Plot the distribution of total gross earnings for the tours. 
5. Create a bar chart of the top 10 highest-grossing tours. 
6. Show the trend of total tour earnings over different years
"""

# 1. Find the artist with the highest total gross earnings.
artist_earnings_df = Concert_data.groupby('Artist',as_index = False)['Actual gross'].sum()

max_earning = artist_earnings_df['Actual gross'].max()
top_artist = artist_earnings_df[artist_earnings_df['Actual gross'] == max_earning]

top_artist = artist_earnings_df[artist_earnings_df['Actual gross'] == max_earning]

print(f"Artist with the highest total gross earnings: {top_artist['Artist'].values[0]} with earnings of ${max_earning}")

# 2. Identify the artist with the highest average gross per show.
avg_gross = Concert_data.groupby('Artist', as_index=False)['Average gross'].mean()
max_gross = avg_gross['Average gross'].max()
top_artist = avg_gross[avg_gross['Average gross'] == max_gross]
print(f"Artist with the highest average gross per show: {top_artist['Artist'].values[0]} with an average gross of ${max_gross}")

# 3. Determine the most frequent artists in the dataset.
most_frequent_artists = Concert_data['Artist'].value_counts().head(10)  
print("Most frequent artists in the dataset:")
print(most_frequent_artists)

# 4. Plot the distribution of total gross earnings for the tours.
plt.figure(figsize=(10, 6))
plt.hist(Concert_data['Actual gross'], bins=30, color='blue', alpha=0.7)
plt.title('Distribution of Total Gross Earnings for Tours')
plt.xlabel('Total Gross Earnings ($)')
plt.ylabel('Frequency')
plt.grid(axis='y', alpha=0.75)
plt.show()

# 5. Create a bar chart of the top 10 highest-grossing tours.
top_10_tours = Concert_data.nlargest(10, 'Actual gross')
plt.figure(figsize=(12, 8))
plt.barh(top_10_tours['Artist'], top_10_tours['Actual gross'])
plt.title('Top 10 Highest-Grossing Tours')
plt.xlabel('Total Gross Earnings ($)')
plt.ylabel('Artist')
plt.gca().invert_yaxis()  # Invert y-axis to have the highest gross at the top
plt.show()

# 6. Show the trend of total tour earnings over different years
plt.figure(figsize=(12, 6))
Concert_data.groupby('Start Year')['Actual gross'].sum().plot(kind='line', marker='o')
plt.title('Trend of Total Tour Earnings Over Years')
plt.xlabel('Year')
plt.ylabel('Total Gross Earnings ($)')
plt.grid()
plt.show()