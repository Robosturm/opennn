/**
Artificial Intelligence Techniques SL	
artelnics@artelnics.com	

Your model has been exported to this c file.
You can manage it with the main method, where you 	
can change the values of your inputs. For example:

if we want to add these 3 values (0.3, 2.5 and 1.8)
to our 3 inputs (Input_1, Input_2 and Input_1), the
main program has to look like this:
	
int main(){ 
	vector<float> inputs(3);
	
	const float asdas  = 0.3;
	inputs[0] = asdas;
	const float input2 = 2.5;
	inputs[1] = input2;
	const float input3 = 1.8;
	inputs[2] = input3;
	. . .


Inputs Names:
	0) sepal_lenght
	1) sepal_width
	2) petal_lenght
	3) petal_width
*/


#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>


using namespace std;


vector<float> calculate_outputs(const vector<float>& inputs)
{
	const float sepal_lenght = inputs[0];
	const float sepal_width = inputs[1];
	const float petal_lenght = inputs[2];
	const float petal_width = inputs[3];

	double scaled_sepal_lenght = (sepal_lenght-5.843333244)/0.8280661106;
	double scaled_sepal_width = (sepal_width-3.057333231)/0.4358662963;
	double scaled_petal_lenght = (petal_lenght-3.757999897)/1.765298247;
	double scaled_petal_width = (petal_width-1.19933331)/0.762237668;

	double perceptron_layer_1_output_0 = tanh( -1.39003 + (scaled_sepal_lenght*-1.16079) + (scaled_sepal_width*1.90778) + (scaled_petal_lenght*-1.88712) + (scaled_petal_width*-1.49224) );
	double perceptron_layer_1_output_1 = tanh( 1.35644 + (scaled_sepal_lenght*-0.412953) + (scaled_sepal_width*1.54215) + (scaled_petal_lenght*-1.36562) + (scaled_petal_width*-1.75088) );
	double perceptron_layer_1_output_2 = tanh( 3.08377 + (scaled_sepal_lenght*-0.00240421) + (scaled_sepal_width*0.397815) + (scaled_petal_lenght*-2.38544) + (scaled_petal_width*-3.53993) );

	double probabilistic_layer_combinations_0 = -0.0142958 +2.10915*perceptron_layer_1_output_0 +4.3808*perceptron_layer_1_output_1 -0.132654*perceptron_layer_1_output_2 ;
	double probabilistic_layer_combinations_1 = 1.05415 -1.80546*perceptron_layer_1_output_0 -0.533693*perceptron_layer_1_output_1 +2.87931*perceptron_layer_1_output_2 ;
	double probabilistic_layer_combinations_2 = -1.34472 -0.523184*perceptron_layer_1_output_0 -3.49376*perceptron_layer_1_output_1 -2.61436*perceptron_layer_1_output_2 ;

	double sum = exp(probabilistic_layer_combinations_0) + exp(probabilistic_layer_combinations_1) + exp(probabilistic_layer_combinations_2);

	double iris_setosa = exp(probabilistic_layer_combinations_0)/sum;
	double iris_versicolor = exp(probabilistic_layer_combinations_1)/sum;
	double iris_virginica = exp(probabilistic_layer_combinations_2)/sum;

	vector<float> out(3);
	out[0] = iris_setosa;
	out[1] = iris_versicolor;
	out[2] = iris_virginica;

	return out;
}


int main(){ 

	vector<float> inputs(4); 

	const float sepal_lenght = /*enter your value here*/; 
	inputs[0] = sepal_lenght;
	const float sepal_width = /*enter your value here*/; 
	inputs[1] = sepal_width;
	const float petal_lenght = /*enter your value here*/; 
	inputs[2] = petal_lenght;
	const float petal_width = /*enter your value here*/; 
	inputs[3] = petal_width;

	vector<float> outputs(3);

	outputs = calculate_outputs(inputs);

	printf("These are your outputs:\n");
	printf( "iris_setosa: %f \n", outputs[0]);
	printf( "iris_versicolor: %f \n", outputs[1]);
	printf( "iris_virginica: %f \n", outputs[2]);

	return 0;
} 

