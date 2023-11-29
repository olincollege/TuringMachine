from micromlgen import port
import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn import svm
from sklearn.ensemble import RandomForestClassifier
from sklearn.utils import shuffle

# Load dataset
data = pd.read_csv("dataset/dataset.csv")

# Split data into features and labels
X = data.iloc[:, 1:]  # Features
y = data.iloc[:, 0]  # Labels

# X, y = shuffle(X, y)


# Split data into training and testing sets
X_train, X_test, y_train, y_test = train_test_split(
    X, y, test_size=0.2, random_state=42
)

# Classifier
classifier = RandomForestClassifier(
    n_estimators=1500,
    max_depth=20,
    min_samples_split=4,
    min_samples_leaf=2
)
classifier.fit(X_train, y_train)

# Evaluate the classifier
accuracy = classifier.score(X_test, y_test)
print(f"Classifier Accuracy: {accuracy*100}%")

# Convert the trained classifier to C code
# classmap = {0: "0", 1: "1", 2: "_", 3: ">", 4: "#", 5: "X", 6: "Y"}
classmap = {0: "0", 1: "1", 2: "_"}
c_code = port(classifier, classmap=classmap)

# Save the C code to a file
with open("model.h", "w") as f:
    f.write(c_code)
