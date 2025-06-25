import pandas as pd
import numpy as np
database = pd.read_csv(r"C:\Users\DELL\Desktop\py c\listing.csv")
# Drop additional unnecessary columns
drop_columns = ['id', 'listing_url', 'scrape_id', 'last_scraped', 'source', 'picture_url',
                'host_id', 'host_url', 'host_thumbnail_url', 'host_picture_url', 'calendar_updated', 'license',
                'description', 'neighborhood_overview', 'host_about', 'host_response_time', 'host_response_rate',
                'host_acceptance_rate', 'host_is_superhost', 'host_location', 'host_listings_count',
                'host_total_listings_count', 'host_verifications', 'host_has_profile_pic', 'host_identity_verified',
                'neighbourhood_cleansed', 'minimum_minimum_nights', 'maximum_minimum_nights',
                'minimum_maximum_nights', 'maximum_maximum_nights', 'minimum_nights_avg_ntm',
                'maximum_nights_avg_ntm', 'calendar_last_scraped', 'has_availability', 'availability_eoy',
                'number_of_reviews_ltm', 'number_of_reviews_l30d', 'number_of_reviews_ly', 'estimated_occupancy_l365d',
                'estimated_revenue_l365d', 'instant_bookable', 'calculated_host_listings_count',
                'calculated_host_listings_count_entire_homes', 'calculated_host_listings_count_private_rooms',
                'calculated_host_listings_count_shared_rooms']
df = pd.DataFrame(database)
df.drop(columns=drop_columns, inplace=True)

# Verify remaining columns
print("Remaining columns:", df.columns)
print()
print("Total columns left:", len(df.columns))
print()

# print(df.head())
#2 
miss_count = df.isnull().sum()
fifty = 0.5 * len(df)
df.replace('N/A', np.nan, inplace=True)  
df = df.dropna(thresh=fifty, axis=1)
for col in drop_columns:
    if df[col].dtype == 'Nan':
        mode_val = df[col].mode()[0]
        df[col].fillna(mode_val, inplace=True)
    else:  
        median_val = df[col].median()
        df[col].fillna(median_val, inplace=True)
