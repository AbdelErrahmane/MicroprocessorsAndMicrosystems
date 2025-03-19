# README

## Title
**Evaluating the Performance of TinyML Singular and Ensemble Techniques for Intrusion Detection in IoT Networks**

## Authors
- Abderahmane HAMDOUCHI
- Dr. Ali IDRI

## Abstract
This research evaluates the performance of TinyML techniques for intrusion detection in IoT networks. We compare three ensemble techniques (random forest, XGBoost, and extra trees) and three singular techniques (decision tree, Gaussian naive Bayes, and multilayer perceptron) using two feature selection methods on the NF-ToN-IoT-v2 and NF-BoT-IoT-v2 datasets. Evaluations on the Arduino UNO used prediction performance criteria, device metrics, and statistical tests to rank the models. Results show that singular TinyML models outperformed ensemble models for multiclass classification in the IDS-IoT context.

## Keywords
- Singular machine learning
- Ensemble machine learning
- TinyML
- Internet of Things
- Intrusion detection systems
- Arduino UNO



## Methodology
We evaluated 288 models for multiclass classification using six ML techniques with various hyperparameters. The performance was assessed using metrics such as Cohen’s kappa, Matthew’s correlation coefficient, latency, SRAM, and flash memory on the Arduino UNO device.
### Steps

1. **Data Preprocessing**: Cleaned the raw data by removing missing values, duplicates, and irrelevant information. Simplified categorical features and normalized numerical attributes.
2. **Feature Selection**: Applied ANOVA for numerical features and mRMR for categorical features to reduce the number of dimensions.
3. **Model Training**: Trained six ML techniques (DT, NB, MLP, RF, XGB, ET) with various hyperparameters on the NF-ToN-IoT-v2 and NF-BoT-IoT-v2 datasets.
4. **Model Conversion**: Converted the trained models into TinyML format using MicroMLGen and EMLearn libraries.
5. **Model Deployment**: Deployed the TinyML models on the Arduino UNO device.
6. **Performance Evaluation**: Assessed the models using Cohen’s kappa, Matthew’s correlation coefficient, latency, SRAM, and flash memory.
7. **Statistical Analysis**: Used the Scott-Knott test and Borda count voting system to evaluate the statistical significance and rank the models.


## Performance Metrics
The folders `NF-BoT-IoT-v2_Results_Performances_Models` and `NF-ToN-IoT-v2_Results_Performances_Models` contain JSON files with the performance measurements of the machine learning models. These files include metrics evaluation criteria.
## Model Deployment
The folders `NF-BoT-IoT-v2_TinyML_Models_Arduino_C` and `NF-ToN-IoT-v2_TinyML_Models_Arduino_C` contain the code for all generated models to deploy on Arduino. You can perform further experimentation, such as measuring energy consumption, to enhance the evaluation of the models.


### Notebook Steps
1. **Importing Libraries and Loading Data**:
    - Import necessary libraries such as pandas and warnings.
    - Load the dataset from a CSV file.

2. **Feature Deletion**:
    - Define lists of features to be deleted based on different criteria such as categorical features, unused features, target features, and features to be dropped due to high correlation or high variance inflation factor (VIF).
    - Drop the specified features from the dataset.

3. **Data Preprocessing**:
    - Convert specific columns to integer type.
    - Split the dataset into training and testing sets.
    - Reset the index of the datasets.

4. **Scaling of Numerical Values**:
    - Scale numerical features using StandardScaler from sklearn.

5. **Feature Selection**:
    - Apply SelectKBest with f_classif to select the top features based on ANOVA F-test.

6. **Model Training**:
    - Train models using XGBoost and Random Forest with different numbers of estimators.
    - Evaluate the models using metrics such as MCC and Kappa.

7. **Convert Models to TinyML**:
    - Use MicroMLGen to convert trained models to TinyML format.
    - Deploy the models on Arduino UNO and measure performance metrics such as latency, SRAM, and flash memory.


## Requirements
- Python 3.8 or higher
- Jupyter Notebook
- Required Python libraries (specified in `requirements.txt`)

## Structure
1. **Introduction**
2. **Background**
3. **Related Work**
4. **Experimental Design**
5. **Results and Discussion**
6. **Conclusion and Future Work**

## Contact
For any questions or further information, please contact Abderahmane HAMDOUCHI at abderahmane.hamdouchi@um6p.ma.
