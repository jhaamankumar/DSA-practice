
string printSequence(string arr[], string input)
{
    string output = "";

    // length of input string
    int n = input.length();
    for (int i = 0; i < n; i++) {
        // Checking for space
        if (input[i] == ' ')
            output = output + "0";

        else {
            // Calculating index for each
            // character
            int position = input[i] - 'A';
            output = output + arr[position];
        }
    }

    // Output sequence
    return output;
}