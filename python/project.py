import streamlit as st
import pandas as pd
import numpy as np
import seaborn as sns
import matplotlib.pyplot as plt

from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression, LogisticRegression
from sklearn.metrics import r2_score, mean_absolute_error
from sklearn.preprocessing import StandardScaler

# Title
st.title("🧬 Diabetes Prediction App (with Analysis)")
st.write("Built using Logistic & Linear Regression")

# Load dataset

df = pd.read_csv(r"C:\Users\DELL\Desktop\py c\diabetes.csv")

# Sidebar - show data
if st.sidebar.checkbox("Show Raw Data"):
    st.subheader("Raw Dataset")
    st.write(df)

# Correlation Heatmap
if st.sidebar.checkbox("Show Correlation Heatmap"):
    st.subheader("Correlation Heatmap")
    corr = df.corr()
    fig, ax = plt.subplots(figsize=(10, 6))
    sns.heatmap(corr, annot=True, cmap='coolwarm', ax=ax)
    st.pyplot(fig)

# Split and scale
X = df.drop('Outcome', axis=1)
y = df['Outcome']

scaler = StandardScaler()
X_scaled = scaler.fit_transform(X)

x_train, x_test, y_train, y_test = train_test_split(X_scaled, y, test_size=0.2, random_state=42)

# Train models
lr = LinearRegression()
lr.fit(x_train, y_train)
lr_pred = lr.predict(x_test)

logr = LogisticRegression()
logr.fit(x_train, y_train)
logr_pred = logr.predict(x_test)

# Show model metrics
st.sidebar.subheader("📊 Model Evaluation")
st.sidebar.write("**Linear Regression**")
st.sidebar.write("R² Score:", round(r2_score(y_test, lr_pred), 3))
st.sidebar.write("MAE:", round(mean_absolute_error(y_test, lr_pred), 3))

st.sidebar.write("**Logistic Regression**")
st.sidebar.write("R² Score:", round(r2_score(y_test, logr_pred), 3))
st.sidebar.write("Accuracy:", round(logr.score(x_test, y_test), 3))

# Input form
st.header("Enter Patient Data")

with st.form("predict_form"):
    pregnancies = st.number_input("Pregnancies", 0, 20)
    glucose = st.number_input("Glucose", 0, 200)
    bp = st.number_input("Blood Pressure", 0, 150)
    skin = st.number_input("Skin Thickness", 0, 100)
    insulin = st.number_input("Insulin", 0, 1000)
    bmi = st.number_input("BMI", 0.0, 100.0)
    dpf = st.number_input("Diabetes Pedigree Function", 0.0, 2.5)
    age = st.number_input("Age", 1, 120)
    
    submitted = st.form_submit_button("Predict")

if submitted:
    input_data = np.array([[pregnancies, glucose, bp, skin, insulin, bmi, dpf, age]])
    input_scaled = scaler.transform(input_data)
    
    result = logr.predict(input_scaled)[0]
    probability = logr.predict_proba(input_scaled)[0][1]
    
    st.subheader("Prediction Result:")
    if result == 1:
        st.error("🔴 The model predicts this person **has diabetes**.")
    else:
        st.success("🟢 The model predicts this person **does not have diabetes**.")
    
    st.write(f"Prediction confidence: `{probability*100:.2f}%`")

