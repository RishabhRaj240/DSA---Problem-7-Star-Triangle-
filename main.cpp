void nStarTriangle(int n) {
    for (int i = 1; i <= n; i++) {
	    // Spaces
	    for (int j = 1; j <= n - i; j++) {
		    cout << " ";
	    }
	    // Stars
	    for (int k = 0; k < 2 * i - 1; k++) {
		    cout << "*";
	    }
	    cout << endl;
    }
}
