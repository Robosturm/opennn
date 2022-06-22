//   OpenNN: Open Neural Networks Library
//   www.opennn.net
//
//   B L A N K   A P P L I C A T I O N
//
//   Artificial Intelligence Techniques SL
//   artelnics@artelnics.com

// System includes

#include <cstring>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <time.h>

// OpenNN includes

#include "../opennn/opennn.h"
#include "../opennn/text_analytics.h"

using namespace opennn;
using namespace std;
using namespace Eigen;

int main()
{
    try
    {
/*
        DataSet data_set("iris_flowers.csv");
        NeuralNetwork neural_network(Classification, 4,6,3);
        TrainingStrategy training_strategy(neural_network, data_set);
        training_strategy.perform_training();
        neural_network.save();


        NeuralNetwork neural_network;

        // Training

        DataSet data_set;

        data_set.set_data_file_name("ground_truth.json");

        data_set.read_ground_truth();

        NeuralNetwork neural_network;

        neural_network.add_layer(ScalingLayer);
        neural_network.add_layer(ConvolutionalLayer);
        neural_network.add_layer(PoolingLayer);
        neural_network.add_layer(FlattenLayer);
        neural_network.add_layer(ProbabilisticLayer);

        TrainingStrategy training_stratregy(&neural_network, &data_set);

        training_strategy.perform_training();

        neural_network.save(neural_network.xml);

        Deployment
        RegionBasedObjectDetector object_detector(&neural_network);

        Objects object_detector.detect_objects();
*/

        DataSet data_set;

        data_set.set_data_file_name("C:/Users/alvaromartin/Desktop/fromjson.xml");

        string filename = data_set.get_data_file_name();

        data_set.read_ground_truth("C:/Users/alvaromartin/Desktop/fromjson.xml");

        cout << "Goodbye!" << endl;

        return 0;
    }
    catch(const exception& e)
    {
        cerr << e.what() << endl;

        return 1;
    }
}


// OpenNN: Open Neural Networks Library.
// Copyright (C) Artificial Intelligence Techniques SL.
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
