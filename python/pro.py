import streamlit as st
import pandas as pd
import plotly.express as px
from sklearn.linear_model import LogisticRegression
from sklearn.feature_extraction.text import TfidfVectorizer

st.title('✈ Tweet Sentiment Analysis')

st.sidebar.title('📊 Sentiment Analysis of Airlines')
data = pd.read_csv(r"C:\Users\DELL\Desktop\py c\madhav project.csv")

if st.checkbox("Show Data"):
    st.write(data.head(50))

st.sidebar.subheader('Tweets Analyser')
tweets = st.sidebar.radio('Sentiment Type', ('positive', 'negative', 'neutral'))
filtered_data = data[data['airline_sentiment'] == tweets]

if not filtered_data.empty:
    st.write(filtered_data[['text']].sample(1).iat[0, 0])
    st.write(filtered_data[['text']].sample(1).iat[0, 0])
    st.write(filtered_data[['text']].sample(1).iat[0, 0])
else:
    st.write("No tweets found for this sentiment.")

select = st.sidebar.selectbox('Visualisation Of Tweets', ['Histogram', 'Pie Chart'])
sentiment = data['airline_sentiment'].value_counts()
sentiment_df = pd.DataFrame({'Sentiment': sentiment.index, 'Tweets': sentiment.values})

st.markdown("### Sentiment Count")
if select == "Histogram":
    fig = px.bar(sentiment_df, x='Sentiment', y='Tweets', color='Tweets', height=500)
    st.plotly_chart(fig)
else:
    fig = px.pie(sentiment_df, values='Tweets', names='Sentiment')
    st.plotly_chart(fig)

st.sidebar.markdown('🕒 Time & Location of Tweets')
hr = st.sidebar.slider("Hour of the day", 0, 23)
data['Date'] = pd.to_datetime(data['tweet_created'], errors='coerce')
hr_data = data[data['Date'].dt.hour == hr]

if not st.sidebar.checkbox("Hide", True, key='hide_checkbox'):
    st.markdown("### Tweet Locations by Hour")
    st.markdown("%i tweets between %i:00 and %i:00" % (len(hr_data), hr, (hr+1)%24))
    if not hr_data.empty:
        st.map(hr_data[['lat', 'lon']])
    else:
        st.write("No tweets found at this hour.")

st.sidebar.subheader("Airline tweets by sentiment")
choice = st.sidebar.multiselect("Airlines", data['airline'].unique())

if len(choice) > 0:
    air_data = data[data['airline'].isin(choice)]
    fig1 = px.histogram(air_data, x='airline', y='airline_sentiment', histfunc='count',
                        color='airline_sentiment',
                        labels={'airline_sentiment': 'tweets'},
                        height=600, width=800)
    st.plotly_chart(fig1)

st.markdown("## 🔍 Predict Sentiment of Your Tweet")

X = data['text']
y = data['airline_sentiment']
vectorizer = TfidfVectorizer(stop_words='english')
X_vec = vectorizer.fit_transform(X)
model = LogisticRegression(max_iter=1000)
model.fit(X_vec, y)

tweet_input = st.text_input("✍ Enter your tweet here:")

if tweet_input:
    input_vec = vectorizer.transform([tweet_input])
    prediction = model.predict(input_vec)[0]
    emoji = "😊" if prediction == 'positive' else "😐" if prediction == 'neutral' else "😠"
    st.success(f"*Predicted Sentiment:* {prediction} {emoji}")
    