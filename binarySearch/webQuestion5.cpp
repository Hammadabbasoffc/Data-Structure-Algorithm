// https://www.codingninjas.com/studio/problems/painter's-partition-problem_1089557?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTabValue=DISCUSS



bool isPossible(vector<int> &boards, int k, int mid)
{
    int boardCount = 0;
    int painter = 1;
    int n = boards.size();
    for (int i = 0; i < n; i++)
    {
        if (boardCount + boards[i] <= mid)
        {
            boardCount += boards[i];
        }
        else
        {
            painter++;
            if (painter > k || boards[i] > mid)
            {
                return false;
            }
            boardCount = boards[i];
        }
        
    }
    return true;
}
int findLargestMinDistance(vector<int> &boards, int k)
{
    int ans = -1;
    int start = 0;
    int n = boards.size();
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += boards[i];
    }
    int end = sum;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isPossible(boards, k, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        
    }
    return ans;
}