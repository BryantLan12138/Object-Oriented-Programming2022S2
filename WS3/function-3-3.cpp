double weightedaverage(int array[], int n){

	double wave = 0;
	double* count = new double[n];
	int record;

	if (n < 1){
		return wave;
	}

	//count the times numbers show in the array
	for (int i=0; i<n; i++){
		record = 0;
		for (int j=0; j<n; j++){
			if (array[i] == array[j]){
				record++;
			}
		}
		count[i] = record;
	}

	//find the weighted average
	for (int i=0; i<n; i++){
		wave += (count[i])*(array[i])/n;
	}




	delete [] count;

	return wave;

}