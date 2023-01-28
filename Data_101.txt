# Data_Structures


Topic 1:

This is the ability to read, understand, create and communicate data as information.
Rqurements: Mathematics Statistics and Machine Learning
Data consumers must be data literate

Skills:
-Articulate a problem that can be solved using data
-Understand data sources
-Check the adequacy and fiteness of data involved
-Interpret the results of an analysis and extra insights (make meaning off the data)
-Make decisions based on the data
-Explain the business value that is generated from the use case.

Questions a Data Literate Person should be able to answer:
-How do we store the data
-Which are the systems that we use to store the data
-Are the data complete and clean to support a decision
-What are the main xtics of a dataset
-What methodology is applied to analyze the data
-How reliable is the result of an analysis

--------------------------------------------
Basically: Data is communication centred.
	   How well can you articulate data
	   Data is a language.
--------------------------------------------


Topic 2:

A way an organization defined its commitment to data internally determines how important or urgent its need for data literacy is.

Benefits I wish to seek:
- Improve machine/process understanding
- Faster decision making
- Enhance accuracy of prediction - predictive analytics
- Help in process optimization

Data literacy will be a core measure of competence in the near future.

Topic 3: Data Driven Decision Making

- Has evidence of past result
- More information
- Continual growth
- Deeper understanding

Topic 4:

Benefits of Data

- Human/Machine Communication
- Complement managers inputs



Understanding Data: 			Data(are)

Data - Raw facts;
Information - Derived from data {processed data}

Types: 

Quantitative vs Qualitative
Structured vs Unstructured
Data @ Rest vs in Motion @ Batch processing vs Stream processing.
Transactional vs Mater
Small vs Big

Qualitative vs Quantitative

Quant: Are Numerical in Nature
       Can be discreet : integers only or Continuous : Floats/ints/%-ages etc
       Interval or Ratio : Interval - has no abs zero (year a company was founded) Ratio - Measured along a scale with an equal ratio and an abs zero
       
Qualitative : This is descriptive data, its in non-numerical form
They are in: Texts, categories or Integers. Gender, Test results or customer satisfaction
Qualitative data can be Quantified there4 categorized into Nominal or Ordinal or Dichotomous

Structured/Semi/Unstructured

Structured - well organized Relational DB, Excel, CSV: are in a tabular form. Has row(Record) and column(variable)
Semi - XML, HTML, JSON, not tabular but have some structure
Unstr - texts, sensor data, customer spokn/written feedback , emails, media files

Metadata - data abdout the data

In Motion vs at Rest
- Basically, how they lie and how they fkow

At Rest: dat stored in Cloud Servers, Data warehouses, spreadsheets and archives in Laptops, HDD, USB sticks etc
In Motion: flows through a network of systems/ temporarily stores data in one system. Must be protetcted since its sent via ineternet

Big Data:
Data that is too large and complex to be handled by the normal human techniques and softwares
Characterized by: Volume, Variety, velocity (frequency of data flows in), veracity (the accuracy or truthfulness)

Data Storage:
Databases, Data warehouses, Datalake ETL Apache hadoop
Traditional data systems vs Big data system

Database:
Systematic collection of data
Row: A set of related data
Column/Attribute : values of the data in the row.

Data Model : Shows the inter-relationship and data flow btn different tables.
Relational DBs - DB that use relational models. Unique key - ID, efficient and flexible when accessing structured information - SQl 
Language used to query, manipulate data, define and provide access control. Used to retrieve specific information from a DB

Data Warehouses:
BI - Reports, dashboards, visual exploration of data, slicing and dicing etc
Different sources brought together in one common place

Data Mart:
A subset of data warehouse focusing on a single functional area, line of bsn or dept of an organization.

ETL - process
(Source) Extract -> Transform -> Load (DB)

Tranform -> Selecting specific value
	    Recoding (no - 0, yes - 1)
	    Derive new values through calculations
	    Deduplication -> Identify and get rid of repetitive data
	    Joining data from multiple sources
	    Aggreagting multiple rows of data - summary of the data
	    Changing the formart of the data
	    
Apache Hadoop:
Open source
Set of s/w utilities designed to enable the use of a network of comps to solve Big Data problems	    

Data Lake: Data dump: structured, unstr, semi: images, sensor, systems etc


	Data Analysis:
	Indepth study of all the components of a given dataset -> Extract useful info from the data.
	Find trends patterns and anomalies.
	Looking backwards.
	Excel
	
	Data Analytics/Managment
	Involves: Acquisition, Filtering, Extraction, Aggregation, Validation, Cleansing, Analysis
	and visualization.
	Tools and Techniques used allow for prediction of objects of data sets.
	Predicts the future
	Python and R
	
	Statistics... 
	Population vs Sample data -> 100% vs a %age
	Python and R are tools for statistics
	Can be: Descriptive / Inferential
	
	Inferential: Works with sample data to make conclusion about a population
	Allow, from sample data, us to guess, understand and Generalize conclusions. This process 
		is called Induction. Unlike probability that uses Deduction (give us all facts about the population, we will make the decision)
	
	
	Machine Learning: Agos that Improve overtime through experience... find insight from data without being told where to look and make predictions based on data and findings
	Model is basically a formula that takes some inputs and delivers some output
	
	Regression - Relationship btn a dependent and independent variable
	linear vs polynomial vs Multivariate regression
	
	Time Series analysis/forecasting - predict the future value of a series based on the history
	of the series.
	Time series - A sequence of discrete time data, taken at a particular interval. 
	time series analysis vs regression
	
	Forecasting Error #####
	MAE: abs value of the differnce btn predicted and actual values 
	
	Clustering is unsupervised
	
	Association Rules : 
	Market basket Analysis - Discover purchased items combination.
	Store arrangment - can be used for it.
	
	
Data Description: The sole importance is identification of possible issues and patterns.
		  Determines if data is useful for use.
		  
		  Data Quality: Completeness, Accuracy 
		  Desciptive statistics: Describe basic xtics of a dataset, simple summary of the
		  			 sample and the measures.
		  			 Sample size, Measures of Central Tendency, Measures of 
		  			 Spread
		  			 
		  			 
Measure of Central Tendecy:
 -> Focuses on the Average/middle values of a dataset:
 	Mean, Median and Mode
 	Mean - avg of a set : sum of data/ frequency
 	Median - Middle of a datasset: Arrange in numerical order: divide the freq/2,
 		go to that number. Not affected by outliers/extreem values... Its a robust measure 	
 		of central tendency
 	Mode - Most occuring value in data set (arrange in numerical order): can have no/one/more.
 		Also, not affected by outliers therefore, its a robust measure of central tendency.
 		Not that important
 		
 		
 	Mean and Median useful when making comparisons: Median vs Mean values say much about how 
 	data is spread and skewed
 	
Measures of Spread/ Variability and Dispersion : More meaningful insights out of data
	-> How far data is spread from the center and from each other
	 The higher the dispersion, the more the data points and vice versa
	 Spread measures: min/max, range, variance, std dev
	 		Range_ difference btn max/min values in a data set: very sensitive to 
	 		outliers, therefore, not the best to measure variability
	 		Variance_ How far each data point is from the mean, its always positive
	 		Std_dev - sqrt(var): Average distance from the mean
 		
 		
Section 5: Interpreting Data

Different Metrics and Analysis: Give diff types of outputs [Outputs: Statistics, Co-efficients, Probalilities and Errors].
Data Interpretation requires Domain Expertise, also, asking the right kind of questions


	Correlation Analysis:
		- Shows the strength and direction of an existing linear r/ship btn variables.
		- Only applicable on numerical/quantitative values : income vs age
		- Scatter plots are used to represent correlated data
		- If a correlation exists, one should be able to draw a straight line that fits the
			data well- this is a Regression line {positive/negative - one var increase
			the other decreases}.
		- Strong, Perfect and Weak correlation (how far are the data points from the line)
		 or no correlation (data has no relationship, the line is basically flat)
	
	
	
	Correlation Co-efficient:
		- A statistic that summarizes the relationship found in a sctter plot w/a single no.
		- Correlation co-eff range from -1 to +1..
		The higher the abs value of the relation co-eff, the stronger the correlation.
		
		#the r/ship btn variables ought not to be linear, they can be exponential/
		logarithmic
		
		- real world correlation co-eff: 
				<0.25: no corr
				0.25-0.50: weak
				0.50 - 0.75: moderate
				>0.75: strong
		
		
	Correlation is not always = Causation:
		- Correlation only gives statistical eivdence, it does not show causation
	
	Linear Regression: y=mx+c
				y - dependent
				x - idependent var
				m - slope
				c - intercept
	
	Good regression: Small difference btn predicted and observed values
	This we check using the co-eff of determination; How well correlation eqn works R**2 [0/1]
	0 - the regression model explains no relationship btn the variables
	1 - the regression model explains the whole variance in the dependent model
