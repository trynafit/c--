import seaborn as sns
import matplotlib.pyplot as plt
import pandas as pd

# Sample DataFrame
data = {
    'Math': [80, 90, 70, 85],
    'Science': [78, 92, 75, 88],
    'English': [85, 87, 90, 82]
}
df = pd.DataFrame(data)

# Create correlation matrix
corr_matrix = df.corr()

# Plot heatmap
sns.heatmap(corr_matrix, annot=True, cmap='coolwarm')
plt.title('Subject Correlation Heatmap')
plt.show()
