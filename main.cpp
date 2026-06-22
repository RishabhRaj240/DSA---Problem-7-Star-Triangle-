void nStarTriangle(int n) {
    for (int i = 1; i <= n; i++) {
	    // Spaces
	    for (int j = 1; j <= n - i; j++) {
		    cout << " ";
	    }
	    // Stars
	    for (int j = 0; j < 2 * i - 1; j++) {
		    cout << "*";
	    }
		// Spaces
	    for (int j = 1; j <= n - i; j++) {
		    cout << " ";
	    }
	    cout << endl;
    }
}
