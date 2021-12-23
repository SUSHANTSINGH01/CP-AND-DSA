string Solution::addBinary(string A, string B) {

reverse(A.begin(), A.end());

    reverse(B.begin(), B.end());

        int al= A.length();

        int bl= B.length();

            int n = al>=bl? al : bl;

                int c = 0;

                    string result = "";

                        for (int i = 0; i<n; ++i)

                            {

                                int a = i < al? A[i] - '0' : 0;

                               int b = i < bl ? B[i] - '0' : 0;

                               int temp = a + b + c;

                            c = temp / 2;

                           result += to_string(temp%2);

                             }

                            if (c==1)

                                                                               result += to_string(c);

                                                                                        reverse(result.begin(), result.end());

                                                                                            return result;

}
