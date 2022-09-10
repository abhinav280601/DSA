class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {

        unordered_set<string> S;

        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (board[i][j] == '.')
                    continue;
                string ch(1, board[i][j]);
                string row = "Row" + to_string(i) + ch;
                string col = "Col" + to_string(j) + ch;
                string box = "Box" + to_string((i / 3) * 3 + j / 3) + ch;

                if (S.find(row) != S.end() || S.find(col) != S.end() || S.find(box) != S.end())
                {
                    return false;
                }
                else
                {
                    S.insert(row);
                    S.insert(col);
                    S.insert(box);
                }
            }
        }

        return true;
    }
};